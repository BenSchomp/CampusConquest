import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
public class CreateFromPointers extends GhidraScript {
  public void run() throws Exception {
    Memory mem = currentProgram.getMemory();
    MemoryBlock text = mem.getBlock(".text");
    int created = 0;
    for (String name : new String[]{".rdata", ".data"}) {
      MemoryBlock b = mem.getBlock(name);
      for (Address a = b.getStart(); a.compareTo(b.getEnd().subtract(4)) < 0; a = a.add(4)) {
        long v = mem.getInt(a) & 0xffffffffL;
        Address t = toAddr(v);
        if (text.contains(t) && getFunctionAt(t) == null && getFunctionContaining(t) == null) {
          new DisassembleCommand(t, null, true).applyTo(currentProgram);
          if (new CreateFunctionCmd(t).applyTo(currentProgram)) created++;
        }
      }
    }
    for (long extra : new long[]{0x402a10L}) {
      Address t = toAddr(extra);
      if (getFunctionAt(t) == null) { new DisassembleCommand(t, null, true).applyTo(currentProgram); new CreateFunctionCmd(t).applyTo(currentProgram); created++; }
    }
    println("created " + created);
  }
}

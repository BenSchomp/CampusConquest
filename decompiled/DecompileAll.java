import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
public class DecompileAll extends GhidraScript {
  public void run() throws Exception {
    DecompInterface decompiler = new DecompInterface();
    decompiler.openProgram(currentProgram);
    PrintWriter out = new PrintWriter(new FileWriter(getScriptArgs()[0]));
    for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
      DecompileResults r = decompiler.decompileFunction(f, 120, monitor);
      out.println("// ===== " + f.getName() + " @ " + f.getEntryPoint());
      if (r.decompileCompleted()) out.println(r.getDecompiledFunction().getC());
    }
    out.close();
  }
}

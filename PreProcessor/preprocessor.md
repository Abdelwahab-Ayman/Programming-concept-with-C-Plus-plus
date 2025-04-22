- Prior to compilation, source code is transformed by a preprocessor.
- The preprocessor output is then passed to the compiler for compilation.
- Preprocessor behavior can be controlled by preprocessor directives.
  
### Preprocessor Directive Structure:
A preprocessor directive occupies a single line and consists of:
1. A hash character (`#`)
2. A preprocessor instruction (e.g., `define`, `undef`, `include`, `if`, `ifdef`, `ifndef`, `else`, `elif`, `endif`, `line`, `error`, `pragma`)
3. Arguments (depending on the instruction)
4. A line break

### Preprocessor Uses:
- Conditionally compile parts of a source file
- Define macros and perform macro expansion
- Include other files
- Force an error to be generated

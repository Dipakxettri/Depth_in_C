`gcc filename.c -o filename` - converts the c program into a computer understandable format according to os we are running this file.

## setps this commands follows to convert a code into low level.

### 1. Preprocessing.
=> deals with 
- #include files,
- #define macros,
- conditionals  
it outputs a plain `.i` file (pure C code with no directives).  
**command:** `gcc -E filename.c -o filename.i`

### 2. Compilation  
handled by the compiler (`cc1`).  
translate the previous `.i` file to assembly language.  
performs:
- syntax and semantic analysis.
- optimization (basic level).  
it outputs a `.s` file (assembly code).  
**command:** `gcc -S filename.i -o program.s`

### 3. Assembly  
handled by the assmebler (`as`).  
converts `.s` file into machine code, producing an object file (`.o`)  
**command:** `gcc -c filename.s -o filename.o`  
as an object `.o` file is not human redable, to make it more human redable we need to again dump the `.o` file into assembly code using:  
**command:** `objdump -d filename.o`

### 4. Linking  
handeled by linker (`ld`)  
combines one or more object files and libraries into a final execution.  
Resolves: 
- external function falls.
- standard libraries (`printf`).  
it execute a binary  
**command:** `gcc filename.o -o filename`

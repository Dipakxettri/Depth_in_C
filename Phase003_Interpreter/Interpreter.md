## Interpreter also follows the three steps:

### 1. Lexical Analysis (Tokenizer / Lexer / Scanner)
- Breaks code into tokens.
- **Output:** A list of tokens.
- **Example:** `x = 5 + 6` will be like `IDENTIFIER(x)`, `EQUALS`, `NUMBER(5)`, `PLUS`, `NUMBER(6)`.

**Involves:**
- Skipping whitespaces.
- Recognizing numbers, keywords, strings, operations.
- Converts to token objects (with type and value).
- A finite state machine is used to identify tokens based on characters.

---

### 2. Parsing
- Tokens are converted into a tree using grammar rules — **AST (Abstract Syntax Tree)**.
- **Example:**
    ```plaintext
    x = 5 + 6
    ```
    The tree looks like:

    ```
    assign(
        target = Name("x"),
        value = BinOp(
            left = Num(5),
            op = Add(),
            right = Num(6)
        )
    )
    ```

---

### 3. Semantic Analysis
- Ensure correctness.
- Are types compatible?
- Resolve variable scopes, function definitions, etc.

---

### 4. Intermediate Representation (Optional)
Some interpreters convert the AST to bytecode or an IR (Intermediate Representation).

**Example:** `x = 5 + 6`

In this representation:
- `LOAD_CONST` loads a constant value (like `5` or `6`).
- `BINARY_ADD` performs the addition of the two constants.
- `STORE_NAME` stores the result into the variable `x`.

This is what an interpreter or virtual machine might execute step by step.





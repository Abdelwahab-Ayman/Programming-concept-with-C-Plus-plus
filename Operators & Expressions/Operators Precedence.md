#### Operator Precedence
| Precedence | Operator | Name                  | Associativity      |
|------------|----------|----------------------|--------------------|
| 1          | `::`     |(Scope Resolution)        | None               |
| 2          | `.`      |(Member Selection - Object) | Left to Right      |
|            | `->`     |(Member Selection - Pointer) |                  |
|            | `[]`     | (Subscripting)            |                    |
|            | `()`     |(Function Call)           |                    |
|            | `++`     |(Post-Increment)          |                    |
|            | `--`     |(Post-Decrement)          |                    |
#### Other Operator Precedence

| Precedence | Operator Name                  | Syntax              | Associativity      |
|------------|--------------------------------|---------------------|--------------------|
| 3          | `sizeof` (Size of Object/Type) | `sizeof(a)`         | Right to Left      |
|            | `++` (Pre-Increment)          | `++a`               |                    |
|            | `--` (Pre-Decrement)          | `--a`               |                    |
|            | `~` (Bitwise NOT)             | `~a`                |                    |
|            | `!` (Logical NOT)             | `!a`                |                    |
|            | `-` (Unary Minus)             | `-a`                |                    |
|            | `+` (Unary Plus)              | `+a`                |                    |
|            | `&` (Address of)              | `&a`                |                    |
|            | `*` (Indirection)             | `*a`                |                    |
|            | `co_await` (Await)            | `co_await a`        |                    |
|            | `new` (Allocate Storage)      | `new T`             |                    |
|            | `new[]` (Allocate Storage - Array) | `new T[a]`      |                    |
|            | `delete` (Deallocate Storage) | `delete a`          |                    |
|            | `delete[]` (Deallocate Storage - Array) | `delete[] a` |                    |
|            | `()` (Cast)                   | `(T) a`             |                    |

| Precedence | Operator Name                  | Syntax              | Associativity      |
|------------|--------------------------------|---------------------|--------------------|
| 4          | `.*` (Member Selection - Objects) | `a.*b`          | Left to Right      |
|            | `->*` (Member Selection - Pointers) | `a->*b`       |                    |
| 5          | `*` (Multiplication)           | `a * b`             | Left to Right      |
|            | `/` (Division)                 | `a / b`             |                    |
|            | `%` (Modulus)                  | `a % b`             |                    |
| 6          | `+` (Addition)                 | `a + b`             | Left to Right      |
|            | `-` (Subtraction)              | `a - b`             |                    |
| 7          | `<<` (Left Shift)              | `a << b`            | Left to Right      |
|            | `>>` (Right Shift)             | `a >> b`            |                    |
| 8          | `<=>` (Three-Way Comparison)   | `a <=> b`           | Left to Right      |
| 9          | `<` (Less Than)                | `a < b`             | Left to Right      |
|            | `<=` (Less Than or Equal)       | `a <= b`            |                    |
|            | `>` (Greater Than)             | `a > b`             |                    |
|            | `>=` (Greater Than or Equal)    | `a >= b`            |                    |


| Precedence | Operator Name                  | Syntax              | Associativity      |
|------------|--------------------------------|---------------------|--------------------|
| 10         | `==` (Equality)                | `a == b`            | Left to Right      |
|            | `!=` (Inequality)              | `a != b`            |                    |
| 11         | `&` (Bitwise AND)              | `a & b`             | Left to Right      |
| 12         | `^` (Bitwise XOR)              | `a ^ b`             | Left to Right      |
| 13         | `|` (Bitwise OR)               | `a | b`             | Left to Right      |
| 14         | `&&` (Logical AND)             | `a && b`            | Left to Right      |
| 15         | `||` (Logical OR)              | `a || b`            | Left to Right      |

#### Member and Pointer Operators
| Operator Name                  | Syntax          |
|--------------------------------|-----------------|
| Array Subscript                | `a[b]`          |
| Indirection                    | `*a`            |
| Address of                     | `&a`            |
| Member Selection               | `a.b`           |
| Member Selection (Pointer)     | `a->b`          |
| Member Selection (Pointer to Member) | `a.*b`      |
| Member Selection (Pointer to Member via Pointer) | `a->*b` |
#### Other Operators 
| Operator Name                  | Syntax          |
|--------------------------------|-----------------|
| Function Call                  | `a(...)`        |
| Comma                         | `a, b`          |
| Ternary Conditional            | `a ? b : c`     |
| Scope Resolution               | `a::b`          |
| Sizeof                        | `sizeof(a)`     |
| Parameter-Pack Sizeof          | `sizeof...(a)`  |
| Alignof                       | `alignof(T)`    |
| Allocate Storage               | `new T`         |
| Allocate Storage (Array)       | `new T[a]`      |
| Deallocate Storage             | `delete a`      |
| Deallocate Storage (Array)     | `delete[] a`    |
#### Other Operators
| Operator Name                  | Syntax                  |
|--------------------------------|-------------------------|
| Type ID                        | `typeid(a)`             |
| Type Cast                      | `(T) a`                 |
| Const Cast                     | `const_cast<T>(a)`      |
| Static Cast                    | `static_cast<T>(a)`     |
| Dynamic Cast                   | `dynamic_cast<T>(a)`    |
| Reinterpret Cast               | `reinterpret_cast<T>(a)`|
| Throw                          | `throw a`               |
| Noexcept                       | `noexcept(e)`           |
| Await                          | `co_await e`            |
| Yield                          | `co_yield e`            |

#         Control Statements
* Normally, statements in a program are executed one after the other in the order in which they re written. 
* This is called **sequential execution**
* There are control statements enable you to specify that the next statement to be executed may be other than the next one in sequence.
* This is called **transfer of control** 
#### The control statements are categorized in almost two groups:
1. Selection control statements 
2. Repetition control statements 
# Sequential Execution
* [ ]  A sequence is an ordered list of something. Sequential execution means that each command in a program script executes in the order in which it is listed in the program. The first command in the sequence executes first and when it is complete, the second command executes, and so on.
* [ ] Each of the four control flow diagram variations below, show graphically what sequential execution means. Multiple sequential statements are often shown as a single block of statements (as shown in two of the figures). 
* [ ] For example, values are assigned to a and b before they are used to calculate the sum a+b. The following example is a sequence of commands that computes the average of three values.



```mermaid
flowchart TD
    A[a = input(....);] -->|the order| B(Go shopping)
    B --> C{Let me think}
    C -->|One| D[Laptop]
    C -->|Two| E[iPhone]
    C -->|Three| F[fa:fa-car Car]
```

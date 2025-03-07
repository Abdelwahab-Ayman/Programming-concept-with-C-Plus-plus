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

![](https://pages.cs.wisc.edu/~cs310-1/modules/Programming/Sequential%20and%20Iterative%20Execution/Sequential%20Execution/seq_flow.gif)
1. Input the first value and save it as sum.
2. Input the second value and save it as nextValue.
3. Add nextValue to sum.
4. Input the third value and save it as nextValue.
5. Add nextValue to sum.
6. Divide sum by three and save the result as avg.
7. Display the average to the user.

##### The order that the values are input and saved matter doesn't matter, but we can not calculate the average until all three values have been entered and added to together.

##### The next step is to translate the sequential algorithm to code.
#### ##Control Statements : Selection Statements 

 • Selection statements are used to choose among alternative courses of action.
 
1. IF Statment
2. IF-ELSE Statment
3. IF-ELSE IF Statment
4. Nested IF
5. Combining More Than One Condition
6. SWITCH Statment

 For example, suppose the passing mark on an exam is 60.
 
> The pseudocode statement–
> If student’s marks is greater than or equal to 60  Then Print “Passed"
![](https://github.com/Abdelwahab-Ayman/Programming-concept-with-C-Plus-plus/blob/main/IMGs/java-if-statement-flowchart-768x510.png?raw=true)

#### ##Control Statements : Repetition statements 

* Some times we need to repeat a specific course of actions either a specified number of times or until a particular condition is being satisfied.
 
*  For example :

– To calculate the Average grade for 10 students
<br>
– To calculate the bonus for 10 employees or
<br>
– To sum the input numbers from the user as long as he/she enters positive numbers.
<br>

* There are three methods by way of which we can repeat a part of a program. They are:

 – (a) Using a while statement
 <br>
 – (b) Using a do-while statement
 <br>
 – (C) Using a for statement 
 <br>
 – (d) Using Nested for statement

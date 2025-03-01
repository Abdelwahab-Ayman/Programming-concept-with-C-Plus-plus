#include<iostream>
using namespace std;
//Excercise 5
/* Example, print out the student grade according to the following formulas:
    A for exam marks greater than or equal 90 and less than or equal 100 ,
    B for exam marks greater than or equal 80 and less than 90 ,
    C for exam marks than or equal to 70 and less than 80 ,
    D for exam marks than or equal to 60, and less than 70 ,
    F for all other marks.
*/
int main(){
int marks;
//we need to declare variable of type integar that we will name it marks
cout<<"Please Enter Your Grades : "<<endl;
cin>>marks;
//print out the massage that will ask the person to enter
//to can use I/O ,we need to include standard lib that is implemented in c++ called iostream
//we will store the number entered in variable called marks;
if(marks >=90 && marks <=100){
    cout<<"Your GPA is : A "<<endl;
}else if(marks >=80 && marks<90){
    cout<<"Your GPA is : B "<<endl;
}else if(marks >=70 && marks<80){
    cout<<"Your GPA is : C "<<endl;
}else if(marks >=60 && marks<70) {
    cout<<"Your GPA is : D "<<endl;
}else{
    cout<<"Your GPA is : F "<<endl;
};
//note that we have two condition and one statement so we use if...else formula
/*
to gather two condition in one expression we use operator "&&"
"THIS IS lOGICAL /RELATIONAL OPERATORS"
| Operator Name      | SYNTAX       |
|----------------|----------------|
|three-way comparison   | a <=> b |
|equal                  | a == b  |
|not equal              | a != b  |
|greater than           | a > b   |
|less than              | a < b   |
|greater than or equal  |a >= b   |
|less than or equal     |a <= b   |
|logical negation       | !a      |
|logical AND            |a && b   |
|logical OR             |a || b   |

*/
/*
logical-and operator (i.e., &&): ⁓⁓⁓⁓⁓⁓⁓
[C++17 §8.14]
2 groups left-to-right
2 result true if both operands are true, and false otherwise
2 second operand is not evaluated if first operand is false (in case of built-in
logical-and operator)
*/
return 0;
}

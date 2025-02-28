#include<iostream>
using namespace std;
//EXAMPLE 4
/* write a program that ask the user to Enter 2 numbers and print out whether they are equal or there is one which is greater than the other.*/
int main(){
    int num;
    //we need to declare variable of type integar that we will name it num
    cout<<"Please Enter Your Number"<<endl;
    cin>>num;
//print out the massage that will ask the person to enter
//to can use I/O ,we need to include standard lib that is implemented in c++ called iostream
//we will store the number entered in variable called num;
    if(num>=0 && num<=100){
        cout<<"Your Number is between 0 and 100"<<endl;
    }else{
    cout<<"Your Number is not between 0 and 100"<<endl;
    }
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


#include<iostream>
using namespace std;
//EXAMPLE 2
/* write a program that accept an integer from the user and print out whether it is Positive or Negative number */
int main(){
    int num;
//we need to declare variable of type integar that we will name it num
    cout<<"Please Enter Any Number"<<endl;
//print out the massage that will ask the person to enter
//to can use I/O ,we need to include standard lib that is implemented in c++ called iostream
    cin>>num;
//we will store the number entered in variable called num;
    if(num>0){
        cout<<"This is Positive Number"<<endl;
    }else if(num<0){
//note that if use "else" instead of "else if" we cant implement the condition [num<0]
//to use it without condition it will be proper
/*
example that tests for more than one condition:
int x = someValue;
if (x > 0) {
std::cout << "x is positive\n";
} else if (x < 0) {
std::cout << "x is negative\n";
} else {
std::cout << "x is zero\n";
}
*/
/*
    if(num>0){
        cout<<"This is Positive Number"<<endl;
    }else {
        cout<<"This is Negative Number"<<endl;
//this is correct code will print out the same result
*/
    cout<<"This is Negative Number"<<endl;
    };
/*advisable to always include brace brackets even when not necessary, as
this avoids potential bugs caused by forgetting to include brackets later
when more statements added to branch of if */
return 0;
}


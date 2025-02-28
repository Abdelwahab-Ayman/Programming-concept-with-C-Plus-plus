#include<iostream>
using namespace std;
//EXAMPLE 3
/* write a program that ask the user to Enter 2 numbers and print out whether they are equal or there is one which is greater than the other.*/
int main(){
    int num1;
    int num2;
//we need to declare variable of type integar that we will name it num1
//we need to declare second variable of type integar that we will name it num2
    cout<<"Please Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Please Enter The second number : "<<endl;
    cin>>num2;
//print out the massage that will ask the person to enter
//to can use I/O ,we need to include standard lib that is implemented in c++ called iostream
//we will store the number entered in variable called num1&num2;
    if(num1 == num2){
        cout<<"The Numbers Is EQUAL"<<endl;
    }else if(num1>num2){
    cout<<"The First number is greater than the second number"<<endl;
    }else if(num1<num2){
    cout<<"The Second number is greater than the first number"<<endl;
    }else{
    cout<<"Please Try Again"<<endl;
    };
/*
here we have more than condition
1-the numbers is equal
2- the first number is greater than the second number
3- the first number is lower than the second number.
*/
//here we can`t use else alone we need to use else if
//we can implement more than condition in the first if(expression)
//but that will be valid if we have one print out massage
//here we will have one statement for every expression
/*
if (num1 == num2 & num1>num2){
    cout<<""the condition is true
}else{
    the condition is false}
*/
return 0;
}


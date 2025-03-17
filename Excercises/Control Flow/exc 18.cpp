#include<iostream>
#include<cmath>
using namespace std;
//Example : Write a program that calculates the Factorial for any given positive number.

int x;
//we will create variable of type integar we will call it x
int recursive_factorial(int n);
//declare function that will return typr is integar and will take parameter one parameter of type integar and we will donate it to n
int main(){
cout<<"Please Enter Number"<<endl;
cin>>x;
//we will store the number that given from user in x
if(x>=0){
cout<<"The factorial for number you have entered is :"<<recursive_factorial(x)<<endl;
}else{
cout<<"Please Enter Positive Number"<<endl;
};
//we will call the function to use it in argument X
return 0;
}
//function definition
int recursive_factorial(int n){
if (n==0){
    return 1;
}else if(n<0){
    cout<<"Please Enter Positive Number"<<endl;
}
else{
   return n*recursive_factorial(n-1);
   }
};


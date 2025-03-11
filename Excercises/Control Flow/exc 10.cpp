#include<iostream>
using namespace std;
// Example : Write a program To print out the sum of the numbers entered from the user as long as he/she enters positive numbers.
int num1, num2;
//declare two variables called num1 & num2
int add(int a,int b);
//declare function called add that will return type is int and will accept two parameter of type int called a&b
int main(){
	cout<<"Please Enter Positive Number 1"<<endl;
	cin>>num1>>num2;
	if(num1&&num2 >= 1){
		cout<<add(num1,num2)<<endl;
	}else{
		cout<<"Please Enter Positive Numbers"<<endl;
	};
return 0;
}
int add(int a,int b){
	int c;
	c = a + b;
	return c;
};
	

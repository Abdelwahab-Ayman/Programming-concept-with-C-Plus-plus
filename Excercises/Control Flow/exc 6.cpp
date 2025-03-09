#include<iostream>
using namespace std;
//Excercise 6
/* A company insures its Employees in the following cases:
– Employee is married.
– Employee is an Single male above 30 years of age.
– Employee is an Single female above 25 years of age.
– Conditions :
Marital status = ‘M’; OR
Marital Status =‘S’ and Sex=‘M’ and Age >30 OR
Marital Status =‘S’ and Sex=‘F’ and Age >25 
*/
int main(){
int ages;
char* status;
char* gender;
cout<<"Please Enter Your age : "<<endl;
cin>>ages;
cout<<"Are You Married ? "<<endl;
cout<<"Y or N"<<endl;
cin>>status;
cout<<"What is your gender?"<<endl;
cout<<"M or F"<<endl;
cin>>gender;
if(ages>=30&& gender=="M"&& status=="Y"){
	cout<<"Insured";
}else{
	cout<<"Your Insurance is not covered";
}
return 0;
}

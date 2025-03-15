#include<iostream>
using namespace std;
int grade[4];
int num1, num2;
int add(int a,int b,int c,int d,int e);
int calc_avg(int x);
int main(){
cout<<"Please Enter Grades for first student"<<endl;
cin>>grade[0];
cout<<"Please Enter Grades for second student"<<endl;
cin>>grade[1];
cout<<"Please Enter Grades for third student"<<endl;
cin>>grade[2];
cout<<"Please Enter Grades for fourth student"<<endl;
cin>>grade[3];
cout<<"Please Enter Grades for fifth student"<<endl;
cin>>grade[4];
cout<<"avarege Calculation for all fifth grades"<<endl;
int calc = add(grade[0],grade[1],grade[2],grade[3],grade[4]);
//cin>>calc;>>add(grade[0],grade[1],grade[2],grade[3],grade[4]);
cout<<calc_avg(calc)<<endl;

return 0;
}

int add(int a,int b,int c,int d,int e){
	int z;
	z = a + b +c +d+e;
	return z;
};
int calc_avg(int x){
    int v = x/5;
    return v;
};

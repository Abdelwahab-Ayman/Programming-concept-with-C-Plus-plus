#include<iostream>
// Include the cmath library
#include <cmath>
using namespace std;
int add(int a,int b,int c,int d,int e,int f);
int grade[5];
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
cout<<"Please Enter Grades for sixth student"<<endl;
cin>>grade[5];
int calc = add(grade[0],grade[1],grade[2],grade[3],grade[4],grade[5]);

cout<<"avarege Calculation for all fifth grades"<<endl;

//cin>>calc;>>add(grade[0],grade[1],grade[2],grade[3],grade[4]);
cout<<calc_avg(calc)<<endl;

return 0;
}
int add(int a,int b,int c,int d,int e,int f){
	int z;
	z = a + b +c +d+e;
	return z;
};
int calc_avg(int x){
    int v = x/6;
    return v;
};

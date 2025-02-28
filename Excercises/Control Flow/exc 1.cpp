#include<iostream>
using namespace std;
// EXAMPLE 1
/* write a program that accept an integer from the user and in case this integer is even print out the following message
“This number is even “ */
int main(){
    int num;
//we need to declare variable of type integar that we will name it num
    cout<<"Please Enter Any Number"<<endl;
//print out the massage that will ask the person to enter
//to can use I/O ,we need to include standard lib that is implemented in c++ called iostream
    cin>>num;
//we will store the number entered in variable called num;
    if(num %2 == 0){
        cout<<"The number is even"<<endl;
    }else{
    cout<<"The number is not even"<<endl;
    };
/*advisable to always include brace brackets even when not necessary, as
this avoids potential bugs caused by forgetting to include brackets later
when more statements added to branch of if */
return 0;
}


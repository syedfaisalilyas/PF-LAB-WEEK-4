#include <iostream>
using namespace std;
void Greater(int,int);
main(){
    int num1,num2;
    while(true){
        cout<<"Enter Number 1:";
        cin>>num1;
        cout<<"Enter Number 2:";
        cin>>num2;
        Greater(num1,num2);
       }    
  
    
}
void Greater(int num1,int num2){
    if(num1>num2){cout<<num1<<"is greater than"<<num2<<endl;}
    if(num1<num2){cout<<num2<<"is greater than"<<num1<<endl;}
}
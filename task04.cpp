#include <iostream>
using namespace std;
void func(int);
main(){

       int num;
       while(true){
       cout<<"Enter your Number:";
       cin>>num;
       func(num);
                   }

      }

void func(int num)
        { 
          if(num%2 == 0){cout<<"The number is even"<<endl;}
          if(num%2 != 0){cout<<"The number is odd"<<endl;}
        }
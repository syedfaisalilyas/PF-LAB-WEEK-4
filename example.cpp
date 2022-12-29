#include <iostream>
using namespace std;
void add(int,int);
void product(int,int);

main(){
int num1,num2;
cin>>num1;
cin>>num2;
add(num1,num2);
product(num1,num2);

}

void add(int num1,int num2){
int sum;
sum = num1+num2;
cout<<"Sum:"<<sum<<endl;
}

void product(int num1,int num2){
int product;
product = num1*num2;
cout<<"Product:"<<product<<endl;

}
#include <iostream>
using namespace std;
void add(int,int);
void product(int,int);
void substract(int,int);
void division(int,int);

main(){
int num1,num2;
char operation;

while(true){
cout<<"Enter number1:";
cin>>num1;
cout<<"Enter number2:";
cin>>num2;
cout<<"Enter any operation (+,-,*,/)";
cin>> operation;
if (operation == '+')
 {
 add(num1,num2); 
 }
if (operation == '*') 
 {
 product(num1,num2);
 }
if (operation == '-')
 {
  substract(num1,num2);
 }
if (operation == '/')
 {
 division(num1,num2);
  }
}
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

void substract(int num1,int num2){
    int substract;
    substract = num1-num2;
    cout<<"SUBTRACTION:"<<substract<<endl;
}

void division(int num1,int num2){
int division;
division = num1/num2;
cout<<"Division:"<<division<<endl;

}
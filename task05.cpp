#include <iostream>
using namespace std;
void CalculateBill(string,float,float);
main(){
     string day;
     float amount,dis_amount;
     while(true){
     cout<<"Enter the day:";
     cin>> day;
     cout<<"Enter the total amount:";
     cin>> amount;
     dis_amount = amount-(10*amount)/100;
     CalculateBill(day,dis_amount,amount);}
        }

void CalculateBill(string day,float dis_amount,float amount){
       
      if(day == "sunday")
               {cout<<"Your discounted amount is:" << dis_amount<<endl;}
      if(day != "sunday")
               {cout<<"There is no discount today!"<<endl<<"Your total amount is:"<<amount<<endl;}

}
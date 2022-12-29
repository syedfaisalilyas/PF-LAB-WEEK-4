#include <iostream>
using namespace std;
void CalculateBill(string,float,float);
main(){
     string day;
     float amount,dis_amount1,dis_amount2;
     while(true){
     cout<<"Enter the day:";
     cin>> day;
     cout<<"Enter the total amount:";
     cin>> amount;
     dis_amount1 = amount - (10*amount)/100;
     dis_amount2 = amount - (5*amount)/100;
     CalculateBill(day,dis_amount1,dis_amount2);}
        }

void CalculateBill(string day,float dis_amount1,float dis_amount2){
       
      if(day == "sunday")
               {cout<<"Your discounted amount is:" << dis_amount1 <<endl;}
      if(day != "sunday")
               {cout<<"Your discounted amount is:" <<dis_amount2 <<endl;}

}
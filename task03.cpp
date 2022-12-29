#include <iostream>
using namespace std;
void isEligible(int);
main(){
      int age;
    while(true){
      cout<<"Enter your age:";  
      cin>>age;
      isEligible(age);
      cout <<endl;   }
}
void isEligible(int age)
  { 

   if(age>= 18)
      {  cout<<"He/She can vote";
      }
   if(age<18)
      {
         cout<<"He/She is not eligible";
      }

  }
#include <iostream>
using namespace std;
void showResult(int);
main() 
{ 

int marks;
cout<<"Enter Your Marks:";
cin>> marks;
showResult(marks);

}

void showResult(int marks)
{

if (marks>50) 
{ 
       cout<<"pass!";
 }
if (marks<50)
{
       cout<<"fail!"; 
}
if (marks == 50)
{
       cout<<"Work hard";
}
} 
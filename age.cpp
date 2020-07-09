#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"enter age of the user:";
cin>>age;
switch(age)
{
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:cout<<"not eligible";
break;
case 18:
case 19:
case 20:cout<<"eligible to vote";	
break;	
default:cout<<"Invalid";
      break;
}
}

#include<iostream>
using namespace std;
int main()
{
int m1,m2,m3,m4,m5,m6,avg;
cout<<"Enter the marks:\n";
cin>>m1>>m2>>m3>>m4>>m5>>m6;
avg=(m1+m2+m3+m4+m5+m6)/6;
if(avg>80)
cout<<"Grade A";
else if(avg>60)
cout<<"Grade B";
else if(avg>40)
cout<<"Grade C";
else if(avg>20)
cout<<"Fail";
}

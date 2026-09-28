#include<iostream>
using namespace std;

int main()
{
int stack[5];
int top = -1;

// input cancelled orders
cout<<"Enter 5 cancelled order numbers: "<<endl;
for(int i = 0; i < 5; i++)
{
top++;
cin>>stack[top];
}
// display cancelled orders from most recent
cout<<"\nCancelled Orders (Most Recent First): "<<endl;
while(top >= 0)
{
cout<<stack[top]<<endl;
top--;
}
return 0;
}

#include<iostream>
using namespace std;

int main()
{
int queue[5];
int front = 0;
int rear = 0;
int choice;

do
{
cout<<"\n--Bank Token System--"<<endl;
cout<<"1. Issue Token"<<endl;
cout<<"2. Display Tokens"<<endl;
cout<<"3. Serve Customers"<<endl;
cout<<"4. Exit"<<endl;
cout<<"Enter your choice: ";
cin>>choice;
switch(choice)
{

case 1:
if(rear < 5)
{
queue[rear] = rear + 1;
cout<<"Token Issued: "<<queue[rear]<<endl;
rear++;
}
else
{
cout<<"Queue is full"<<endl;
}
break;

case 2:
if(front < rear)
{
cout<<"Tokens: ";
for(int i = front; i < rear; i++)
{
cout<<queue[i]<<" ";
}
cout<<endl;
}
else
{
cout<<"No Token Available"<<endl;
}
break;

case 3:
if(front < rear)
{
cout<<"Serving customer with token"<<queue[front]<<endl;
front++;
}
else
{
cout<<"No customer to serve"<<endl;
}
break;

case 4:
cout<<"Exiting progrsm..."<<endl;
break;
default:
cout<<"Invalid choice"<<endl;
}
}
while(choice !=4);
return 0;
}

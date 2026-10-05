include<iostream>
using namespace std;

int main()
{
int queue[5];
int front  = 0;
int rear = 0;

// Input tokens
cout<<"Enter 5 tokens: "<<endl;
for(int i = 0; i < 5; i++)
{
cin>>queue[rear];
rear++;
}

// Serve customers
cout<<"\nServing customers: \n";
while(front<rear)
{
cout<<"Serving customer with token: "<<queue[front]<<endl;
front++;
}
return 0;
}

include<iostream>
using namespace std;

int main()
{
int stack[5];
int top = -1;

// input recently served customer token numbers
cout<<"Enter 5 customer token numbers: "<<endl;
for(int i = 0; i < 5; i++)
{
cin>>stack[++top];
}

//Display service history
cout<<"\nService history: \n";
while(top >= 0)
{
cout<<"customer token: "<<stack[top]<<endl;
top--;
}
return 0;
}

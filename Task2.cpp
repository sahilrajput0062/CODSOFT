// simple calculator
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cout<<"Enter first number and second number respectively:";
    cin>>a>>b;
    cout<<"Choose Operation to perform \n";
    cout<<" + , -, *, / \n";
    cin>>ch;
    switch (ch)
    {
     case '+': 
     cout<<"result: "<<a+b;
     break;
     case '-':
     cout<<"result: "<<a-b;
     break;
     case '*':
     cout<<"result: "<<a*b;
     break;
     case '/':
     cout<<"result"<<a/b;
     break;
    }
    return 0;
    
    
}

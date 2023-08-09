#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,max=20,a;
    n = rand() % max;
    while(true)
    {   cout<<"Guess the Number:";
        cin>>a;
        if(a > n)
        {
            cout<<"Too High \n";
        }
        else if(a < n)
        {
            cout<<"Too Low \n";
        }
        else
        {
            cout<<"Correct Number: "<<n;
            break;
        }
    }
    return 0; 
}
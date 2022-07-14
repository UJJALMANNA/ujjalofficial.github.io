#include<iostream>
using namespace std;
int main ()
{    int i,n,f=1;
    cout<<"enter the number that you want to get factorial:";
    cin>>n;
    for (i=1;i<=n;i++)
    f=f*i;
    cout<<"your ans is ="<<f;
    
}
// BUTTERFLY PATTERN
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)               // upper rows 
    {
        for(int j=1;j<=i;j++)           // upper columns
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++)       // upper spaces
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)           // upper opp side columns
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--)               // lower rows 
    {
        for(int j=1;j<=i;j++)           // lower columns
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++)       // lower spaces
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)           // lower opp side columns
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// Triangle growing downwards 
#include <iostream>
//#include<cstring>
using namespace std;
int main() 
{   
    int t;
    cin>>t;
    while(t--)
 {   
     int i,j,k=0,temp;
     string str;
     cin>>str;
     temp=str.length();
     for(i=0;i<temp;i++)
     {
         for(k=0;k<temp-1-i;k++)
         {
             cout<<".";
         }    
         for(j=0;j<=i;j++)
         {
             cout<<str[j];
         }    
          cout<<endl;
     }
 }
 return 0;
}
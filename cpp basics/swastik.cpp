#include<iostream>
using namespace std;

int main()
{int flag=0,i,n,j;
cout<<"Enter any num.";
cin>>n;
for ( i = 1; i <= 2*n+1; i++)
{
    for ( j =1; j <= 2*n+1 ;j++)

    {

if ((i==n+1 || j==n+1) || (i<=n+1 && j==1) || (i>=n+1 && j==2*n+1 ) ||  (j>=n+1 && i==1) || (j<=n+1 && i==2*n+1 ))
{flag=1;
    cout<<"*";
}


else { cout<<" ";  }


 }cout<<endl; 
}



return 0;

} 


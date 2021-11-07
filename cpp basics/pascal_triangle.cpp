#include<iostream>
using namespace std;

int fact(int n)
{int f=1;
   while(n>=1){
f=f*n;n--;}
return(f); 
}

int comb(int n ,int r)
{
return(fact(n)/fact(n-r)/fact(r));
}
void pas(int n)
{int i,j,k,r;

for (i=1; i<=n; i++)
{k=1 , r=0;
   for (j = 1; j <=2*n-1; j++)
   {
if (j>=n-i+1 && j<=n+i-1 && k)
{
cout<<"  "<<comb(i-1 , r);r++;
k=0;}
else
{
   cout<<"    ";
   k=1;
}


}
cout<<endl;
 }
    
}

 int main()
{int n;
   cout<<"enter total no. of rows :  ";
cin>>n;cout<<endl;
pas(n);
}



#include<iostream>
using namespace std;
int main()
{int a,i,b;int c;
cout<<"enter two  no.  ";
cin>>a>>b;
a=a+1;b=b-1;i=a;
for(i=a;i<=b;i++)
{
for (c=2; c<i; c++)
{
if(i%c==0)
break;
}
if (c==i)
cout<<i<<"  ";

}




}
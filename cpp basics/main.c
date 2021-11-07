#include<stdio.h>

int main()
{for (size_t i = 0; i < count; i++)
{
    /* code */
}

int i=1,*p=&i,*q;
q=p;
*q=5;

printf("%d",*p);
printf("\n%d i v ",i);
printf("\n%d",*q);
printf("\n%u",q); 
printf("\n%u",p);
printf("\n%d",q);
printf("\n%d",p);
printf("\n%u",&i);
printf("\n%u",&p);printf("\n%u",&q);
}



#include<iostream>
using namespace std;

void foo(int*);
int main(){
int i = 10, *p = &i;
foo(p++);

}
void foo(int *p){cout<<*p;}
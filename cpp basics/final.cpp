#include<iostream>
using namespace std;
int main();

void end()
{int n;
cout << "\n\n Correct Guessing..\n\nWell Played!!! \n\n-------------------------------------------------------GAME OVER-------------------------------------------------------- \n press 1 if u wanna play again   else  press any key:    \n\n";
cin>>n;
if(n==1){main();
  
}
else{
  cout<<"Thnx for playing with us ...";
}
}



void roy2()

{

    char a1, a2;

    cout << "\n\nMake another guess : ";

    cin >> a2;

    if (a2 == 'y')

    {

        cout << "\n\nWell done...\n\n________________n\t\t\t\t\t\tr o y\n"; end();

    }


    else {

        cout << "\n\nWrong try again.\n\n______________\n\n\t\t\t\t\t\tr o _\n";

        roy2();

    }

}

void roy3()

{

    char a1, a2, a3;

    cout << "\n\nMake Another Guess:";

    cin >> a3;

    if (a3 == 'r')

    {

        cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\tr o y\n";

        end();

    }

    else {

        cout << " \n\nWrong try Again.\n\n_____________\n\n\t\t\t\t\t\t_ o y\n\n";

        roy3();

    }

}

void lroy()

{

    char a1, a2, a3;

    cout << "\n\n\t\t\t\t\t\t_ o _\n\n Input Any Alphabet : ";



    cin >> a1;

    if (a1 == 'r')

    {

        cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\tr o _\n\n";

        roy2();

    }



    else if (a1 == 'y') {

        cout << "\n\nWell Done ...\n\n_______________\n\n\t\t\t\t\t\t_ o y\n\n";

        roy3();

    }


    else

    {

        cout << "\n\nWrong try..\n\n______________"; lroy();

    }

}

void mroy()

{

    char a1, a2, a3;

    lroy();

}
void don2()

{

    char a1, a2;

    cout << "\n\nMake another guess : ";

    cin >> a2;

    if (a2 == 'n')

    {

        cout << "\n\nWell done...\n\n______________\n\n\t\t\t\t\t\td o n\n"; end();

    }


    else {

        cout << "\n\nWrong try again.\n\n______________\n\n\t\t\t\t\t\td o _\n";

        don2();

    }

}

void don3()

{

    char a1, a2, a3;

    cout << "\n\nMake Another Guess:";

    cin >> a3;

    if (a3 == 'd')

    {

        cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\td o n\n";

        end();

    }

    else {

        cout << " \n\nWrong try Again.\n\n_____________\n\n\t\t\t\t\t\t_ o n\n\n";

        don3();

    }

}

void ldon()

{

    char a1, a2, a3;

    cout << "\n\n\t\t\t\t\t\t_ o _\n\n Input Any Alphabet : ";



    cin >> a1;

    if (a1 == 'd')

    {

        cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\td o _\n\n";

        don2();

    }



    else if (a1 == 'n') {

        cout << "\n\nWell Done ...\n\n_______________\n\n\t\t\t\t\t\t_ o n\n\n";

        don3();

    }


    else

    {

        cout << "\n\nWrong try..\n\n______________"; ldon();

    }

}

void mdon()

{

    char a1, a2, a3;

    ldon();

}
void darr2()

{

    char a1, a2;

    cout << "\n\nMake another guess : ";

    cin >> a2;

    if (a2 == 'r')

    {

        cout << "\n\nWell done...\n\n______________\n\n\t\t\t\t\t\td a r r\n"; end();

    }


    else {

        cout << "\n\nWrong try again.\n\n______________\n\n\t\t\t\t\t\td a _ _\n";

        darr2();

    }

}

void darr3()

{

    char a1, a2, a3;

    cout << "\n\nMake Another Guess:";

    cin >> a3;

    if (a3 == 'd')

    {

        cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\td a r r\n";

        end();

    }

    else {

        cout << " \n\nWrong try Again.\n\n_____________\n\n\t\t\t\t\t\t_ a r r\n\n";

        darr3();

    }

}

void ldarr()

{

    char a1, a2, a3;

    cout << "\n\n\t\t\t\t\t\t_ a _ _\n\n Input Any Alphabet : ";



    cin >> a1;

    if (a1 == 'd')

    {

        cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\td a _ _\n\n";

        darr2();

    }



    else if (a1 == 'r') {

        cout << "\n\nWell Done ...\n\n_______________\n\n\t\t\t\t\t\t_ a r r\n\n";

        darr3();

    }


    else

    {

        cout << "\n\nWrong try..\n\n______________"; ldarr();

    }

}

void mdarr()

{

    char a1, a2, a3;

    ldarr();

}
void arya2()

{

    char a1, a2;

    cout << "\n\nMake another guess : ";

    cin >> a2;

    if (a2 == 'y')

    {

        cout << "\n\nWell done...\n\n______________\n\n\t\t\t\t\t\ta r y a\n"; end();

    }


    else {

        cout << "\n\nWrong try again.\n\n______________\n\n\t\t\t\t\t\ta r _ a\n";

        arya2();

    }

}

void arya3()

{

    char a1, a2, a3;

    cout << "\n\nMake Another Guess:";

    cin >> a3;

    if (a3 == 'r')

    {

        cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\ta r y a\n";

        end();

    }

    else {

        cout << " \n\nWrong try Again.\n\n______________\n\n\t\t\t\t\t\ta _ y a\n\n";

        arya3();

    }

}

void larya()

{

    char a1, a2, a3;

    cout << "\n\n\t\t\t\t\t\ta _ _ a\n\n Input Any Alphabet : ";



    cin >> a1;

    if (a1 == 'r')

    {

        cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\ta r _ a\n\n";

        arya2();

    }



    else if (a1 == 'y') {

        cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\ta _ y a\n\n";

        arya3();

    }
    else
    {

        cout << "\n\nWrong try..\n\n______________"; larya();

    }

}

void marya()

{  char a1, a2, a3;
  larya();

}
void pink6()
{char a1,a2,a3;
cout << "\n\nMake Another Guess:";
cin >> a3;
if (a3 == 'n')
{
cout << "\n\nWell Done ...\n\n____\n\n\t\t\t\t\t\tp i n k\n";
end();
}
else {
cout << " \n\nWrong try Again.\n\n____\n\n\t\t\t\t\t\t p i _ k\n\n";
pink6();
}
}
void pink5()
{
        char a1,a2,a3;
cout << "\n\nMake Another Guess:";
cin >> a3;
if (a3 == 'p')
{
cout << "\n\nWell Done ...\n\n____\n\n\t\t\t\t\t\tp i n k\n";
end();
}
else
 {
cout << " \n\nWrong try Again.\n\n____\n\n\t\t\t\t\t\t _ i n k\n\n";
pink5();

}
    }
void pink3()
{
        char a1,a2,a3;
cout << "\n\nMake Another Guess:";
cin >> a3;
if (a3 == 'k')
{
cout << "\n\nWell Done ...\n\n____\n\n\t\t\t\t\t\tp i n k\n";
end();
}
else
{
cout << " \n\nWrong try Again.\n\n____\n\n\t\t\t\t\t\t p i n _\n\n";
pink3();

}
}

void pink2()
{
char a1,a2;
cout << "\n\nMake another guess : ";
cin >> a2;
if (a2 == 'n')
{
cout << "\n\nWell done...\n\n____\n\n\t\t\t\t\t\t p i n _\n";
pink3();
}
else if(a2== 'k')
{
cout << "\n\nWell done...\n\n____\n\n\t\t\t\t\t\t p i _ k\n";
pink6();
}
else
{
cout << "\n\nWrong try again.\n\n____\n\n\t\t\t\t\t\t p i _ _\n";
pink2();
} }

void pink4()
{
   char a1,a2,a3;
cout << "\n\nMake Another Guess:";
cin >> a2;
   if(a2=='p')
{
cout << "\n\nWell Done ...\n\n____\n\n\t\t\t\t\t\tp i n _\n";
pink3();
}
else if(a2=='k')
{
cout << "\n\nWell Done ...\n\n___\n\n\t\t\t\t\t\t_ i n k\n";
pink5();
}
else {
cout << " \n\nWrong try Again.\n\n____\n\n\t\t\t\t\t\t _ i n _\n\n";
pink4();
}
    }

void pink7()
{
char a1,a2;
cout << "\n\nMake another guess : ";
cin >> a2;
if (a2 == 'p')
{
cout << "\n\nWell done...\n\n____\n\n\t\t\t\t\t\t p i _ k\n";
pink6();
}
else if(a2== 'n')
{
cout << "\n\nWell done...\n\n____\n\n\t\t\t\t\t\t _ i n k\n"; pink6();
}
else {
cout << "\n\nWrong try again.\n\n____\n\n\t\t\t\t\t\t p i _ _\n";
pink5();
}
}

void lpink()
{
char a1, a2,a3;
cout << "\n\n\t\t\t\t\t\t_ i _ _\n\n Input Any Alphabet : ";


cin >> a1;
if (a1 == 'p')
{
cout << "\n\nWell Done ...\n\n____\n\n\t\t\t\t\t\tp i _ _\n\n";
pink2();
}
else if (a1 == 'n')
 {
cout << "\n\nWell Done ...\n\n___\n\n\t\t\t\t\t\t _ i n _\n\n";
pink4();
}
else if(a1=='k')
{
cout << "\n\nWell Done ...\n\n___\n\n\t\t\t\t\t\t _ i _ k\n\n";
pink7();
}
else
{
cout << "\n\nWrong try..\n\n____"; lpink();
}
}

void mpink()
{
char a1, a2, a3;
lpink();
}




void kick2()
{
char a1,a2;
cout << "\n\nMake another guess : ";
cin >> a2;
if (a2 == 'c')
{
cout << "\n\nWell done...\n\n______________\n\n\t\t\t\t\t\t k i c k\n"; end();
}

else {
cout << "\n\nWrong try again.\n\n______________\n\n\t\t\t\t\t\t  k i _ k\n";
kick2();
} }


void kick3()
{
char a1,a2,a3;
cout << "\n\nMake Another Guess:";
cin >> a3;
if (a3 == 'k')
{
cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\t  k i c k\n";
end();
}
else {
cout << " \n\nWrong try Again.\n\n______________\n\n\t\t\t\t\t\t _ i c _\n\n";
kick3();
}
}


void lkick()
{
char a1,a2,a3,a4,a5,a6;
cout << "\n\n\t\t\t\t\t\t _ i _ _\n\n Input Any Alphabet : ";


cin >> a1;
if (a1 == 'k')
{
cout << "\n\nWell Done ...\n\n______________\n\n\t\t\t\t\t\t  k i _ k \n\n";
kick2();
}


else if (a1 == 'c') {
cout << "\n\nWell Done ...\n\n_______________\n\n\t\t\t\t\t\t_ i c _\n\n";
kick3();
}

else
{
cout << "\n\nWrong try..\n\n______________"; lkick();
}
}
void mkick()
{
char a1, a2, a3,a4,a5,a6;
lkick();
}


int main()
 {again : {char n;
   cout<<"\n      Enter Any Random No. \n(_ so that we can find a movie for U __) :  "; 
 cin>>n; cout<<"\n\n";
 

  if(n<=10) {   mkick();  }
else if(n<=20)  {   mpink();}
    else if(n<=30)  {   mdarr();}
    else if(n<=40)  {   marya();}
   else if(n<=50)  {   mpink();}
    else if(n<=60)  {   mroy();}
  else { goto again ; }      
  }

}
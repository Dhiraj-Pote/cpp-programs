#include<iostream>
using namespace std;
void end()
{
cout << "\n\n Correct Guessing..\n\nWell Played!!! \n\n-------------------------------------------------------GAME OVER--------------------------------------------------------\n\n";
}
void try6()
{char a1,a2,a3;
cout << "\n\nMake Another Guess:";
cin >> a3;
if (a3 == 'n')
{
cout << "\n\n\nWell Done ...\n\n______\n\n\t\t\t\t\t\tp i n k\n";
end();
}
else {
cout << " \n\nWrong Try Again.\n\n______\n\n\t\t\t\t\t\t p i _ k\n\n";
try6();
}
}
void try5()
{
        char a1,a2,a3;
cout << "\n\nMake Another Guess:";
cin >> a3;
if (a3 == 'p')
{
cout << "\n\n\nWell Done ...\n\n______\n\n\t\t\t\t\t\tp i n k\n";
end();
}
else
 {
cout << " \n\nWrong Try Again.\n\n______\n\n\t\t\t\t\t\t _ i n k\n\n";
try5();

}
    }
void try3()
{
        char a1,a2,a3;
cout << "\n\nMake Another Guess:";
cin >> a3;
if (a3 == 'k')
{
cout << "\n\n\nWell Done ...\n\n______\n\n\t\t\t\t\t\tp i n k\n";
end();
}
else
{
cout << " \n\nWrong Try Again.\n\n______\n\n\t\t\t\t\t\t p i n _\n\n";
try5();

}
}

void try2()
{
char a1,a2;
cout << "\n\nMake another guess : ";
cin >> a2;
if (a2 == 'n')
{
cout << "\n\nWell done...\n\n______\n\n\t\t\t\t\t\t p i n _\n";
try3();
}
else if(a2== 'k')
{
cout << "\n\nWell done...\n\n______\n\n\t\t\t\t\t\t p i _ k\n";
try6();
}
else
{
cout << "\n\n\nWrong try again.\n\n______\n\n\t\t\t\t\t\t p i _ _\n";
try2();
} }

void try4()
{
   char a1,a2,a3;
cout << "\n\nMake Another Guess:";
cin >> a2;
   if(a2=='p')
{
cout << "\n\n\nWell Done ...\n\n______\n\n\t\t\t\t\t\tp i n _\n";
try3();
}
else if(a2=='k')
{
cout << "\n\n\nWell Done ...\n\n_____\n\n\t\t\t\t\t\t i n k\n";
try5();
}
else {
cout << " \n\nWrong Try Again.\n\n______\n\n\t\t\t\t\t\t _ i n _\n\n";
try4();
}
    }

void try7()
{
char a1,a2;
cout << "\n\nMake another guess : ";
cin >> a2;
if (a2 == 'p')
{
cout << "\n\nWell done...\n\n______\n\n\t\t\t\t\t\t p i _ k\n";
try6();
}
else if(a2== 'n')
{
cout << "\n\nWell done...\n\n______\n\n\t\t\t\t\t\t _ i n k\n"; try6();
}
else {
cout << "\n\n\nWrong try again.\n\n______\n\n\t\t\t\t\t\t p i _ _\n";
try5();
}
}

void label()
{
char a1, a2,a3;
cout << "\n\n\t\t\t\t\t\t_ i _ _\n\n Input Any Alphabet : ";


cin >> a1;
if (a1 == 'p')
{
cout << "\n\nWell Done ...\n\n______\n\n\t\t\t\t\t\tp i _ _\n\n";
try2();
}
else if (a1 == 'n')
 {
cout << "\n\nWell Done ...\n\n_______\n\n\t\t\t\t\t\t _ i n _\n\n";
try4();
}
else if(a1=='k')
{
cout << "\n\nWell Done ...\n\n_______\n\n\t\t\t\t\t\t _ i _ k\n\n";
try7();
}
else
{
cout << "\n\nWrong Try..\n\n______"; label();}
}

int main()
{
char a1, a2, a3;
label();
}
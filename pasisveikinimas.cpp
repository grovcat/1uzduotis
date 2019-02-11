#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main()
{
    string name;
    int fulllenght;
    cout << "Koks jusu vardas" << endl;
    cin >> name;
    fulllenght = 14 + name.size();
    for(int i = 0; i != fulllenght; i++)
    {
        printf("%c", '*');
    }
    printf("\n");

    printf("%*c%c\n", -(fulllenght-1), '*', '*');
    printf("%*c%s%s%c%*c\n", -2, '*',"Sveikas, ", name.c_str(), '!', 2, '*');
    printf("%*c%c\n", -(fulllenght-1), '*', '*');

    for(int i = 0; i != fulllenght; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
    return 0;
}

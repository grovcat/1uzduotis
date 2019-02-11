#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string name;
    int x, fulllenght;
    cout << "Koks jusu vardas" << endl;
    cin >> name;
    cout << "Iveskite remelio dydi (nuo 1 iki 10)" << endl;
    cin >> x;
    if(x > 10 || x < 0)
    {
        return 0;
    }

    if(name.back() == 's')
    {
        fulllenght = 10 + name.size() + 2*x;
    }
    else
    {
        fulllenght = 9 + name.size() + 2*x;
    }

    for(int i = 0; i != fulllenght; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
    for(int i = 0; i != x; i++)
    {
        printf("%*c%c\n", -(fulllenght-1), '*', '*');
    }
    if(name.back() == 's')
    {
        printf("%*c%s%s%c%*c\n", -(x+1), '*',"Sveikas, ", name.c_str(), '!', x-1, '*');
    }
    else
    {
        printf("%*c%s%s%c%*c\n", -x, '*',"Sveika, ", name.c_str(), '!', x, '*');
    }
    for(int i = 0; i != x; i++)
    {
        printf("%*c%c\n", -(fulllenght-1), '*', '*');
    }
        for(int i = 0; i != fulllenght; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
    return 0;
}

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main()
{
    string name;
    int x, fulllenght;
    cout << "Koks jusu vardas" << endl;
    cin >> name;
    cout << "Iveskite remelio dydi (nuo 1 iki 10)" << endl;
    cin >> x;
    fulllenght = 10 + name.size() + 2*x;
    if(x > 10 && x < 0)
    {
        return 0;
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
    printf("%*c%s%s%c%*c\n", -(x+1), '*',"Sveikas, ", name.c_str(), '!', x-1, '*');
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

#include<iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <conio.h>
#include <math.h>

// :: -> operator zasiegu
 
using namespace std;

const float PI = 3.14;

class kolo
{
    private:
    double promien, obwod, pole;
    void podaj();
    void oblicz();
    void wynik();
    
    public:
    void przetworz();
};
 
int main()
{
    kolo k1, k2;
    k1.przetworz();
    k2.przetworz();                                                   

    return 0;
}

void kolo::podaj()
{
cout << "Podaj promien: ";
cin >> promien;
}

void kolo::oblicz()
{
    pole = PI * pow(promien,2.0);
    obwod = 2 * PI * promien;
}

void kolo::wynik()
{
cout << "Parametry: ";
cout << "Promien: " << promien << '\n';
cout << "Pole: " << pole << '\n';
cout << "Obwod: " << obwod << '\n';
}

void kolo::przetworz()
{
    podaj();
    oblicz();
    wynik();
}
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <math.h>
#include <conio.h>
 
using namespace std;

const float PI = 3.14;

class kolo
{
    private:
    double promien, pole, obwod;
    void podaj();
    void obliczaj();
    void wynik();

    public:
    void przetworz();

    kolo(double); // kons z argumentem
    kolo();    // kons
    ~kolo();   // dest
};
 
int main()
{
    kolo k1 = kolo();
    kolo k2 = kolo(5.0);

    k1.przetworz();
    k2.przetworz();

    return 0;
}

kolo::kolo(double r)
{
    cout << "Zainicjowanie wartosci - promienia " << "\n";
}

kolo::kolo()
{
podaj();
cout << "Utworzenie obiektu! " << "\n";
}

kolo::~kolo()
{
    cout << "usuniecie obiektu! " << "\n";
}

void kolo::podaj()
{
cout << "Podaj promien: " << "\n";
cin >> promien;
}

void kolo::obliczaj()
{
    pole = PI * pow(promien,2.0);
    obwod = 2 * PI * promien;
}

void kolo::wynik()
{
cout << "-------------------" << '\n';
cout << "Parametry: ";
cout << "Promien: " << promien << '\n';
cout << "Pole: " << pole << '\n';
cout << "Obwod: " << obwod << '\n';
cout << "-------------------" << '\n';
}

void kolo::przetworz()
{
    obliczaj();
    wynik();
}
#include <iostream>

using namespace std;

void wyswietl(float tab[], int ile)
{
    for (unsigned int i = 0; i < ile; ++i)
        cout << tab[i] << ' ';
    cout << endl;
}

void wyswietl(char tab[], int ile)
{
    for (unsigned int i = 0; i < ile; ++i)
        cout << tab[i] << ' ';
    cout << endl;
}

void wyswietl(int tab[], int ile)
{
    for (unsigned int i = 0; i < ile; ++i)
        cout << tab[i] << ' ';
    cout << endl;
}

void wyzeruj_tablice(int n, int tab[])
{
    for (unsigned int i = 0; i < n; i++)
        tab[i] = 0;
    wyswietl(tab, n);
}

void pomnoz_przez_dwa(int n, int tab[])
{
    for (unsigned int i = 0; i < n; i++)
        tab[i] *= 2;
    wyswietl(tab, n);
}

int sumuj(int n, int tab[])
{
    int suma = 0;
    for (unsigned int i = 0; i < n; i++)
        suma += tab[i];
    return suma;
}

int sumuj_parzyste(int n, int tab[])
{
    int suma = 0;
    for (unsigned int i = 0; i < n; i++)
        if (i % 2 == 0)
            suma += tab[i];
    return suma;
}

float srednia_art(int n, int tab[])
{
    int suma = 0;
    for (unsigned int i = 0; i < n; i++)
        suma += tab[i];
    return suma / n;
}

float srednia_geo(int n, int tab[])
{
    int iloczyn = 1;
    for (unsigned int i = 0; i < n; i++)
        iloczyn *= tab[i];
    return pow(iloczyn, 1 / n);
}

int main()
{
    //zad1
    const unsigned int ile = 10;
    float tablica1[ile];

    for (unsigned int i = 0; i < ile; ++i)
        tablica1[i] = i + 0.5;

    for (unsigned int i = 0; i < ile; ++i)
        cout << tablica1[i] << ' ';

    cout << endl;

    //zad2
    wyswietl(tablica1, ile);

    cout << endl;

    //zad3
    const unsigned int n = ile;
    char tab3[n];

    for (unsigned int i = 0; i < n; i++)
        cin >> tab3[i];

    wyswietl(tab3, ile);

    cout << endl;

    //ZAD4
    int tab4[n];
    for (unsigned int i = 0; i < ile; ++i)
        tab4[i] = i;

    wyswietl(tab4, n);
    wyzeruj_tablice(n, tab4);


    //zad5
    int tab[n];
    for (unsigned int i = 0; i < ile; ++i)
        tab[i] = i;
    wyswietl(tab, n);
    pomnoz_przez_dwa(n, tab);

    //zad6
    int suma = sumuj(n, tab);
    cout << endl << suma << endl;

    //zad7
    int suma_p = sumuj_parzyste(n, tab);
    cout << endl << suma_p << endl;

    //zad8
    float srednia_arytmetyczna = srednia_art(n, tab);
    cout << srednia_arytmetyczna << endl;

    //zad9
    float srednia_geometryczna = srednia_geo(n, tab);
    cout << srednia_geometryczna;

    return 0;
}
#include <iostream> // wczytanie biblioteki iostream
using namespace std; // wczytanie standardu kompilatora

int main() {
    int liczba_c, liczba_a, liczba_b, suma; //skrzynka wprowadzania
    float iloczyn ;
    cout<< "Podaj liczbe a: ";
    cin >> liczba_a;
    cout<< "Podaj lczbe b: ";
    cin>> liczba_b;
    iloczyn = liczba_a * liczba_b;
    cout<< "liczba c wynosi Iloczyn liczb a i b = " << iloczyn <<endl;

    return 0;
}



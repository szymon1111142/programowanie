#include <iostream> // wczytanie biblioteki iostream
using namespace std; // wczytanie standardu kompilatora

int main() {
    int liczba_c, liczba_a, liczba_b, suma; //skrzynka wprowadzania
    float iloraz ;
    cout<< "Podaj liczbe a: ";
    cin >> liczba_a;
    cout<< "Podaj lczbe b: ";
    cin>> liczba_b;
    iloraz = liczba_a / liczba_b;
    cout<< "liczba c wynosi Iloraz liczb a i b = " << iloraz <<endl;

    return 0;
}
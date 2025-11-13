// Franciszek Sosiński

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string z2_1_path_symbole_txt = "../zalacniki-2025/symbole.txt";

// Funkcja sprawdzająca, czy tekst jest palindromem
bool czy_palindrom(string tekst) {
    int ile_znakow = tekst.length();
    for (int i = 0; i < ile_znakow / 2; i++) {
        if (tekst[i] != tekst[ile_znakow - i - 1])
            return false;
    }
    return true; // brakowało return true
}

void zadanie_1() {
    ifstream plik(z2_1_path_symbole_txt);
    if (!plik.is_open()) {
        cerr << "Nie mozna otworzyc pliku" << endl;
        return; // zakończ funkcję, jeśli nie udało się otworzyć pliku
    }

    string linia;
    while (getline(plik, linia)) { // poprawiono warunek czytania
        cout << linia << endl;
    }

    plik.close(); // poprawiono literówkę (było "cole")
}

int main() {
    zadanie_1(); // wywołanie funkcji testowej

    // Test działania funkcji czy_palindrom
    cout << (czy_palindrom("kajak") ? "Palindrom" : "Nie palindrom") << endl;
    cout << (czy_palindrom("test") ? "Palindrom" : "Nie palindrom") << endl;

    return 0;
}
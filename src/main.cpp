// Franciszek Sosiński

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string z2_1_path_symbole_txt = "/workspaces/matura-2025-r25-3a-sosin111/zalaczniki-2025/symbole.txt";

bool czy_palindrom(string tekst) {
    int ile_znakow = tekst.length();
    for (int i = 0; i < ile_znakow / 2; i++) {
        if (tekst[i] != tekst[ile_znakow - i - 1])
            return false;
    }
    return true; 
}



void zadanie_1() {
    ifstream plik(z2_1_path_symbole_txt);
    if (!plik.is_open()) {
        cerr << "Nie mozna otworzyc pliku" << endl;
        return; 
    }

    ofstream wynik("wynik2_1.txt");

    string linia;
    while (plik >> linia) { 
       if(czy_palindrom(linia)){
        cout << linia << endl;
        wynik << linia << endl;
    }
}
    wynik.close();
    plik.close(); 
}


void Zadanie2_2(){
    
}
int main() {
    zadanie_1(); 

    return 0;
}
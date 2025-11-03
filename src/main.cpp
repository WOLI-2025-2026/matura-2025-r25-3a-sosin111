//Franciszek Sosiński

#include <iostream>

using namespace std;

string z2_1_path_symbole_txt = "../zalacniki-2025/symbole.txt";

bool czy_palindrom (string tekst){
    int ile_znakow= tekst.length();
    for(int i=0; i<ile_znakow/2 ; i++){
        if (tekst [i] != tekst[ile_znakow-i-1])
        return false;
    }
}

void zadanie_1(){
    ifstream plik(z2_1_path_symbole_txt);
    if(!plik.is_open()){
        crr << "Nie mozna otworzyc pliku"
    }

    string linia;
    while(plik>linia){
        cout<<linia << endl; 
    }

    plik.cole();
}

int main(){


}
#include "pch.h"
#include <iostream>
using namespace std;

int main() {
    try {
        int a, b;
        cout << "Introduceti primul numar: ";
        cin >> a;
        cout << "Introduceti al doilea numar: ";
        cin >> b;

        if (b == 0) {
            throw "Impartirea la zero nu este permisa!";
        }

        int rezultat = a / b;
        cout << "Rezultatul impartirii lui " << a << " la " << b << " este: " << rezultat << endl;
    }
    catch (const char* mesaj) {
        cout << "Eroare: " << mesaj << endl;
    }
    catch (...) {
        cout << "Eroare neasteptata!" << endl;
    }

    return 0;
}

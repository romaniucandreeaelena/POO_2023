#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int numar_persoane;
    cout << "Introduceti numarul de persoane urmat de tasta Enter: ";
    cin >> numar_persoane;

    vector<pair<string, int>> stocare;

    for (int i = 0; i < numar_persoane; i++) {
        string nume;
        int varsta;

        cout << "Introduceti numele persoanei " << i + 1 << " urmat de tasta Enter:";
        cin >> nume;

        cout << "Introduceti varsta persoanei " << i + 1 << " urmat de tasta Enter:";
        cin >> varsta;

        stocare.push_back(make_pair(nume, varsta));
    }

    cout << endl << "Persoanele introduse sunt:" << endl;
    for (int i = 0; i < numar_persoane; i++) {
        cout << "Nume: " << stocare[i].first << ", Varsta: " << stocare[i].second << endl;
    }

    return 0;
}

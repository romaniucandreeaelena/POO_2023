#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;

struct Masina{
    unsigned int nr_inmatriculare;
    char marca[20];
    char model[20];
};

class Mas{
private:
    unsigned int nr_inmatriculare;
    char marca[20];
    char model[20];
public:
    Mas(unsigned int nr, char* marc, char* mod){
        nr_inmatriculare = nr;
        strcpy_s(marca, 20, marc);
        strcpy_s(model, 20, mod);
    }
    Mas() {}
    unsigned int arata_nr_inmatriculare() { return this->nr_inmatriculare; }
    char* arata_marca() { return this->marca; }
};

int main(){
    unsigned int a1 = 0;
    a1 = 17;
    Masina m1;
    m1.nr_inmatriculare = 101;
    strcpy_s(m1.marca, 7, "Dacia");
    strcpy_s(m1.model, 8, "Logan");
    Console::WriteLine("Hello C++.NET");
    cout << m1.nr_inmatriculare << "\t" << m1.marca << "\t" << m1.model << endl;
    cout << "Hello C++.NET (cout)" << endl;
    Console::WriteLine("Utilizam clasa Mas");
    Mas m2(102, "Audi", "A4");
    Mas* m3 = new Mas(103, "BMW", "X5");
    cout << m2.arata_nr_inmatriculare() << "\t" << m2.arata_marca() << endl;
    cout << m3->arata_nr_inmatriculare() << "\t" << m3->arata_marca() << endl;
    Console::ReadKey();
    return 0;
}

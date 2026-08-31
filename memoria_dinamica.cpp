#include <iostream>
using namespace std;

int main() {
    // Un solo valor dinámico
    int *num = new int;
    *num = 42;
    cout << "Valor dinamico: " << *num << endl;
    delete num;
    num = nullptr;

    // Un array dinámico, con tamaño decidido en tiempo de ejecucion
    int tamano;
    cout << "\nPrimer examen? ";
    cin >> tamano;
    int tamano2;
    cout << "\nSegundo examen? ";
    cin >> tamano2;

    double *exam1 = new double[tamano];
    double *exam2 = new double[tamano2];

    for (int i = 0; i < tamano; i++) {
        exam1[i] = (i + 1) * 1.5;
    }

    for (int i = 0; i < tamano2; i++) {
        exam2[i] = (i + 1) * 2.5;
    }

    cout << "Nota Exam1: ";
    for (int i = 0; i < tamano; i++) {
        cout << exam1[i] << " ";
    }
    cout << endl;

    cout << "Nota Exam2: ";
    for (int i = 0; i < tamano2; i++) {
        cout << exam2[i] << " ";
    }
    cout << endl;

    delete [] exam1;
    exam1 = nullptr;

    delete [] exam2;
    exam2 = nullptr;

    return 0;
}
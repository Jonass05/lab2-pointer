#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void duplicar(int *valor) {
    *valor *= 2;
}

void ordenarPar(int *a, int *b) {
    if (*a > *b) {
        swap(a, b);
    }
}

int main() {
    int num1 = 2, num2 = -3;

    cout << "Antes: num1=" << num1 << " num2=" << num2 << endl;
    swap(&num1, &num2);
    cout << "Despues: num1=" << num1 << " num2=" << num2 << endl;

    int num3 = 5;
    cout << "Antes: num3=" << num3 << endl;
    duplicar(&num3);
    cout << "Despues: num3=" << num3 << endl;

    int num4 = 10, num5 = 7;
    cout << "Antes: num4=" << num4 << " num5=" << num5 << endl;
    ordenarPar(&num4, &num5);
    cout << "Despues: num4=" << num4 << " num5=" << num5 << endl;

    return 0;
}
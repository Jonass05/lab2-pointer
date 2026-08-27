#include <iostream>
using namespace std;

int main() {
    int num = 25;

    // Dirección de memoria
    cout << "Direccion de num: " << &num << endl;

    // Declarar y asignar un pointer
    int *ptr = nullptr;
    ptr = &num;

    cout << "ptr apunta a: " << ptr << endl;.
    cout << "Valor apuntado (*ptr): " << *ptr << endl;

    // Modificar el valor original a traves del pointer
    *ptr = 100;
    cout << "num despues de *ptr = 100: " << num << endl;

    return 0;
}
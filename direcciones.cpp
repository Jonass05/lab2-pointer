#include <iostream>
using namespace std;

int main() {
    int num = 25;

    // Dirección de memoria
    cout << "Direccion de num: " << &num << endl;

    // Declarar y asignar un pointer
    int *ptr = nullptr;
    ptr = &num;

    cout << "ptr apunta a: " << ptr << endl;
    cout << "Valor apuntado (*ptr): " << *ptr << endl;

    // Modificar el valor original a traves del pointer
    *ptr = 100;
    cout << "num despues de *ptr = 100: " << num << endl;

    double precio = 19.99;
    double *ptrPrecio = &precio;

   // int *ptrNum = &precio;

    cout << "ptrPrecio apunta a: " << ptrPrecio << endl;

    cout << "Valor apuntado (*ptrPrecio): " << *ptrPrecio << endl;

   // cout << "ptrNum apunta a: " << *ptrNum << endl;

    cout << "Me muestra que no se puede convertir un double a int" << endl;

    cout << "Me mostro un numero 2, una respuesta aleatoria" << endl;

    

    return 0;
}

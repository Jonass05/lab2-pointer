#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> edad(new int);
    *edad = 30;
    cout << "Edad: " << *edad << endl;

    // delete edad;

    return 0;
}
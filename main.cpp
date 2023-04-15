#include <iostream>

using namespace std;

int main() {

    int temperatura;


    cout << "ingrese la temperatura: "<< endl;
    cin >> temperatura;


    if (temperatura < -10 || temperatura > 35) {
        cout << "temperatura fuera de rango" << endl;

    } else if (temperatura >= -10 && temperatura < 0) {
        cout << "hace mucho frio" << endl;


    } else if (temperatura >= 0 && temperatura < 15) {
        cout << "hace frio" << endl;
    } else if (temperatura >= 15 && temperatura < 25) {
        cout << "temperatura agradable" << endl;

    } else {
        cout << "hace calor" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int valor;
    cin >> valor;

    int nota100 = valor / 100;
    valor %= 100;

    int nota50 = valor / 50;
    valor %= 50;

    int nota20 = valor / 20;
    valor %= 20;

    int nota10 = valor / 10;
    valor %= 10;

    int nota5 = valor / 5;
    valor %= 5;

    int nota2 = valor / 2;
    valor %= 2;

    int nota1 = valor;

    cout << nota100 << " " << nota50 << " " << nota20 << " "
         << nota10 << " " << nota5 << " " << nota2 << " " << nota1 << endl;

    return 0;
}

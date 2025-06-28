#include <iostream>
using namespace std;

int main() {
    int totalMinutos;
    cin >> totalMinutos;

    int dias = totalMinutos / (24 * 60);
    int restoHoras = totalMinutos % (24 * 60);
    int horas = restoHoras / 60;
    int minutos = restoHoras % 60;

    cout << dias << "d " << horas << "h " << minutos << "m" << endl;

    return 0;
}

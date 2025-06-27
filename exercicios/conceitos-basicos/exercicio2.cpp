#include <iostream>

using namespace std;

int main(){
        int baseMaior, baseMenor, altura, calc;

        cin >> baseMaior;
        cin >> baseMenor;
        cin >> altura;

        calc = ((baseMaior + baseMenor) * altura) / 2;

        cout << calc << endl;

        return 0;
}

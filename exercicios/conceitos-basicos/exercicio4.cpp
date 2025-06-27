#include <iostream>

using namespace std;

int main(){
        int raio;
        float area, convertor;
        double pi = 3.14;

        cin >> raio;

        convertor = static_cast<float>(raio);

        area = (convertor * convertor) * static_cast<float>(pi);

        cout << area << endl;

        return 0;
}

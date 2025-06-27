#include <iostream>
#include <cmath>

using namespace std;

int main(){
        float p1x, p1y, p2x, p2y, d;

        cin >> p1x;
        cin >> p1y;
        cin >> p2x;
        cin >> p2y;

        //d = sqrt(pow((p2x - p1x), 2) + pow((p2y - p1y), 2));

        d = sqrt(((p2x - p1x)*(p2x - p1x)) + ((p2y - p1y)*(p2y - p1y)));

        cout << d << endl;

        return 0;
}

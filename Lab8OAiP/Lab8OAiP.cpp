#include <iostream>
using namespace std;
void main() {
    setlocale(LC_CTYPE, "RUSSIAN");
    float t = 0.45, a, q = t, x,p=0,pr=1,y=0,min=0,n;

    for (float y = 0; y < 6; y++) {
        cout << "Введите x " << endl;
        cin >> x;
        a = (x + 1) / x;
        q = q + a;
    }
    cout << "Ответ " << q << endl;

    /*cout << "введите число n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "введите число y: ";
        cin >> y;
        if (min>y) {
            min=y;
            p = min;
        }
        pr *= y-5;
        q = p + pr;
        cout << q << endl;
    }*/
}

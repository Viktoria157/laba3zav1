#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double f, a = 4, b = 3.2, c = 0.1;
    f = tan(c) - sqrt(c / b + a);

    cout << "f = " << f << endl;

    return 0;
}
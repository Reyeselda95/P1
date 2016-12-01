#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double a, b, c, d, u, w, g, z;
    a = 3.0;
    b = 2.0;
    c = 4.5;
    d = 3.25;
    u = 5.0;
    w = 7.3;
    g = 3.5;
    z = 6.2;
    cout << "(a^2)+(b^2)= " << pow(a,2)+ pow(b,2) << endl;
    cout << "(a + b) ^2 = " << pow((a+b),2) << endl;
    cout << "(b^(1/3))+34 = " << pow(b,(1/3.0))+34 << endl;
    cout << "(b+34)^(1/3) = " << pow(b+34,(1/3.0)) << endl;
    cout << "(c+d) / (u+w/b) = " << ((c+d)/(u+w/b)) << endl;
    cout << "(c + d/u + g/b) = " << (c + d/u + g/b) << endl;
    cout << "a/b * (z+w) = " << (a/b * (z+w)) << endl;
}

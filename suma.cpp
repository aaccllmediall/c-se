#include <iostream>

using namespace std;

double sume(double x, double y)
{
    return x+y;
}

main()
{
    double a, b;
    cout << "introduzca dos valores:\nA: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "la suma es: " << sume(a, b) << endl;
}

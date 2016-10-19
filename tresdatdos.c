#include <iostream>

using namespace std;

main()
{
    int n, b, c, i, aux;
    float a=0;
    cout << "coloque valor para N:" << endl;
    cin >> n;
    cout << "coloque numero:" << endl;
    cin >> b;
    aux=b;
    a=a+b;
    for (i=0; i<n-1; i++){
        cout << "coloque otro numero:" << endl;
        cin >> c;
        a=a+c;
        if (c<aux)
            aux=c;
        if (c>b)
            b=c;
    }
    cout << "media: " << a/n << endl;
    cout << "maximo: " << b << endl;
    cout << "minimo: " << aux << endl;
    cout << "rango: " << n-1 << endl;
}

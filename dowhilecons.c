#include <iostream>

using namespace std;

main()
{
    int n, i=0;
    const char *hola="Hello, World!";
    cout << "coloque un numero de bucles" << endl;
    cin >> n;
    do{
        cout << hola << endl;
        i++;
    } while (i<n);
}

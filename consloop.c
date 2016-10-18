#include <iostream>

using namespace std;

main()
{
    int n, i;
    const char *hola="Hello, World!";
    cout << "coloque un numero de bucles" << endl;
    cin >> n;
    for (i=0; i<n; i++){
        cout << hola << endl;
    }
}

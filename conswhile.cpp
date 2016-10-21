#include <iostream>

using namespace std;

main()
{
    int n, i=0;
    const char *hola="Hello, World!";
    cout << "Coloque un numero positivo" << endl ;
    cin >> n;
    while (i<n){
        cout << hola << endl;
        i=i+1;
    }
}

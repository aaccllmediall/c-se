#include <iostream>
#include <cstdlib>

using namespace std;

int difference(const int x, const int y)
{
    return abs(x-y);      // faltaba retornar el valor absoluto //
}

main()
{
    cout << difference(23, 43);
    return 0;
}


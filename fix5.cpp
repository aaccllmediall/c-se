#include <iostream>

using namespace std;

int sum(const int x, const int y, const int z)      // faltaba colocar el tercer argumento //
{
    return x+y+z ;
}

int main()
{
    cout << sum(1, 5, 3);
    return 0;
}

#include <iostream>

using namespace std;

void doubleNumber(int &num)     // le faltaba señalarlo como puntero //
{
    num=num*2;
}

main()
{
    int num = 35;
    doubleNumber(num);
    cout << num ;    // Should print 70
    return 0;
}

#include <iostream>

void printNum(int number)   // faltaba declarar el argumento //
{
    std :: cout << number ;
};

main()
{
    int number=35;
    printNum(number);
    return 0;
}

# include <iostream >

using namespace std;

int main ()
{
    short number ;
    cout << "Enter a number : ";
    cin >> number ;
    if (number>=1){
        cout << "The factorial of " << number << " is ";
        int accumulator = 1;
        for (; number > 0; accumulator *= number --);
        cout << accumulator << ".\n";
    }
    else
        cout << "el factorial es para numeros mayores que cero" << endl;
    return 0;
}

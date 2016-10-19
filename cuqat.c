# include <iostream >

using namespace std;

int main ()
{
    int number ;
    cout << "Enter a number : ";
    cin >> number ;
    if (number>=1){
        cout << "The factorial of " << number << " is ";
        double accumulator = 1;
        for (; number>0; accumulator*=number--);
        cout << accumulator << ".\n";
    }
    else if (number<=-1){
        cout << "The factorial of " << number << " is ";
        double accumulator = 1;
        for (; number<0; accumulator*=number++);
        cout << accumulator << ".\n";
    }
    else
        cout << "The factorial of " << number << " is 0.\n" << endl;
    return 0;
}

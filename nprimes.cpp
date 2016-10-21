#include <iostream>

using namespace std;

main()
{
    int n, b, c, i, d;
    cout << "coloque valor para N:" << endl;
    cin >> n;
    i=0;
    d=2;
    while (i<n){
        c=0;
        for (b=1; b<=d; ++b){
            if (d%b==0){
                c=c+1;
            }
        }
        if (c==2){
            cout << "primo: " << d << endl;
            i=i+1;
        }
        d=d+1;
    }
}

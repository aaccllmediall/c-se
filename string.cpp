#include <iostream>
#include <string>

using namespace std;

string pigLatinify(string *word)
{
    int i, j;
    string aux;

    i=word.length()
    if (i>3){
        aux=word[0];
        for (j=0; j+1<=i; j++)
            word[j]=word[j+1];
        word[j]="-";
        word[j+1]=aux;
        word=word+"ay"
        return word;
    }
}

int main()
{
    string wordori[];

    cout << "coloque el string" << endl;
    cin << wordori;
    cout << "la version nueva es:" << pigLatinify(wordori) << endl;
    return 0;
}

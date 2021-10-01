#include <iostream>
using namespace std;

int main()
{
    int i;
    string str;

    cout << "Input a string:" << endl;
    getline(cin,str);

    for (i=0 ; str[i] != '\0' ; i++) 
    {
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];
    }

    cout << "Lowercase String:" << str;

    return 0;
}


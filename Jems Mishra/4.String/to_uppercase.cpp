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
        str[i] = (str[i] >= 'a' && str[i] <= 'z') ? (str[i] - 32) : str[i];
    }

    cout << "Uppercase String:" << str;

    return 0;
}


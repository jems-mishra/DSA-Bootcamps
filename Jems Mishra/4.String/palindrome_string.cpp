#include <iostream>
using namespace std;

int main()
{
    string str;

    cout <<"Enter a string:"<<endl;
    getline(cin,str);

    int l;
    for (l=0 ; str[l] != '\0' ; l++);

    cout <<"Length of the string is:"<< l <<endl;

    int i;
    for (i=0 ; (i<l/2) && (str[i] == str[l-i-1]); i++);

    if (i== l/2) 
    { 
        cout <<"String is palindrome!" <<endl;
       }
          else
       {
        cout <<"String is not palindrome!" <<endl;
}

    return 0;
}
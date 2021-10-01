#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,j,start;
    string str1,str2;

    cout <<"Enter a string:"<<endl;
    getline(cin,str1);

    cout<<"Enter another string:"<<endl;
    getline(cin,str2);
        
    if (str1 != str2)
    {
        cout <<"Strings are not Equal." <<endl;
    }
    else
    {
        cout <<"Strings are Equal." <<endl;
    }

    return 0;
}
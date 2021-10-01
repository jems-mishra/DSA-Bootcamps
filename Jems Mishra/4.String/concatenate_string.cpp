#include <iostream>
#include<string>
using namespace std;

int main()
{
    int i=0,j=0;
    string str1,str2,str3;

    cout << "Input a string:" << endl;
    getline(cin,str1);

    cout << "Input another string:" << endl;
    getline(cin,str2);
     
    while(str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }

   
    while(str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    

    str3[j] = '\0';

    cout <<"Concatenated String:" << str3;

    return 0;
}


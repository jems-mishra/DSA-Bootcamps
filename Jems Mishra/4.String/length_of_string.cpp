#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,count;
    string str;

    cout <<"Input a string:" <<endl;
   
    getline(cin,str);
    cout <<"Your entered string is: "<<str <<endl;

    cout <<"Length of the string is:"<<endl;
        count = 0;
        while (str[count] != '\0')
        count++;

        cout << count;
    
    return 0;
}


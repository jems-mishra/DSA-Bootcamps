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

    cout <<"Reverse String:"<<endl;
        count = 0;
        while (str[count] != '\0')
        count++;

        for ( i=count - 1 ; i>=0 ; i-- )
        {
            cout << str[i];
        }


    
    return 0;
}
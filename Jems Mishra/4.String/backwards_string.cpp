#include <iostream>
using namespace std;

int main()
{
    int i,j;
    string str;

    cout <<"Enter a string:"<<endl;
    getline(cin,str);

    int l;
    for (l=0 ; str[l] != '\0' ; l++);

    cout <<"Length:"<< l <<endl;

    int temp;
    for (int i=0 , j=l-1 ; i<l/2 ; i++ , j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout<<"Reverse String:" << str << endl;  

    return 0;
}
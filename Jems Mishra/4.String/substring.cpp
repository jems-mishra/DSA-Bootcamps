#include <iostream>
using namespace std;

int main()
{
    int i,j,count2;
    string str1,str2;

    cout << "Input a string:" << endl;
    getline(cin,str1);

    cout << "Input another string:" << endl;
    getline(cin,str2);

    count2 = 0;
    while(str2[count2] != '\0')
    count2++;

    for(i=0 , j=0 ; str1[i] != '\0' && str2[j] != '\0' ; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else{
            j=0;
        }

    }

    if (j==count2)
    {
        cout << "Substring is at position:" << i-j+1;
    }
   
    return 0;
}


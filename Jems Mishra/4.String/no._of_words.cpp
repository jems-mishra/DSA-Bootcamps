#include <iostream>

using namespace std;

int main()
{
    int word,i;
    string str;

    cout << "Enter a string: "<<endl;
    getline(cin,str);

    cout <<"Your string is: " <<str <<endl;

    word = 0;
    for (i=0 ; str[i] != '\0' ; i++)
    {
        if (str[i] == ' ')
        {
            word++;
        }
    }
        cout <<"Number of words are:" <<endl;

        cout << word+1; 

    return 0;
}
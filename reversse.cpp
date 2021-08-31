#include <iostream>
#include <string.h>
using std::string;


char* ReverseOFStr(char str[])
{
    static int i = 0;
    static char reverse[100];
    if ( *str ) 
    {
        ReverseOFStr(str + 1);
        reverse[i++] = *str;
    }
    return reverse;
}

void Reverse(string str)
{
    if(str.size() == 0)
        return;
    Reverse(str.substr(1));
    std::cout << str[0];
}
int main(){
//     char a[] = "hello";
//     char *reverse;
//     reverse = ReverseOFStr(a);
//     std::cout << reverse << std::endl;
    string a = "abcd";


    Reverse(a);
    return 0;
}
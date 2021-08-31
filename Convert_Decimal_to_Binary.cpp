#include <iostream>
using std::string;
#define MAX 100000

void convert(long long Dec, string &str)
{
    if(Dec != 0)
    {
        convert(Dec/2, str);
        if(Dec % 2 != 0)
        {
            str += "1";
        }
        else if (Dec % 2 == 0)
        {
            str += "0";
        }   
    }
}

int main(){
    string str;
    long long num;
    long long arr[MAX];   
    std::cin >> num;

    for(long long i = 0; i < num;  i++)
    {
        std::cin >> arr[i];
    }
    for(long long i = 0; i < num; i++)
    {
        convert(arr[i], str);

        std::cout << str << std::endl;
        str = "";
    }
    return 0;
}

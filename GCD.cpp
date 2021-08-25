#include <iostream>

int GCD(int a, int b)
{
	while(a != b)
	{
	if (a > b)
		return GCD(a - b, b);
	else
		return GCD(a , b - a);
	}
	return a;



}
int main(){	
	int a = 10;
	int b = 50;
	std::cout<<GCD(a, b)<<std::endl;
	return 0;
}
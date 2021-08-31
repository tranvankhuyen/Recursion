#include <iostream>

int num(int a)
{
	if (a == 0)
		return 5;
	return num(a-1) + 5;
}
int main(){
	int a = 5;
	for(int i = 0; i < a; i++)
	{
		std::cout<<num(i)<<" ";
	}
	return 0;
}
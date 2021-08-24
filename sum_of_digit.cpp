#include <iostream>

int sum_of_digit(int num)
{	
	int s;
	if(num > 0)
		{
			s = num - num / 10 * 10;
			return sum_of_digit(num / 10) + s;
		}
	return 0;
}
int main(){
	int num;
	std::cin>>num;
	std::cout<<sum_of_digit(num);
	return 0;
}
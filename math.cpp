#include <iostream>
#include <cmath>

int	main()
{
	using std::cout;

	int x;
	int	y;
	int	potato;
	int	big_potato;
	int	addition_result;
	
	x = 3;
	y = 2;
	potato = 100;
	big_potato = potato * potato;
	addition_result = x + y;
	while (addition_result < big_potato)
	{
		std::cout << addition_result << '\n';
		if (addition_result == big_potato - 1)
			cout << "ihu" << '\n';
		addition_result++;
	}
	return (0);
}
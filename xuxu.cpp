#include <iostream>

int	main()
{
	using std::cin;
	using std::cout;

	std::string name;
	cout << "what's your name?";
	cin >> name;

	cout << "hello " << name;
	return (0);
}
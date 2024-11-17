#include <iostream>

int	main()
{
	using std::cout;

	int monaten;

	monaten = 8;
	switch (monaten)
	{
		case 1:
			cout << "Januar";
			break;
		case 2:
			cout << "Februar";
			break;
		case 3:
			cout << "Marz";
			break;
		case 4:
			cout << "April";
			break;
		case 5:
			cout << "Mai";
			break;
		case 6:
			cout << "Juni";
			break;
		case 7:
			cout << "Juli";
			break;
		case 8:
			cout << "August";
			break;
		case 9:
			cout << "September";
			break;
		case 10:
			cout << "Oktober";
			break;
		case 11:
			cout << "November";
			break;
		case 12:
			cout << "Dezember";
			break;
	}
	return (0);
}
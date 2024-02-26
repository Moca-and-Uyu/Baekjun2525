#include <iostream>
using namespace std;

int main()
{
	int hour, min, cook = 0;
	int addhour{}, addmin{};
	int totalhour{}, totalmin{};
	cin >> hour >> min;
	cin >> cook;
	addhour = cook / 60;
	addmin =  cook % 60;

	if (addhour > 0)  // 1시간 이상임.
	{
		if (addhour == 0)  // 딱 정시임.
		{
			totalhour = hour + addhour;
		}
		totalhour = hour + addhour;
		totalmin = min + addmin;

	}
	else   // 한 시간 미만
	{
		totalhour = hour;
		totalmin = min + addmin;
	}


	if (totalmin > 59)
	{
		int roundup = totalmin / 60;    // 몇을 올려야되는지
		totalhour += roundup;
		totalmin -= 60;
	}
	if (totalhour > 23)
	{
		totalhour -= 24;
	}
	cout << totalhour << " " << totalmin;
}
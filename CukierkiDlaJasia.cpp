#include <iostream>

using namespace std;

int main()
{
	int s, c, cps, r;

	cin >> s >> c;

	cps = c / (s - 1);

	r = c - cps * (s - 1);

	cout << "Candy Per Student : " << cps;

	cout << "\nRest Of The Candys : " << r;

	return 0;
}

/// https://www.youtube.com/watch?v=Kc98tH59A_U&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo&index=2
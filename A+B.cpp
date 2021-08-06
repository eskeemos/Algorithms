#include <iostream>
#include<string>  
#include<sstream>

using namespace std;

int main()
{
	unsigned long long int n;

	cin >> n;

	int ll = to_string(n).length();

	int z,x,y,out = 0;

	string a, b, wynik;

	for (int i = 0; i <= n; i++)
	{
		a = to_string(i);

		for (int j = 0; j <= n; j++)
		{
			b = to_string(j);

			for (int i = a.length(); i < ll; i++)
			{
				a = "0" + a;
			}
			for (int i = b.length(); i < ll; i++)
			{
				b = "0" + b;
			}

			wynik = "";

			for (int i = 0; i < ll; i++)
			{
				stringstream s1; s1 << a[i]; s1 >> x;
				stringstream s2; s2 << b[i]; s2 >> y;

				z = x + y;

				wynik += to_string(z);
			}

			if (stoi(wynik) == n)
			{
				out += 1;
			}

		}
	}

	cout << out;

	return 0;
}

/// https://szkopul.edu.pl/problemset/problem/kzUlU--NjB0KKAGvz2es62f8/site/?key=statement
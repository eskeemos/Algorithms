#include <iostream>

using namespace std;

void getExhausted(int finish, int m, long int** tab, double& suma, double& x, int target, double& razy)
{
	if (finish == target)
	{
		double w = suma / razy;
		if (x == 0)
		{
			x = w;
		}
		else if (w < x)
		{
			x = w;
		}
		return;
	}
	for (int i = 0; i < m; i++)
	{
		if (finish == tab[i][0])
		{
			int h = razy, h2 = suma;
			suma += tab[i][2]; razy++;
			tab[i][0] = 0;
			getExhausted(tab[i][1], m, tab, suma, x, target, razy);
			tab[i][0] = finish;
			razy = h;
			suma = h2;
		}
	}
}

int main()
{
	int n, m;

	cin >> n >> m;

	long int** data = new long int* [m];

	for (int i = 0; i < m; i++)
	{
		data[i] = new long int[3];

		for (int j = 0; j < 3; j++)
		{
			cin >> data[i][j];
		}
	}

	double x = 0, razy;

	for (int i = 0; i < m; i++)
	{
		double suma = data[i][2];
		razy = 1;
		getExhausted(data[i][1], m, data, suma, x, data[i][0], razy);
	}

	cout << x;

	return 0;
}

/// https://szkopul.edu.pl/problemset/problem/zuuZLeGrS-pExrg0F1pBFtdJ/site/?key=statement
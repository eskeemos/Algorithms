#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, diff, max = 0;

	cin >> n;

	int * t = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> t[i];

		for (int j = 0; j < i; j++)
		{
			diff = t[i] - t[j];

			if (max < diff)
			{
				max = diff;
			}
		}
	}

	cout << max;

	return 0;
}

/// https://szkopul.edu.pl/problemset/problem/akcje/site/?key=statement
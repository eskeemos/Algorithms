#include <iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int x;
    
    cin >> x;

    int * tab = new int[x];

    for (int i = 0; i < x; i++)
    {
        cin >> tab[i];
    }

    sort(tab, tab+x, compare);

    for (int i = 0; i < 10; i++)
    {
        cout << tab[i] << " ";
    }

    return 0;
}

/// https://szkopul.edu.pl/problemset/problem/10wspanialych/site/?key=statement
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int czas,g,m,s;

    cin >> czas;

    g = floor(czas / 3600);
    m = floor((czas - 3600 * g) / 60);
    s = czas - (3600 * g) - (m * 60);

    cout << g << "g" << m << "m" << s << "s";
    return 0;
}

/// https://szkopul.edu.pl/problemset/problem/92jOoxYQmJYe2BsRCxnW1CFQ/site/?key=statement

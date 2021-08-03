#include <iostream>

using namespace std;

int main()
{
    long int k,w,m,u;

    cin >>k>>w>>m;

    u = (w-k)/m;
    k += m*u;

    if(k < w) u++;

    cout << u;

    return 0;
}

/// https://szkopul.edu.pl/problemset/problem/mG8FzX0K8mAx4ne65FAwEfFp/site/?key=statement

#include <iostream>
#include<string>

using namespace std;
int main()
{
    int n, m;

    cin >> n >> m;

    int * N = new int[n],* M = new int[m];

    for(int i=0;i<n;i++)
    {
        cin >> N[i];
    }
	
    for(int i=0;i<m;i++)
    {
        cin >> M[i];
    }

    int j = 0,i = 0;
    long int suma = 0;
    while(true)
    {
        if(M[i] > N[j])
        {
            suma += M[i] - N[j];
            ++j;++i;
            if(j == n) {cout << "TAK\n" << suma; break;}

        }
        else
        {
            ++i;
            if(i == m) {cout << "NIE\n" << n - j; break;}
        }
    }

    return 0;
}

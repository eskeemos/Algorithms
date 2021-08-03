#include <iostream>
#include<algorithm>
#include<string>
#include <sstream>
#include <math.h>

using namespace std;

int main()
{

    int n, m;cin >> n >> m;
    int * N = new int[n],* M = new int[m];
    for(int i=0;i<n;i++) cin >> N[i];
    sort(N,N+n);



    string b;
    cin.ignore();
    getline(cin,b,'\n');

    int k = 0;
    int c = (b.length() + 1) / 2;

    stringstream ss(b);
    while (ss.good() && k < c)
    {
        ss >> M[k];++k;
    }
    for(int i=k;i<=m;i++)
    {
        M[k-1] = M[k-2];
    }
    sort(M,M+m);

    int j = 0,i = 0;
    long int suma = 0;
    while(true)
    {
        if(M[i] > N[j])
        {
            suma += M[i] - N[j];
            ++j;++i;
            if(j == n) {cout << "\nTAK\n" << suma; break;}

        }
        else
        {
            ++i;
            if(i == m) {cout << "\nNIE\n" << n - j; break;}
        }
    }
    return 0;
}

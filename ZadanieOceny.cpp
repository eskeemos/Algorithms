#include <iostream>

using namespace std;

int main()
{
    short int n,o1=0,o2=0,o3=0,o4=0,o5=0,o6=0;

    cin >> n;

    int * tablica = new int[n];

    for(int i = 0;i < n;i++)
    {
        cin >> tablica[i];
    }

    while(n--)
    {
        switch(tablica[n])
        {
            case 1: o1++;break;
            case 2: o2++;break;
            case 3: o3++;break;
            case 4: o4++;break;
            case 5: o5++;break;
            case 6: o6++;break;
        }
    }

    cout <<o1<<" "<<o2<<" "<<o3<<" "<<o4<<" "<<o5<<" "<<o6;


    delete [] tablica;

    return 0;
}

/// https://szkopul.edu.pl/problemset/problem/xzrTLNvFsWiNDkZ8Wak2vCAC/site/?key=statement

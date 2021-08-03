#include <iostream>

using namespace std;
void findWay(string & res, int ** roads, int A, int B, int roadNum)
{
    for(int i=0;i<roadNum;i++)
    {
        if((A == roads[i][0] && B == roads[i][1])||
           (B == roads[i][0] && A == roads[i][1])||
           (A == B))
        {
            res = "TAK\n"; break;
        }
        else if(A == roads[i][1])
        {
            findWay(res,roads,roads[i][0],B,roadNum);
        }
    }
}
int main()
{
    long int N,M,Q;

    cin >> N >> M;
    int ** roads = new int * [M];
    for(int i=0;i<M;i++)
    {
        roads[i] = new int[2];
        for(int j=0;j<2;j++) cin >> roads[i][j];
    }

    cin >> Q;
    int ** wants = new int * [Q];
    for(int i=0;i<Q;i++)
    {
        wants[i] = new int[2];
        for(int j=0;j<2;j++) cin >> wants[i][j];
    }

    string res;
    for(int i=0;i<Q;i++)
    {
        res = "NIE\n";

        findWay(res,roads,wants[i][0],wants[i][1],M);

        cout << res;

    }
    return 0;
}

/// https://szkopul.edu.pl/problemset/problem/autostrady/site/?key=statement

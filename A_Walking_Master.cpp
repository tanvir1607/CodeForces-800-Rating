#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int si, sj, di, dj, moves;
        cin >> si >> sj >> di >> dj;

        if (dj < sj)
        {
            cout << -1 << endl;
            continue;
        }
        moves = dj - sj, si += moves;
        if (di > si)
        {
            cout << -1 << endl;
            continue;
        }
        moves += si - di;
        cout << moves << endl;
    }

    return 0;
}
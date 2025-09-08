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
        int size, xorSum = 0;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x, xorSum ^= x;
        cout << ((size & 1) || (!xorSum) ? xorSum : -1) << endl;
    }

    return 0;
}
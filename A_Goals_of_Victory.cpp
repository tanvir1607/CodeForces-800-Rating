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
        int size, sum = 0, x;
        cin >> size;
        while (--size) cin >> x, sum += x;
        cout << (-1) * sum << endl;
    }

    return 0;
}
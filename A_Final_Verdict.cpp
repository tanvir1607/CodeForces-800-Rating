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
        int size, target, sum = 0, x;
        cin >> size >> target;
        for (int i = 0; i < size; i++) cin >> x, sum += x;
        cout << (sum == size * target ? "YES" : "NO") << endl;
    }

    return 0;
}

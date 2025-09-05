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
        int size;
        cin >> size;
        int sum = 0, x;
        for (int i = 0; i < size; i++) cin >> x, sum += x;
        cout << sum - (size - 1) << endl;
    }

    return 0;
}


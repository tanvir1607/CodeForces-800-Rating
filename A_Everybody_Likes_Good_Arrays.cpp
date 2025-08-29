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
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        int parity = vec.front() % 2, ans = 0;
        for (int i = 1; i < size; i++)
            vec[i] % 2 == parity ? ans++ : parity ^= 1;

        cout << ans << endl;
    }

    return 0;
}


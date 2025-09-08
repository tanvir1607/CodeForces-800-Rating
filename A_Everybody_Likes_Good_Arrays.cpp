// Approach - 1
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

        int parity = vec.front() & 1, ans = 0;
        for (int i = 1; i < size; i++)
            (vec[i] & 1) == parity ? ans++ : parity ^= 1;

        cout << ans << endl;
    }

    return 0;
}





// Approach - 2
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
        int size, ans = 0;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        for (int i = 0; i < size - 1; i++) 
            ans += !((vec[i] ^ vec[i + 1]) & 1);

        cout << ans << endl;
    }

    return 0;
}


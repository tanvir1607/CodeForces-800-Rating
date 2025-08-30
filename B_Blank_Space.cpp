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

        int count = 0, ans = 0;
        for (int i = 0; i < size; i++)
        {
            vec[i] == 0 ? count++ : count = 0;
            ans = max(ans, count);
        }
        cout << ans << endl;
    }

    return 0;
}


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

        int l = 0, r = 0, ans = 0;
        while (r < size)
        {
            if (vec[r] == 0) ans = max(ans, r - l + 1), r++;
            else r++, l = r;
        }
        cout << ans << endl;
    }

    return 0;
}
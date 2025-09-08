// Approach - 1 -> Counting and Reset
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
        int size, count = 0, ans = 0;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        for (int x : vec)
        {
            count = !x ? count + 1 : 0;
            ans = max(ans, count);
        }
        cout << ans << endl;
    }

    return 0;
}





// Approach - 2 -> Two pointers
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
        int size, l = 0, r = 0, ans = 0;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        while (r < size)
        {
            if (!vec[r]) ans = max(ans, r - l + 1), r++;
            else r++, l = r;
        }
        cout << ans << endl;
    }

    return 0;
}
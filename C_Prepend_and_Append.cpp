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
        string str;
        cin >> str;

        int l = 0, r = size - 1, ans = size;
        while (l <= r) 
        {
            if (str[l] != str[r]) ans -= 2, l++, r--;
            else break;
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
        deque<char> dq(size);
        for (char &x : dq) cin >> x;

        while (!dq.empty())
        {
            if (dq.front() != dq.back()) dq.pop_front(), dq.pop_back();
            else break;
        }
        cout << dq.size() << endl;
    }

    return 0;
}
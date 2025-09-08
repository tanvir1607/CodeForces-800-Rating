// Approach - 1 --> By Loop
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
        int num, ans = 0;
        cin >> num;

        for (int div = 1e5; num; div /= 10)
            if (num / div) ans += num / div, num = div - 1;

        cout << ans << endl;
    }

    return 0;
}









// Approach - 2 --> By Math
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
        int num;
        cin >> num;

        int digit = (int) log10(num);
        int ans = num / pow(10, digit) + digit * 9;
        cout << ans << endl;
    }

    return 0;
}

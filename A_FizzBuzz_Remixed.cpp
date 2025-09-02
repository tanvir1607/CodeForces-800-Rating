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

        int terms = (num / 15) * 3;
        terms += num % 15 == 0 ? 1 : num % 15 == 1 ? 2 : 3;
        cout << terms << endl;
    }

    return 0;
}

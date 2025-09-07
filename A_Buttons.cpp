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
        int anna, katie, c;
        cin >> anna >> katie >> c;

        anna += (c + 1) / 2, katie += c / 2;
        cout << (anna > katie ? "First" : "Second") << endl;
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
        int a, b, c;
        cin >> a >> b >> c;
        if (c & 1) cout << (a >= b ? "First" : "Second") << endl;
        else cout << (a > b ? "First" : "Second") << endl;
    }

    return 0;
}
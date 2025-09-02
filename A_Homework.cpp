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
        int lenA, lenB;
        string a, b, c;
        cin >> lenA >> a >> lenB >> b >> c;

        for (int i = 0; i < lenB; i++)
            if (c[i] == 'V') a = b[i] + a;
            else a += b[i];

        cout << a << endl;
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
        int lenA, lenB;
        string a, b, c;
        cin >> lenA >> a >> lenB >> b >> c;

        for (int i = 0; i < lenB; i++)
            if (c[i] == 'V') a.insert(a.begin(), b[i]);
            else a.push_back(b[i]);

        cout << a << endl;
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
        int lenA, lenB;
        string a, b, c;
        cin >> lenA >> a >> lenB >> b >> c;

        string prefix = "", suffix = "";
        for (int i = 0; i < lenB; i++)
            if (c[i] == 'V') prefix += b[i];
            else suffix += b[i];

        reverse(prefix.begin(), prefix.end());
        cout << prefix << a << suffix << endl;
    }

    return 0;
}


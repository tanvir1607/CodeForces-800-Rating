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
        int size, countPos = 0, countNeg = 0, x;
        cin >> size;
        while (size--)
        {
            cin >> x;
            x == 1 ? countPos++ : countNeg++;
        }
        int operation = 0;
        while (countPos < countNeg || (countNeg & 1))
            operation++, countPos++, countNeg--;
        cout << operation << endl;
    }

    return 0;
}
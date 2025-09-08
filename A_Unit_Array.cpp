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
        int size, pos = 0, neg = 0, op = 0, x;
        cin >> size;
        while (size--) 
            cin >> x, 
            x == 1 ? pos++ : neg++;

        while (pos < neg || (neg & 1)) op++, pos++, neg--;
        cout << op << endl;
    }

    return 0;
}





//Approach - 2
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
        int size, pos = 0, neg = 0, op = 0, x;
        cin >> size;
        while (size--) 
            cin >> x, 
            x == 1 ? pos++ : neg++;

        if (pos < neg) op += (neg - pos + 1) / 2, neg -= op;
        if (neg & 1) op++;
        cout << op << endl;
    }

    return 0;
}
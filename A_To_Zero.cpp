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
        int n, k, operation = 0;
        cin >> n >> k;

        if (n & 1) n -= k, operation++;
        --k;
        operation += n / k + (n % k ? 1 : 0);
        cout << operation << endl;
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
        int n, k, operation = 0;
        cin >> n >> k;

        operation += n & 1 ? (n -= k, k--, 1) : (k--, 0);
        operation += (n + k - 1) / k;
        cout << operation << endl;
    }

    return 0;
}
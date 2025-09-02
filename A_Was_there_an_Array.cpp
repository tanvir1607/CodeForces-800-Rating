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
        vector<char> vec(size - 2);
        for (char &ch : vec) cin >> ch;

        string str(vec.begin(), vec.end());
        cout << (str.find("101") == string::npos ? "YES" : "NO") << endl;
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
        vector<char> vec(size - 2);
        for (char &ch : vec) cin >> ch;

        bool flag = true;
        for (int i = 0, j = 1, k = 2; k < size - 2; i++, j++, k++)
        {
            if (vec[i] == '1' && vec[j] == '0' && vec[k] == '1')
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}

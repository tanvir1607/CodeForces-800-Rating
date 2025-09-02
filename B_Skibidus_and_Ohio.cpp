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
        string str;
        cin >> str;

        int ans = str.size();
        for (int i = 0, j = 1; j < str.size(); i++, j++)
        {
            if (str[i] == str[j])
            {
                ans = 1;
                break;
            }
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
        string str;
        cin >> str;

        int ans = str.size();
        for (int i = 0; i < str.size() - 1; i++)
        {
            if (str[i] == str[i + 1])
            {
                ans = 1;
                break;
            }
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
        string str;
        cin >> str;

        cout << (adjacent_find(str.begin(), str.end()) == str.end() ? 
                str.size() : 1) << endl;
    }

    return 0;
}


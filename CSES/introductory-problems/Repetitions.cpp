#include <iostream>
#include <string>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    string str;
    cin >> str;

    int ans = 0;
    int cnt = 0;
    char a = 'A';

    for (char ch : str)
    {
        if (ch == a)
        {
            cnt++;
        }
        else
        {
            cnt = 1;
            a = ch;
        }
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}

// Given : only string consist of only 4 repetitive chars A T C G
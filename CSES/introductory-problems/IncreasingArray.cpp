#include <iostream>
#include <string>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mx = 0;
    ll ans = 0;
    while (n--)
    {
        int x;
        cin >> x;

        mx = max(mx, x);
        ans += mx - x;
    }
    cout << ans;

    return 0;
}
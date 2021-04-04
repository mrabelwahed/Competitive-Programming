#include <iostream>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{

    ll a, b;
    cin >> a;
    cin >> b;

    if (a % 2 != 0)
        a++;

    if (b - a < 2 || a > b)
        cout << -1 << endl;
    else
    {

        cout << a << " " << a + 1 << " " << a + 2;
    }

    return 0;
}
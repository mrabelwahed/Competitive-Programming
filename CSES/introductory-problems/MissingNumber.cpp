#include <iostream>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{

    ll n, s = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        s += a;
    }

    cout << n * (n + 1) / 2 - s;
    return 0;
}

// Arithmetic series
// 1 2 3 4 5 6 .....
// sum = n(n+1)/2 where n is the number of items

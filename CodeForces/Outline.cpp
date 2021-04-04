#include <iostream>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{

    int a;
    cin >> a;

    int cnt = 0;
    int ones = 0;
    int arr[a];
    int index = 0;

    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
        if (x == 1)
            ones++;
    }

    for (int i = 0; i < a - 1; i++)
    {
        if (arr[i] == 1)
        {
            ones--;
            if (ones > 0)
            {
                cnt += 2;
                if (arr[i + 1] == 1)
                    cnt--;
            }
            else
            {
                cnt++;
            }
        }
    }

    if (arr[a - 1] == 1)
        cnt++;
    cout << cnt << endl;

    return 0;
}
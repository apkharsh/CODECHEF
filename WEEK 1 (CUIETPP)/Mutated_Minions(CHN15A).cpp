#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); // ignore this
    int T;
    cin >> T;
    // cin.ignore(); must be there when using getline(cin, s)
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] + k) % 7 == 0)
            {
                counter++;
            }
        }

        cout << counter << endl;
    }
    return 0;
}

// contributed by apkharsh

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
        int n;
        cin >> n;
        int counter = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n >= i)
            {
                counter++;
            }
            n = n - i;
        }
        cout << counter << endl;
    }
    return 0;
}

// contributed by apkharsh

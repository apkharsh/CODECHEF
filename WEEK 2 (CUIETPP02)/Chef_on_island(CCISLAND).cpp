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
        float x, y, x1, y1, d;
        cin >> x >> y >> x1 >> y1 >> d;

        if (x >= x1 * d && y >= y1 * d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// contributed by apkharsh

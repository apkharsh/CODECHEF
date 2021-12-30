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
        int x, m, d;
        cin >> x >> m >> d;
        cout << min(x * m , x + d) << endl;

    }
    return 0;
}

// contributed by apkharsh

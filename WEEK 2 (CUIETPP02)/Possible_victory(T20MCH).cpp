#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); // ignore this
    // cin.ignore(); must be there when using getline(cin, s)
    int R, O, C;
    cin >> R >> O >> C;
    int score = ((20 - O) * 6 * 6) + C;
    if (score > R)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}

// contributed by apkharsh
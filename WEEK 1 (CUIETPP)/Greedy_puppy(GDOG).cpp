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
        int coins, people;
        cin >> coins >> people;
        int ans = 0;
        for (int i = 1; i <= people; i++)
        {
            ans = max(ans, coins % i);
        }
        cout << ans << endl;
    }
    return 0;
}

// contributed by apkharsh
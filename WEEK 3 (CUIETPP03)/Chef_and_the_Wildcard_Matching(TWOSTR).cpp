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
        string X, Y;
        int i;
        cin >> X >> Y;
        int counter = X.length();
        for (i = 0; i < X.length(); i++)
        {
            if (X[i] == Y[i] || X[i] == '?' || Y[i] == '?')
            {
                counter--;
            }
        }

        if (counter == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}

// contributed by apkharsh

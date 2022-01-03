
#include <bits/stdc++.h>
#include <cstring>

using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    // cin.ignore(); must be there when using getline(cin, s)
    string S;
    cin >> S;

    int N;
    cin >> N;

    while (N--)
    {
        string W;
        cin >> W;

        int counter = W.length();
        for (int i = 0; i < S.length(); i++)
        {
            for (int j = 0; j < W.length(); j++)
            {
                if (W[j] == S[i])
                    counter--;
                continue;
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

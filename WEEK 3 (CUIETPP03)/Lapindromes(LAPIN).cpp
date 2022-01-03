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
        string S;
        cin >> S;

        int len = S.length();
        int mid;
        if (len % 2 == 0){
            mid = len / 2;
        }
        else{
            int x = len / 2;
            S.erase(S.begin() + x);
            mid = S.length() / 2;
        }

        string S1 = S.substr(0, mid);
        string S2 = S.substr(mid);
        sort(S1.begin(), S1.end());
        sort(S2.begin(), S2.end());

        int m = 0, n = 0;
        int counter = S1.length();
        for (int i = 0; i < S1.length(); i++)
        {
            if (S1[m] == S2[n]){
                counter--;
            }
            m++;
            n++;
        }

        if (counter == 0){
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}

// contributed by apkharsh

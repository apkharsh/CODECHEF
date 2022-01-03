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
        string str;
        int counter;
        cin >> str;
        counter = 0;
        char last = '1';
        for (int index = 0; index < str.length(); index++)
        {
            if (str[index] != last)
            {
                counter++;
                last = str[index];
            }
        }
        cout << counter << endl;
    }
    return 0;
}

// contributed by apkharsh

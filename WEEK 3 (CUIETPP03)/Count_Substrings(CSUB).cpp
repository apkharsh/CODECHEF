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
		int N;
		string S;
		cin >> N;
		cin >> S;

		int counter = 0;
		for (int i = 0; i < N; i++) {
			if (S[i] == '1') {
				counter++;
			}
		}
		cout << (counter * (counter + 1)) / 2 << endl;
	}
	return 0;
}

// contributed by apkharsh
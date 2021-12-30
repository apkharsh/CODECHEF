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
		int D, C, A1, A2, A3, B1, B2, B3;
		cin >> D >> C;
		cin >> A1 >> A2 >> A3;
		cin >> B1 >> B2 >> B3;

		int order1 = A1 + A2 + A3;
		int order2 = B1 + B2 + B3;

		int cost = order1 + order2 + (D * 2);
		int dCost = order1 + order2; // delivery will deduct later

		if (order1 >= 150 && order2 >= 150) {
			dCost = cost - D * 2 + C;
		}
		else if (order1 >= 150 || order2 >= 150) {
			dCost = cost - D + C;
		}
		else {
			dCost = dCost + D * 2;
		}

		if (dCost < cost) {
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;

	}
	return 0;
}

// contributed by apkharsh


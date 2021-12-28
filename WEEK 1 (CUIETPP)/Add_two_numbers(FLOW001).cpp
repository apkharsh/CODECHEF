#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
		int a,b;
		cin >> a >> b;
		cout << a+b << endl;
	}
	return 0;
}

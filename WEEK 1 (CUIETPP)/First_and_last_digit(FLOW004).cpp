#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false); // ignore
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
		int n,first,last;
		cin >> n;
		last = n%10;
		while(n>9){
			n=n/10;
		}
		first = n;
		cout << first + last << endl;
	}
	return 0;
}

// contributed by apkharsh
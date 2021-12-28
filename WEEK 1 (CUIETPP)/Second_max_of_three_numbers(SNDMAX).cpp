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
		int arr[3];
		for(int i=0;i<3;i++){
			cin >> arr[i];
		}
		sort(arr,arr+3);
		cout << arr[1] << endl;
	}
	return 0;
}

// contributed by apkharsh
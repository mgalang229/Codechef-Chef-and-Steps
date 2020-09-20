#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int d[n];
		for(int i=0; i<n; ++i)
			cin >> d[i];
		for(int i=0; i<n; ++i) {
			if(d[i]%k==0)
				cout << 1;
			else
				cout << 0;
		}
		cout << "\n";
	}
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// upper limit for every number is equal to the number itself minus one
	const int MAX = (int) 2e5;
	vector<int> upper_limit(MAX + 1, 0);
	for (int i = 2; i < (int) upper_limit.size(); i++) {
		upper_limit[i] = i - 1;
	}
	
	// testcase input
	int tt;
	cin >> tt;
	while (tt--) {
		// problem input
		int n;
		cin >> n;
		vector<int> a(n);
		set<int> s;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		
		// count the frequency of every element
		vector<int> counter(*max_element(a.begin(), a.end()) + 1, 0);
		for (int i = 0; i < n; i++) {
			counter[a[i]]++;
		}
		
		// choose between the min(frequency of the element, upper limit for every element)
		long long ans = 0;
		for (auto x : s) {
			ans += min(counter[x], upper_limit[x]);
		}
		
		// output the answer
		cout << ans << '\n';
	}
	return 0;
}

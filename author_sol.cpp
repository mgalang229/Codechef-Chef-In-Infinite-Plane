#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		map<int, int> freq;
		for (int i = 0; i < n; i++) {
			int elem;
			cin >> elem;
			// count the frequency of every element
			freq[elem]++;
		}
		int ans = 0;
		// object destructuring
		for (auto [elem, freq_elem] : freq) {
			// choose between the minimum of the element itself minus one or its frequency
			ans += min(elem - 1, freq_elem);
		}
		cout << ans << '\n';
	}
	return 0;
}

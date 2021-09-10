#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	// if there is only one (1) number, then output 'Yes'
	if (n == 1) {
		cout << "Yes" << '\n';
		return 0;
	}
	vector<int> counter(26, 0);
	for (int i = 0; i < n; i++) {
		counter[s[i] - 'a']++;
	}
	// the only case wherein the output is 'No' is when there are no repeating letters
	bool checker = false;
	for (int i = 0; i < (int) counter.size(); i++) {
		if (counter[i] > 1) {
			checker = true;
			break;
		}
	}
	cout << (checker ? "Yes" : "No") << '\n';
	return 0;
}

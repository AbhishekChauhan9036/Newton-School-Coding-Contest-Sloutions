#include <bits/stdc++.h> // header file includes every Standard library
#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define all(x)      x.begin(), x.end()
#define pb          push_back
#define sz(x)       (int)(x.size())
#define ll          long long
#define fi          first
#define se          second
#define lbd         lower_bound
#define ubd         upper_bound

template <typename T>
using ordered_set = tree<T, null_type,
      less<T>, rb_tree_tag,
      tree_order_statistics_node_update>;

const int MOD = 1e9 + 7;
const double eps = 1e-10;
const long long INF = 1e18;
const int N = 2e5 + 10;


void solve() {
	int n;
	cin >> n;
	int i = 1;
	while (i * (i + 1) / 2 < n) i++;
	string s;
	for (int j = 0; j < i; j++) {
		s += (char)('a' + j);
	}
	int diff = i * (i + 1) / 2 - n;
	int curr = 1;
	while (diff) {
		int k = 1;
		while (k * (k + 1) / 2 <= diff) k++;
		k--;
		diff -= k * (k + 1) / 2;
		for (int i = curr; i < curr + k; i++) s[i] = 'a';
		curr += k + 1;
	}
	int x = 1;
	for (int i = 0; i < sz(s); i++) {
		if (s[i] != 'a') {
			s[i] = (char)('a' + x);
			x++;
		}
	}
	cout << s;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tt = 1;
	// cin >> tt;
	while (tt--) {
		solve();
	}
	return 0;
}
#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void amish() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fastio;
}

int main() {
	
	
	string str; cin>>str;
	string temp = str;
	ll mp[26], mp1[26];
	memset(mp, 0, sizeof mp);
	for(ll i=0;i<str.length();i++) {
		mp[str[i] - 'a']++;
		mp1[str[i] - 'a']++;
	}
	// set<ll> st;
	// for(ll i=0;i<26;i++) if(mp[i]) st.insert(mp[i]);
	// int f = 0;
	// if(st.size() == 1) {
	// 	f = 1;
	// }
	ll ct = 0;
	string s = "";
	for(ll i=0;i<str.length();i++) {
		ll mx = 0, ind = -1;
		bool flag = false;
		for(ll j=0;j<26;j++) {
			if(j == str[i] - 'a') continue;
			if(!mp[j]) continue;
			mp[j]--;
			ct++;
			flag = true;
			s += char(97 + j);
			break;
		}
		if(!flag) s += str[i];
	}
	// cout<<s<<"\n";

	for(ll i=0;i<str.length();i++) {
		if(str[i] == s[i]) {
			char ch = s[i];
			for(ll j=0;j<s.length();j++) {
				if(str[j] != ch && s[j] != ch) {
					swap(s[j], s[i]);
					ct++;
					break;
				}
			}
		}
	}	
	cout<<ct<<"\n";

	// cout<<char(97)<<"\n";

	// reverse(temp.begin(), temp.end());
	// ll ct1 = 0;
	// for(ll i=0;i<temp.length();i++) {
	// 	if(str[i] != temp[i]) ct1++;
	// }

	// cout<<max(ct1, ct)<<"\n";
	return 0;
}
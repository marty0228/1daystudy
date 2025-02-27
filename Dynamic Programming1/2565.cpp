#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int dp[102];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int N, a, b;
	int result = 0;
	cin >> N;
	
	vector<pair<int, int>> v;
	v.emplace_back(0, 0);
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		v.emplace_back(a, b);
	}
	sort(v.begin(), v.end());
	
	
	for (int i = 1; i <= N; i++) {//����for
		for (int j = 0; j < i; j++) {
			if (v[i].second > v[j].second) {
				if (dp[j] >= dp[i]) {
					dp[i] = dp[j] + 1;
				}
			}
		}
		result = max(result, dp[i]);
	}
	
	cout << N - result << endl;
	return 0;
}






#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[10];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt = 0;
	for (int i = n-1; i >= 0; i--){
		if (a[i]<=k) 
		{
			cnt += k / a[i]; 
			k %= a[i]; 
		}
	}
	cout << cnt;

    
	return 0;
}






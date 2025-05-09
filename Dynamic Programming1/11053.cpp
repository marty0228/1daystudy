#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> dp(n,1);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }

    cout<<*max_element(dp.begin(),dp.end())<<endl;
    
	return 0;
}






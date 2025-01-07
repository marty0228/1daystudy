#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int N;
    cin >> N;
    vector<int> A(N); 
    vector<int> dp(N, 1); 
    vector<int> dp_re(N,1);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(A[j]<A[i]&&dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
    }
    for(int i=N-1;i>=0;i--){
        for(int j=N-1;j>i;j--){
            if(A[j]<A[i]&&dp_re[i]<dp_re[j]+1){
                dp_re[i]=dp_re[j]+1;
            }
        }
    }
    int max_le=0;
    for(int i=0;i<N;i++){
        max_le=max(max_le,dp[i]+dp_re[i]-1);
    }
    cout<<max_le<<endl;

    return 0;
}






#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int N;
    cin>>N;
    vector<int> dis(N-1);
    vector<int> pri(N);
    long long min=10000000001;
    long long ans=0;

    for(int i=0;i<N-1;i++){
        cin>>dis[i];
    }
    for(int i=0;i<N;i++){
        cin>>pri[i];
    }
    for(int i=0;i<N-1;i++){
        if(pri[i]<min){
            min=pri[i];
        }
        ans=ans+dis[i]*min;
    }
    cout<<ans;

	return 0;
}






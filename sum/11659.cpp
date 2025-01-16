#include <iostream>
#include <bits/stdc++.h>
using namespace std;





int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int n,m;
    cin>>n>>m;

    vector<long> s(n+1);
    
    s[0]=0;
    for(int i=1;i<=n;i++){
        long input;
        cin>>input;
        s[i]=s[i-1]+input;
    }


    for(int i=0;i<m;i++){
        int start,end;
        cin>>start>>end;
        
        cout<<s[end]-s[start-1]<<'\n';
    }
    
	return 0;
}






#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int N;
    cin>>N;
    vector<pair<int,int>> A(N);

    for(int i=0;i<N;i++){
        cin>>A[i].second;
        cin>>A[i].first;
    }
    sort(A.begin(),A.end());

    int count=0;
    int end=-1;

    for(int i=0;i<N;i++){
        if(A[i].second>=end){
            end=A[i].first;
            count++;
        }
    }
    
    cout<<count<<"\n";
	return 0;
}






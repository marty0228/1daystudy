#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int M,N;
    cin>>M>>N;
    vector<int> A(N+1);

    for(int i=2;i<=N;i++){
        A[i]=i;
    }   
    for(int i=2;i<=sqrt(N);i++){
        if(A[i]==0){
            continue;
        }
        for(int j=i+i;j<=N;j+=i){
            A[j]=0;
        }
    }
    for(int i=M;i<=N;i++){
        if(A[i]!=0){
            cout<<A[i]<<"\n";
        }
    }



	return 0;
}






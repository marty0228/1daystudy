#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int N;
    cin>>N;
    vector<int> A(N);

    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    sort(A.begin(),A.end());

    int sum=0;
    int Asum=0;
    for(int i=0;i<N;i++){
        Asum+=A[i];
        sum+=Asum;
    }
    cout<<sum;






	return 0;
}






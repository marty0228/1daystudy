#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        int result=a*b/gcd(a,b);
        cout<<result<<"\n";
    }
    

	return 0;
}






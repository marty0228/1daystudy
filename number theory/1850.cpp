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
	
    long a,b;
    cin>>a>>b;
    long result=gcd(a,b);
    while(result>0){
        cout<<1;
        result--;
    }
    cout<<'\n';

	return 0;
}






#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(long n){
    string s=to_string(n);
    string reversed_s(s.rbegin(),s.rend());
    return s==reversed_s;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    int N;
    cin>>N;
    vector<bool> isprime(10000001,true);
    isprime[0]=isprime[1]=false;

    for(int i=2;i<sqrt(10000001);i++){
        if(isprime[i]){
            for(int j=i+i;j<10000001;j+=i){
                isprime[j]=false;
            }
        }
    }

    for(int i=N;i<10000001;i++){
        if(isprime[i]&&isPalindrome(i)){
            cout<<i<<"\n";
            break;
        }
    }

	return 0;
}






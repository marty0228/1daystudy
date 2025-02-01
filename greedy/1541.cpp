#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    string ex;
    bool check=false;
    string number="";
    int min_ans=0;

    cin>>ex;

    for(int i=0;i<=ex.size();i++){
        if(ex[i] == '-' || ex[i] == '+' || i==ex.size()){
            if(check==true){
                min_ans-=stoi(number);
                number="";
            }
            else if(check==false){
                min_ans+=stoi(number);
                number="";
            }
        }
        else{
            number+=ex[i];
        }
        if(ex[i]=='-'){
            check=true;
        }

    }
    cout<<min_ans;



	return 0;
}






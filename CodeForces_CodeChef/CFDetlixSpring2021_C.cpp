#include <bits/stdc++.h>
using namespace std;
 
void print(vector<int> v){
	cout<<v[0];
	for(int i =1;i<v.size();i++){
		cout<<"."<<v[i];
	}
	cout<<endl;;
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        vector<int> v;
    
        while(n--){
            int a;
            cin>>a;
            if(a==1){
                v.push_back(1);
                print(v);
            }
            else{
                while(v.back()!=a-1){
                    v.pop_back();
                }
                v.back()++;
                print(v);
    
            }
    
        }
    }
}
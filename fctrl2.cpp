#include <iostream>
#include <vector>

using namespace std;

vector<int> fctrl(int n){
	int temp = 0;
	int m=0;
	
	int x=0;
	vector<int> fact;
	fact.push_back(1);

	for ( int i = 1; i <= n; i++){
		for(int j=0;j<=m;j++){
			x = fact[j]*i+temp;
			fact[j]=x%10;
			temp = x/10;		
		}
		while(temp != 0){
			fact.push_back(temp%10);
			temp = temp/10;
			m++;
		}
	}
	return fact;
}

int main(){
	vector<int> v;
	int yo;
	cin>>yo;
	int t;
	for(int i=0;i<yo;i++){
		cin>>t;
		v.push_back(t);
	}
	vector<int> res;
	for(int i=0;i<yo;i++){
		cout<<"\n";
		res = fctrl(v[i]);
		for ( int j=res.size()-1;j>=0;j--){
			cout<<res[j];
		}
	}
	return 0;
}

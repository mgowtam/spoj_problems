#include <iostream>
#include <vector>

using namespace std;

int holes(string s){
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R'){
			count++;
		} else if ( s[i] == 'B' ) {
			count += 2;
		}
	}

	return count;
}

int main(){
	int yo;
	vector<string> v;
	cin>>yo;
	string t;
	for(int i=0; i<yo;i++){
		cin>>t;
		v.push_back(t);
	}

	for(int i=0;i<yo;i++){
		cout<<holes(v[i])<<endl;
	}
	return 0;

}

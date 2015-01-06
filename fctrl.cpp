#include <iostream>
#include <vector>

using namespace std;

int fctrl(int n){
	int count=0;
	int c=5;
	while(n/c!=0){
		count += n/c;
		c *= 5;
	}

	return count;
}

int main(){
	int yo;
	vector<int> v;
	cin>>yo;
	int t=0;
	for(int i=0; i<yo;i++){
		cin>>t;
		v.push_back(t);
	}

	for(int i=0;i<yo;i++){
		cout<<"\n"<<fctrl(v[i]);
	}
	return 0;

}

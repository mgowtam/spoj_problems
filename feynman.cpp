#include <iostream>
#include <vector>

using namespace std;

int feynman(int n){
	int res;
	res = n*(n+1)*(2*n+1);
	res = res/6;
	return res;
}

int main(){
	int yo;
	vector<int> xs;
	cin>>yo;

	while(yo!=0){
		xs.push_back(yo);
		cin>>yo;
	}

	for(int i=0;i<xs.size();i++){
		cout<<feynman(xs[i])<<endl;
	}
	return 0;

}

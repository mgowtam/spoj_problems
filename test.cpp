#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v;
	int n=0;
	int c = 0;
	cin>>c;
	while(c!=42){
		v.push_back(c);
		cin>>c;
	}

	for(int i=0;i<v.size();i++){
		cout<<"\n"<<v[i];
	}


	return 0;
}

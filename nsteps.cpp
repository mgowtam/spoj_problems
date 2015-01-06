#include <iostream>
#include <vector>

using namespace std;

int nsteps(int x,int y){
	int res;

	if(x==y){
		if(x%2==0){
			res = 2*x;
		} else {
			res = 2*x-1;
		}
	} else if (y==(x-2) ){
		if(x%2==0){
			res = 2*x-2;
		} else {
			res = 2*x-3;
		}
	} else {
		res = -1;
	}
	return res;
}

int main(){
	int yo;
	vector<int> xs;
	vector<int> ys;
	cin>>yo;
	int t=0;
	int x,y;
	for(int i=0; i<yo;i++){
		cin>>x;
		cin>>y;
		xs.push_back(x);
		ys.push_back(y);
	}

	for(int i=0;i<yo;i++){
		t = nsteps(xs[i],ys[i]);
		if(t==-1){
			cout<<"No Number"<<endl;
		} else {
			cout<<t<<endl;
		}
	}
	return 0;

}

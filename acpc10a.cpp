#include <iostream>
#include <vector>

using namespace std;

string apgptest(vector<int> v){
	if( v[1] == (v[2]+v[0])/2){
		return "AP";
	}

	return "GP";
}

int gpnextint(vector<int> v){
	int diff = v[1]/v[0];
	int next = v[0]*diff*diff*diff;	

	return next;
}

int apnextint(vector<int> v){
	int diff = v[1]-v[0];
	int next = v[0]+3*diff;	

	return next;
}

int main(){
	int m1,m2,m3;
	string code;
	vector<vector<int> > ms;
	vector<int> temp;
	cin>>m1>>m2>>m3;
	while( !(m1==0 && m2==0 && m3==0) ){
		temp.push_back(m1);
		temp.push_back(m2);
		temp.push_back(m3);
		ms.push_back(temp);
		temp.clear();
		cin>>m1>>m2>>m3;
	}

	for(int i=0;i<ms.size();i++){
		code = apgptest(ms[i]);
		if(code=="AP"){
			cout<<"AP "<<apnextint(ms[i])<<endl;			
		} else {
			cout<<"GP "<<gpnextint(ms[i])<<endl;
		}	
	}
	return 0;

}

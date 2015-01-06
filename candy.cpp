#include <iostream>
#include <vector>

using namespace std;

int candy(vector<int> candys){
	int count=0;
	for(int i=0;i<candys.size();i++){
		count += candys[i];
	}
	//cout<<count;
	if( count%candys.size() != 0){
		return -1;
	}
	int each = count/candys.size();
	int moves = 0;
	for(int i=0;i<candys.size();i++){
		if(candys[i]<each){
			moves += each-candys[i];
		}
	}
	return moves;
}

int main(){
	int yo,x;
	vector<int> temp;
	vector<vector<int> > v;
	cin>>yo;

	while(yo!=-1){
		for(int i=0; i<yo;i++){
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
		temp.clear();
		cin>>yo;
	}

	for(int i=0;i<v.size();i++){
		cout<<candy(v[i])<<endl;
	}
	return 0;

}

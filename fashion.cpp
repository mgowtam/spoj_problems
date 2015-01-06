#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> left,vector<int> right){
	vector<int> result;
	int left_first=0;
	int right_first=0;

	while(left.size() > 0 || right.size() > 0){
		if(left.size()>0 && right.size() > 0){
			if(left[left_first] <= right[right_first]){
				result.push_back(left[left_first]);
				left_first++;
			} else {
				result.push_back(right[right_first]);
				right_first++;			
			}			
		} else if ( left.size()>0){
			result.push_back(left[left_first]);
			left_first++;
		} else if(right.size()>0){
			result.push_back(right[right_first]);
			right_first++;
		}
	}

	return result;
}

vector<int> mergesort(vector<int> v){
	if ( v.size() <= 1) {
		return v;
	}
	vector<int> left,right,result;

	int middle = v.size()/2;
	for ( int x = 0; x <= middle; x++){
		left.push_back(v[x]);
	}
	/*for( int x = middle+1; x < v.size(); x++){
		right.push_back(v[x]);
	}*/

	//left = mergesort(left);
	//right = mergesort(right);
	//result = merge(left,right);
	return result;
}

int fashion(vector<int> men,vector<int> women){
	vector<int> final_men, final_women;
	cout<<"going into mergesort";

	int value=0;
	final_men = mergesort(men);
	/*final_women = mergesort(women);
	int value = 0;

	for(int i=0; i<final_men.size();i++){
		value += final_men[i]*final_women[i];
	} */
	
	return value;
}

int main(){
	int yo,man,woman;
	int total;
	vector< vector<int> > men;
	vector<vector<int> > women;
	vector<int> temp;

	cin>>yo;
	for(int i=0;i<yo;i++){
		cin>>total;
		for(int j=0;j<total;j++){
			cin>>man;
			temp.push_back(man);
		}
		men.push_back(temp);
		temp.clear();
		for(int j=0;j<total;j++){
			cin>>woman;
			temp.push_back(woman);
		}
		women.push_back(temp);
		temp.clear();
	}

	for(int i=0;i<yo;i++){
		cout<<fashion(men[i],women[i])<<endl;
	}
	return 0;

}

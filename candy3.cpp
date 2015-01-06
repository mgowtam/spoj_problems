#include <iostream>
#include <vector>

using namespace std;

string candy3(vector<long long int> candys){
	long long int count=0;
	long long int n = candys.size();
	for(long long int i=0;i<candys.size();i++){
		count = (count+candys[i])%n;
	}
	if(count%n==0){return "YES";}
	return "NO";
}

int main()
{
	int t,n;
	long long int x;
	vector<long long int> temp;
	vector<vector<long long int> > v;
	cin>>t;

	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
		temp.clear();
	}

	for(int i=0;i < t;i++){
		cout<<candy3(v[i])<<endl;
	}
	return 0;
}

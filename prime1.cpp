#include <iostream>
#include <vector>

using namespace std;

vector<int> prime(int m,int n){
	int temp = 0;
	int flag=0;
	int x=0;
	vector<int> primes;

	for ( int i = m; i <= n; i++){
		flag=1;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				flag=0;
				break;			
			}		
		}
		if(flag==1 && i!=1){
			primes.push_back(i);
		}
	}
	return primes;
}

int main(){
	vector<int> ms;
	vector<int> ns;
	int yo;
	int m,n;
	cin>>yo;
	int t;
	for(int i=0;i<yo;i++){
		cin>>m;
		cin>>n;
		ms.push_back(m);
		ns.push_back(n);
	}
	vector<int> res;
	for(int i=0;i<yo;i++){
		cout<<"\n";
		res = prime(ms[i],ns[i]);
		for ( int j=0;j<res.size();j++){
			cout<<res[j]<<endl;
		}
	}
	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int ae00(int n){
	int term=2;
	int i=1;
	int count=0;
	term = (n/i)-(i-1);
	while(term>0){
		count += term;
		i++;
		term = (n/i)-(i-1);
	}
	return count;
}

int main()
{
	int n;
	cin>>n;

	cout<<ae00(n)<<endl;
	return 0;
}

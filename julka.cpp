#include <iostream>
#include <vector>

using namespace std;

string julka(int columns,string code){
	int count=0;
	int i=0;
	int j=0;
	int len=code.length();
	string s;
	int rows = len/columns;

	for(int col=columns; col>0;col--){
		count = 0;
		i=columns-col;
		while(count<rows){
			s.push_back(code[i]);
			count++;
			if(count%2!=0){
				i=i+2*col-1;
			} else {
				i=i+2*(columns-col)+1;
			}
		}
	}

	return s;
}

int main(){
	int more;
	string total;
	vector<int> mores;
	vector<string> totals;
	cin>>col;

	for(int i=0;i<10;i++){
		cin>>total;
		totals.push_back(total);
		cin>>more;
		mores.push_back(more);
	}

	for(int i=0;i<10;i++){
		cout<<julka(totals[i],mores[i])<<endl;
	}
	return 0;

}

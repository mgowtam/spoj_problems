#include <iostream>
#include <vector>

using namespace std;

string toandfro(int columns,string code){
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
	int col;
	string code;
	vector<int> cols;
	vector<string> codes;
	cin>>col;

	while(col!=0){
		cols.push_back(col);
		cin>>code;
		codes.push_back(code);
		cin>>col;
	}

	for(int i=0;i<cols.size();i++){
		cout<<toandfro(cols[i],codes[i])<<endl;
	}
	return 0;

}

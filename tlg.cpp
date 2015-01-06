#include <iostream>
#include <vector>

using namespace std;

vector<int> tlg(vector<int> player1,vector<int> player2){
	int maxlead=0;
	int diff1,diff2;
	int playerid;
	vector<int> result;
	for(int i=0;i<player1.size();i++){
		diff1=player1[i]-player2[i];
		diff2=player2[i]-player1[i];
		if(diff1>0 && maxlead<diff1){
			maxlead=diff1;
			playerid = 1;
		} else if (diff2>0 && maxlead<diff2){
			maxlead=diff2;
			playerid=2;
		}
	}
	result.push_back(playerid);
	result.push_back(maxlead);

	return result;
}

int main(){
	int yo;
	vector<int> player1,player2;
	cin>>yo;
	int x,y;
	for(int i=0; i<yo;i++){
		cin>>x>>y;
		player1.push_back(x);
		player2.push_back(y);
	}

	//for(int i=0;i<yo;i++){
		vector<int> result = tlg(player1,player2);
		cout<<result[0]<<" "<<result[1]<<endl;
	//}
	return 0;

}

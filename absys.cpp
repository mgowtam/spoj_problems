#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
	//char* n1a[100],n2a[100],n3a[100];
	char n1[100],opr,n2[100],assgn,n3[100];
	int testcases;int n1i[100],n2i[100],n3i[100];
	cin>>testcases;

	for(int i=0; i<testcases; i++){
		cin>>n1>>opr>>n2>>assgn>>n3;
		if(strstr(n1,"machula")!=NULL){
			n2i[i] = atoi(n2);
			n3i[i] = atoi(n3);
			n1i[i] = n3i[i]-n2i[i]; 
		} /*else if (strstr(n2,"machula")!=NULL){
			n1i[i] = atoi(n1);
			n3i[i] = atoi(n3);
			n2i[i] = n3i[i]-n1i[i];
		} else if(strstr(n3,"machula")!=NULL){
			n2i[i] = atoi(n2);
			n1i[i] = atoi(n1);
			n3i[i] = n1i[i]+n2i[i];
		} else {
			n1[i] = atoi(n1);
			n2[i] = atoi(n2);
			n3[i] = atoi(n3);
		}
*/	}

	for(int i=0; i<testcases; i++){
		cout<<n1i[i]<<" + "<<n2i[i]<<" = "<<n3i[i]<<"\n";
		cout<<"\n";
	}
	
	return 0;
}

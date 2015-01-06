#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct node{
	char data;
	node* next;
};

struct node* createStack(){
	return NULL;
}

void push(struct node** head,char data){
	struct node* temp = new node();
	temp->data = data;
	temp->next = *head;
	*head = temp;
}

char pop(struct node** head){
	char data;
	struct node* temp;
	temp = *head;
	*head = (*head)->next;
	data = temp->data;
	delete temp;
	return data;
}

bool isStackEmpty(struct node* head){
	return head==NULL;
}

char top(struct node* head){
	return head->data;
}

int priority(char i){
	int pri;
	if(i == '+'){
		pri = 0;
	} else if(i == '-'){
		pri = 1;
	} else if(i == '*'){
		pri = 2;
	} else if(i == '/'){
		pri = 3;
	} else {
		pri = 4;
	}
	return pri;
}

string onp(string n){
	int i=0;
	//cout<<"in onp";
	struct node* head = createStack();
	string final;
	while(n[i] != '\0'){
		//cout<<"in while";
		//final.push_back('i');
		if(n[i]==')'){
			int j=0;
			while(!isStackEmpty(head) && top(head) != '('){
				final.push_back(pop(&head));
			}
			if(!isStackEmpty(head) && top(head) == '('){
				pop(&head);
			}
		} else if(n[i]!= '+' && n[i]!='-' && n[i]!='*' && n[i]!='/' && n[i]!='^' && n[i]!='('){
			final.push_back(n[i]);
		} else {
			if(n[i] == '('){
				push(&head,n[i]);
			} else {
				while(!isStackEmpty(head) && top(head)!='(' && priority(n[i]) < priority(top(head)) ){
					final.push_back(pop(&head));
				}
				push(&head,n[i]);
			}
			
		}
		i++;
	}

	return final;
}

int main(){
	int yo;
	vector<string> v;
	cin>>yo;
	string s;
	for(int i=0; i<yo;i++){
		cin>>s;
		v.push_back(s);
	}

	for(int i=0;i<yo;i++){
		//cout<<v[i];
		cout<<onp(v[i])<<endl;
	}
	return 0;

}

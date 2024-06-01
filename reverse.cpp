#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int d){
			this->data=d;
			this->next=NULL;
		}
};
void insert(node* &head,int d){
	node* temp=new node(d);
	temp->next=head;
	head=temp;
	
}
node* reverse(node* & head,node* &curr,node* &prev){
	node* forward=NULL;
	while(curr != NULL){
	forward=curr->next;
	curr->next=prev;
	prev=curr;
	curr=forward;	
	}
	return prev;
}
void print(node* &head){
	node* temp=head;
	while(temp != NULL){
	cout<<temp->data<<" ";
	temp=temp->next;	
	}
	cout<<endl;
}
int main(){
	node* node1=new node(3);
	node* head=node1;
	insert(head,5);
	insert(head,7);
	insert(head,8);
	print(head);
	node* curr=head;;
	node* prev=NULL;
	reverse(head,curr,prev);
	print(head);
}

#include<iostream>
using namespace std;
struct Node{
	int Data;
	Node *Next;
};
typedef Node* List; 
void insert_first(int x, List &F){
	List p = new(Node);
	p->Data = x;
	p->Next = F;
	F=p;
}
void delete_first(List &F){
	List p = F;
	F= F-> Next;
	delete(p);
}
void print_list(List F){
	List p = F;
	while(p){
		cout<< p -> Data<<" ";
		p = p-> Next;
	}
}
void insert_last(int x, List &F){
	List p = new(Node);
	p->Data = x;
	p->Next = NULL;
	if(F==NULL){
		F=p;
	}else{
		List Q = F;
		while(Q->Next){
			Q=Q->Next;
		}
		Q ->Next = p;
	}
	}	
int main(){
	List F = NULL;
	int x;
	while(true){
		cout<<"Nhap x: ";cin>>x;
		if(x==0){
			break;
		}else if(x%2==0){
			insert_first(x,F);
		}else{
			insert_last(x,F);
		}
	}
	print_list(F);
}

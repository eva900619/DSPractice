#include <iostream>
 
using namespace std;

struct Node{
  int data;
  Node *children;
  Node *parent;
};

Node *root1,*root2;

Node root() {
	cout<<"root:"<<root1->data<<endl;
	return *root1;
}

void addChild(Node *p, Node *n) {
	p->children = n;
	cout<<"在父節點"<<p->data<<"之後新增一個子節點:"<<n->data<<endl;
}

void cut(Node *t) {
	root2 = t;
	cout<<"剪下一個子樹:"<<t->data<<endl;
}

void paste(Node *n, Node *t) {
	n->children = root2;
	cout<<"在節點"<<n->data<<"之後貼上一個子樹:"<<t->data<<endl;
}

int main() {
	Node *node1, *node2, *node3, *node4, *node5, *node6; 
	node1=new Node; 
	node1->data=1; 
	node2=new Node; 
	node2->data=2; 
	node3=new Node; 
	node3->data=3; 
	node4=new Node; 
	node4->data=4;
	node5=new Node; 
	node5->data=5; 
	node6=new Node; 
	node6->data=6;
	
	root1=node1; 
	node2->parent=node1;  
	node1->children=node2; 
	node3->parent=node2; 
	node5->parent=node2;
	node2->children=node3; 
	node2->children=node5; 
	node4->parent=node3; 
	node6->parent=node3;
	node3->children=node4; 
	node3->children=node6;
	node4->children=NULL; 
	node5->children=NULL;
	node6->children=NULL;
	
	root();
	addChild(node2,node3);
	cut(node3);
	paste(node5,node3);
	
}

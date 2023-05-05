#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	node *pre;
};
struct douList{
	node *head;
	node *tail;
};
douList *createList(int x){
	douList *l=new douList;
	l->head=new node;
	l->head->data=x;
	l->head->next=NULL;
	l->head->pre=NULL;
	l->tail=l->head;
	return l;
}
douList *addHead(douList *l,int x){
	node *temp=new node;
	temp->data=x;
	temp->next=l->head;
	temp->pre=NULL;
	l->head->pre=temp;
	l->head=temp;
	return l;
}

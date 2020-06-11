#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
	struct node *next;
};

// 该函数的功能是建立一条具有10个结点的单方向链，返回指向链首的指针；
struct node *create(int n){
	struct node *p,*q,*head;
	int a[10];
	head=NULL;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		p=(struct node*)malloc(sizeof(*p));
		p->data=a[i];
		p->next=NULL;
		if(head==NULL) 
			head=p;
		else
			q->next=p;
		q=p;
	}
	return (head);
}

//该函数的功能是打印head链中每一个结点数据域的数据
void display(struct node *head){
	struct node *t;
	for(t=head;t;t=t->next){
		printf("%d ",t->data);
	} 
/*	t=head;
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}*/
	return;
}

//该函数的功能是释放head链中的每一个的结点空间
void myfree(struct node *head){
	struct node *p;
	p=NULL;
	while(head->next!=NULL){
		p=head;
		head=head->next;
		free(p);
	}
	free(head);
	return;
}

int main(){
	struct node *head;
	head=create(10);
	display(head);
	myfree(head);
}


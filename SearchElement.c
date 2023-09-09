#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL ;//global variable

void create(int A[],int n ){
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
struct Node * search(struct Node *p, int key){
    while(p!=NULL){
        if(p->data==key)
          return (p);
        p=p->next;
    }
}
//recursively call search function 
struct Node * Rsearch (struct Node *p,int key){
    if(p==NULL)
      return NULL;
    if(key==p->data)
      return (p);
    else
    return Rsearch(p->next,key);
}

int main(){
    int A[]={3,4,5,6,7,8,5,3,2,1,3};
     create(A,11);
     struct Node *temp1;
    struct Node *temp2;
     printf("Linked list is created\n");
     temp1=search(first,5);
     temp2=Rsearch(first,4);
      printf("search elememt is %d\n",temp1->data);
       printf("search elememt is %d",temp2->data);

     return 0;
}

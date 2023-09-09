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
int count(struct Node *p){
    int c=0;
   while(p!=NULL){
   c++;
   p=p->next;
   }
   printf("the total numbers of elements in linked list is %d",c);
}
//recursively count
int Rcount(struct Node *p){
    if(p==NULL)
    return 0;
    else
     return Rcount(p->next)+1;
}
int main(){
    int A[]={3,4,5,6,7,8,5,3,2,1,3};
     create(A,11);
     printf("Linked list is created\n");
      count(first);
      
      printf("\tRecursively function count %d\n",Rcount(first));
      return 0;
}

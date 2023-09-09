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

int sum(struct Node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int main(){
    int A[]={3,4,5,6,7,8,5,3,2,1,3};
     create(A,11);
     printf("Linked list is created\n");
    printf("sum of all elements of linked list is  %d",sum(first));
     return 0;
}

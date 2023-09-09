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
int Max(struct Node *p)
{
 long int max=__INT64_MIN__;
while(p)
{
if(p->data>max)
max=p->data;
p=p->next;
}
return max;
}
int RMax(struct Node *p){
    int x=0;
    if(p==0)
    return INT64_MIN;
    else{
        x=RMax(p->next);
        if(x>p->data)
          return x;
        else
          return p->data;
    }
}

int main(){
    int A[]={3,4,5,6,7,8,5,3,2,1,3};
     create(A,11);
     printf("Linked list is created\n");
     printf("the maximum element from linked list is  %d ",Max(first));
     return 0;
}

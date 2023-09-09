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
//we can check by this code that linked list is created or not .....
// void display(struct Node *p){
//     printf("the elemetns of linked list is \n");
//     while(p!=NULL){
//      printf("%d\n",p->data);
//      p=p->next;
//     }
    
// }

int main(){
    int A[]={3,4,5,6,7,8,5,3,2,1,3};
     create(A,11);
     printf("Linked list is created\n");
    //  display(first);
     return 0;
}

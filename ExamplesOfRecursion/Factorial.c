#include<stdio.h>

int fact(int n){  //recursiona
    if(n==0)
    return 1;
    else 
    return fact(n-1)*n;
}

int Ifact(int n){  //iterative
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }return f;
}
int main(){
int a=1;
printf("%d",fact(a));
return 0;
}
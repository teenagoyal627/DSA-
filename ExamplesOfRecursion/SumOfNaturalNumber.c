#include<stdio.h>
int sum(int n){
    if(n==0)
    return 0;
    else
    return sum(n-1)+n;
     }

     int Isum(int n){
        int i , s=0;
        for(i=1;i<=n;i++){
            s=s+i;
        }            return s;

     }

int main(){
   int a=5;
   printf("%d",Isum(a));
return 0;
}
#include<stdio.h>
#include<math.h>
int power(int m,int n){   //recursion
    if(n==0)
    return 1;
    else
    return power(m,n-1)*m;
}
 int power1(int m,int n){
    if(n==0)
    return 1;
    if(n%2==0)
    return power1(m*m,n/2);
    else
    return m*power1(m*m,(n-1)/2);

 }

int main(){
   int a=9,b=2;
   printf("%d",power1(a,b));
return 0;
}
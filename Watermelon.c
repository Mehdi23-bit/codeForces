#include<stdio.h>
#include<stdbool.h>


char*
watermelon(int n){
    if(n%2==0 && n>2){
        return "YES";
    }
    
    return "NO";
}

int main(){
int a;
scanf("%d",&a);
printf("%s",watermelon(a));
return 0;
}
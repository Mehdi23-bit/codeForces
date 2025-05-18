#include<stdio.h>
#include<stdbool.h>

bool
isEven(int n){
    if(n%2==0){
        return true;
    }
    return false;
} 
bool
watermelon(int n){
    int i=1;
    while(i<n){
        if(isEven(i) && isEven(n-i))
        return true;
        i++;

    }
    return false;
}

int main(){
int a;
scanf("%d",&a);
printf("%d",watermelon(a));
return 0;
}
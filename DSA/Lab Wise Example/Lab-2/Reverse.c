#include<stdio.h>

int main(){
    int n ;
    printf("Enter a number\n");
    scanf("%d",&n);
    int num = 0;
    while (n!=0)
    {
        num = num * 10 + n % 10;
        n = n /10;
    }
    printf("Answer is = %d",num);
    return 0;
}
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    do{
        
        sum=sum+i;
        i++;
    
        

    }
    while(i<=n);
    printf("%d",sum);

    
}
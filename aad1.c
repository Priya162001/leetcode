#include<stdio.h>
void main(){
	int x;
	int rem;
	int sum=0;
	printf("enter a number\n");
	scanf("%d",&x);
	while(x!=0){
		rem=x%10;
		x=x/10;
  		  sum=sum+rem;
	}
	printf("sum=%d",sum);
}

#include<stdio.h>
int main(){
	int i=1,n,a=0,b=0,c=1,next;
	printf("Enter the Number of Term : ");
	scanf("%d",&n);
	printf("Tribonacci Sequence : ");
	while(i<+n){
		printf(" %d ",a);
		next=a+b+c;
		a=b;
		b=c;
		c=next;
		i++;
	}
	return 0;
}

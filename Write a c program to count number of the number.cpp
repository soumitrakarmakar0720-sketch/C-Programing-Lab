#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a Number : ");
	scanf("%d",&a);
	while(a!=0){
		b=a%10;
		a=a/10;
		c=c+1;
	}
	printf("Sum of the Numbers : %d",c);
	return 0;
}

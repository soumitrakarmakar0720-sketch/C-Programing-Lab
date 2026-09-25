//dispaly the odd numbers from 1-n

#include <stdio.h>
int main(){
	int num,n;
	printf("Enter a number to find the odd numbers : ");
	scanf("%d",&n);
	num=1;
	while(num<=n){
		printf(" %d ",num);
		num=num+2;
	}
	return 0;
}

//write a c program which accepts an integer number and print a multiplication of the digits

#include <stdio.h>
int main(){
		int num,n,result;
	printf("Enter a Number to Get the Multipliction from 1 : ");
	scanf("%d",&n);
	result=1;
	num=1;
	while(num<=n){
		result=result*num;
		num=num+1;
	}
	printf("The Result is : %d",result);
	return 0;
}

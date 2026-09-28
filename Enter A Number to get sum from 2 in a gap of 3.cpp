#include <stdio.h>
int main(){
	int input,result,extra;
	printf("Enter A Number to get sum from 2 in a gap of 3 :  \n");
	scanf("%d", &input);
	if (input>2){
		extra=2;
		while (extra<=input){
			result=result+extra;
			extra=extra+3;
		}
		printf("The Result is %d .",result);
	}
	else {
		printf("Wrong Input !");
	}
	return 0;
}

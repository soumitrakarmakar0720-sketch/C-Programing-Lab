#include <stdio.h>
int main(){
	int input,result=0,extra=1,extra1=0;
	printf("Enter A Number : \n");
	scanf("%d", &input);
	if (input>0){
		while(extra<=input){
			result=result+extra;
			extra1++;
			extra=extra+extra1;
		}
		printf("The Result is %d",result);
	}
	else {
		printf("Wrong Input.");
	}
	return 0;
}

#include <stdio.h>
int main(){
	int input,b=0,c=1,d=1,result;
	printf("Enter A Number : \n");
	scanf("%d", &input);
	if (input>1){
		while (d<=input){
			printf(" %d ",b);
			result=b+c;
			b=c;
			c=result;
			d++;
			
		}
		return 0;
	}
}


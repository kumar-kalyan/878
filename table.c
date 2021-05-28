#include <stdio.h>
int main(){
	int a,b,i,tem=1;
	printf("Please Enter a number and upto number");
	scanf("%d %d", &a,&b);
	printf("The Table of %d is \n" ,a);
	for(i=1;i<=b;i++){
		tem=a*i;
		printf("%d x %d  = %d\n",a ,i,tem);
	} 
	return 0;
} 

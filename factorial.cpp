//To Find facorial of a number
#include <stdio.h>
int main(){
	int f=1 ,i,n;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++) { 
		f=f*i;
	}
	printf("The factorial of %d is %d" ,n,f);
	return 0;
}

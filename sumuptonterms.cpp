//wap to find the sum of a nuber upto n terms  
#include <stdio.h>
int main () {
int n,sum=0,i;
printf("Enter a number\n");
scanf("%d",&n);
for (i=1;i<=n;i++){
	sum+=i;
}
printf("The sum upto n terms of %d is %d",n,sum);
return 0 ;
}

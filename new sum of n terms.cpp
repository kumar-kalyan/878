/*Sum of n terms using for loop*/
#include <stdio.h>
int main (){
int n,i, sum=0;
printf("Enter the nth term");
scanf("%d",&n);	
for(i=1;i<=n;i++){
	sum+=i;
	}
printf("%d",sum);	
return 0;}

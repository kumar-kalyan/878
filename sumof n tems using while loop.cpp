/*Sum of n terms using while loop*/
#include <stdio.h>
int main (){
int n,i=1, sum=0;
printf("Enter the nth term");
scanf("%d",&n);	
while(i<=n){
	sum +=i;
	i++;
}
printf("%d",sum);	
return 0;}

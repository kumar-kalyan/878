
#include <stdio.h>
int main (){
int n,i=1, sum=0;
printf("Enter the nth term");
scanf("%d",&n);	
do{
	sum+=i;
	i++;
}
while(i<=n);
printf("%d",sum);
	
return 0;}

//wap to check a number is prime or not
#include <stdio.h>
int main () {
int n,i,r;
bool temp = false;
printf("Enter a number");
scanf("%d",&n);
if(n==2) {
	printf("prime");
} 
else if (n==1) {
	printf("not prime");
}
else{
for(i=2;i<n;i++)
{
	if(n%i==0){
		temp = true;

	}
break;
}

if(temp == true) {
	printf("not prime");
}
else {
	printf("prime");
} 

}

return 0 ;
}

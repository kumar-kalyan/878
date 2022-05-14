//wap to find a given lear is leap year or not
#include <stdio.h>
int main () {
int n ;
printf("\nEnter a year : ");
scanf("%d",&n);
  if(n%4==0 && n%400==0 || n%100!=0){
	printf("\n%d is a leap year",n);
     }
  else {
        printf("\n%d is not a leap year",n);
     }
  return 0 ;
}

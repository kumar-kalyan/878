/*Write a C program to calculate 1+2 2 /2 factorial + 3 3 / 3 factorial+4 4 /4 factorial ……. N n / n
factorial.*/
#include <stdio.h>
#include <math.h>
//method for getting the factoril of a number
fact(int n){
	int f=1 ,i=1;
do{
	f*=i;
	i++;
}
while(i<=n);
return f;	
}
int main(){
	int n,r,p,i=1,res=0;
	printf("Enter a number");
	scanf("%d",&n);
	
while(i<=n){
r=fact(i);//calculating the factorial and sroting in r
p=pow(i,i);	//calculating the power and storing in p
	res+=p/r;
	i++;
}
	printf("The out result is %d",res);
	return 0;
}	

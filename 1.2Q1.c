/*
	Q.1
	*/

#include<stdio.h>

array(){
int a,i,o=0;
printf("Enter array size :- ");
scanf("%d",&a);


int A[a];
printf("\n");	
printf("Enter array elaments :- \n");


for(i=0;i<a;i++){
	printf("A[%d] = ",i);
	scanf("%d",&A[i]);
	o =o+A[i];
	}
printf("\n");
printf("Sum of this array is:%d",o);
}

void main()
{
     array();}	

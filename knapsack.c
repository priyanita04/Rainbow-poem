#include<stdio.h>
int knap(int[],int[],int,int);
int max(int a, int b){
	return a>b?a:b;
}
int knap(int weight[], int value[],int C, int n)
{
	
}
void main()
{
	int weight[]={10,20,50},value[]={20,50,20},C=60;
	printf("%d",knap(weight,value,C,3));
}

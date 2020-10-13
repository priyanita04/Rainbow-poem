#include<stdio.h>
int knap(int[],int[],int,int);
int max(int a, int b){
	return a>b?a:b;
}
int knap(int weight[], int value[],int C, int n)
{
if(n==0||C<=0)
		return 0;
	else{
		if(weight[n-1]<=C)
			return max(value[n-1]+knap(weight,value,C-weight[n-1],n-1),knap(weight,value,C,n-1));
		else return knap(weight,value,C,n-1);
	}		
}
void main()
{
	int weight[]={10,20,50},value[]={20,50,20},C=60;
	printf("%d",knap(weight,value,C,3));
}

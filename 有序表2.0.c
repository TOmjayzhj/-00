#include<stdio.h>
#define MAXN 100
#include"select.h"
//#include"input-printf.h"
//#include"select.c"
//#include"input-printf.c"
//void select(int a[],int option,int value);
//void intput_array(int a[]);
//void print_array(int a[]);
//void insert(int a[],int value);
//void deremove(int a[],int value);
//void query(int a[],int value);

int main(void)
{
	int option,value,a[MAXN];
	
	intput_array(a);
	printf("[1]Insert\n");
	printf("[2]Remove\n");
	printf("[3]query\n");
	printf("[Other option] End\n");
	while(1){
		printf("Input option:");
		scanf("%d",&option);
		if(option<1||option>3){
			break;
		} 
		printf("Input an element:");
	    scanf("%d",&value);
	    select(a,option,value);
	    printf("\n");
	}
	printf("Thanks.");
	return 0;
 }
 


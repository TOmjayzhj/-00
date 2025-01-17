#include<stdio.h>
#define MAXN 100
int Count=0;
void select(int a[],int option,int value);
void intput_array(int a[]);
void print_array(int a[]);
void insert(int a[],int value);
void deremove(int a[],int value);
void query(int a[],int value);


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
void select(int a[],int option,int value)
 {
 	switch(option){
 		case 1:insert(a,value);break;
 		case 2:deremove(a,value);break;
 		case 3:query(a,value);break;
	 }
	 
 }
 void intput_array(int a[])
 {  
    int i;
 	printf("Input the number of array elements:");
 	scanf("%d",&Count);
 	printf("Input an ordered array elements:");
 	for(i=0;i<Count;i++){
 		scanf("%d",&a[i]);
	 }
 }
 void print_array(int a[])
 {
 	int i;
 	printf("The ordered array a is:");
 	for(i=0;i<Count;i++){
 		if(i==0){
 			printf("%d ",a[i]);
		 }else{
		 	printf("%d ",a[i]);
		 }
	 }
 }
 void insert(int a[],int value)
{
	int i,j;
	for(i=0;i<Count;i++){
		if(value<a[i]){
			break;
		}
	}
	for(j=Count-1;j>=i;j--){
		a[j+1]=a[j];
	}
	a[i]=value;
	Count++;
	print_array(a);
}
void deremove(int a[],int value)
{
	int i,index=1;
	for(i=0;i<Count;i++){
		if(value==a[i]){
			index=i;
			break;
		}
	}
	if(index==-1){
		printf("Failed to find the data,deletion failed.");
	}else{
		for(i=index;i<Count-1;i++){
			a[i]=a[i+1];
		}
		Count--;
		print_array(a);
	}
}
void query(int a[],int value)
{
	int mid,left=0,right=Count-1;
	while(left<=right){
		mid=(left+right)/2;
		if(value==a[mid]){
			printf("The index is:%d",mid);
			return;
		}else if(value<a[mid]){
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	printf("This element does not exit.");
}

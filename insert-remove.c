 extern int Count;
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

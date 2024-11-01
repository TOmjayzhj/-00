extern int Count;
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

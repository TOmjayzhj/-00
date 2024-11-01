extern int Count;
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

extern int Count;
void select(int a[],int option,int value)
 {
 	switch(option){
 		case 1:insert(a,value);break;
 		case 2:deremove(a,value);break;
 		case 3:query(a,value);break;
	 }
	 
 }

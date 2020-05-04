


int selectDataNo(Product *p, int count){
    int no=0;
    listScore(p,count);
    printf("번호는? ");
    scanf("%d",&no);
    return no;
}

void eventPoduct(Product *p,int count){

	for (int i=0;i<count;i++){
		if(p[i].event==1){
			printf("%2d",i+1);
			readProduct(p[i]);		

		}
		else continue;
	}
}

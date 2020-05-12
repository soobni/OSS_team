#include "manager.h"

int main(void){
    
    Product slist[100];
    int curcount=0;
    int count = 0, menu;
    int ccount =0; // color count    
    count = loadData(slist);
    curcount=count; 
    ccount = loadColor(slist);

    while (1){
        menu = selectMenu();
        getchar();
        if(menu == 0) break;
        if(menu == 1 || menu ==3 || menu == 4){	
		    if (count==0){ 
                printf(" 데이터가 없습니다!\n");
			    continue;
			}
		}

        if(menu == 1){
		if(count==0){printf("데이터가 없습니다.\n");continue;}
		else
		 listProduct(slist,curcount);
} 
        else if (menu == 2) {
		if(count==0){printf("데이터가 없습니다.\n");continue;}
		else
        	 count+=createProduct(&slist[curcount++],ccount); 
        }
        else if (menu == 3) {
           	if(count==0){printf("데이터가 없습니다.\n");continue;}
		else{
		int no=selectDataNo(slist, curcount);
            	if(no==0){
                printf("=>취소됨!");
                continue;}
            }
	    getchar();
            updateProduct(&slist[no-1],ccount);
        }
        else if (menu == 4) {
		if(count==0){printf("데이터가 없습니다.\n");continue;}
		else{
            int no=selectDataNo(slist, curcount);
            if(no==0){
                printf("=>취소됨!");
                continue;
            }
            int deleteok;
            printf("정말로 삭제하시겠습니까?(삭제:1)");
            scanf("%d",&deleteok);
            if(deleteok == 1){
                if(deleteProduct(&slist[no-1])) count --;       
           	 } 
        }}
	    else if (menu == 5){
		    if (count==0) printf("데이터가 없습니다!\n");
		    else saveData(slist,curcount);
	    }
	}

	printf("\n종료됨!\n");
   	return 0;
}

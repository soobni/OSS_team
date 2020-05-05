#include "manager.h"

int selectMenu(){
	int menu;
	printf("\n***What do you want? ***\n"); 
	printf("1. 조회\n"); 
	printf("2. 추가\n"); 
	printf("3. 수정\n"); 
	printf("4. 삭제\n"); 
	printf("5. 파일저장\n"); 
	printf("6. 이름검색\n"); 
	printf("0. 종료\n\n"); 
	printf("=> 원하는 메뉴는? "); 
	scanf("%d", &menu); 
	return menu;
}

int selectDataNo(Product *p, int count){
    int no=0;
    listScore(p,count);
    printf("번호는? ");
    scanf("%d",&no);
    return no;
}

void eventProduct(Product *p,int count){

	for (int i=0;i<count;i++){
		if(p[i].event==1){
			printf("%2d",i+1);
			readProduct(p[i]);		

		}
		else continue;
	}
}



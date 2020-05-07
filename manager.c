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

void listProduct(Product *p,int count){
	printf("\nNo Name Weight Price point PersonalColor ProductColor eventO/X\n"); 
	printf("=================================\n"); 
	//제품이름 제품무게 제품가격 제품별점 personalcolor 제품색상 이벤트유무
	printf("%s %d %d %d %d %d %d\n", p.name, p.weight, p.price, p.star, p.pcolor, p.color, p.event);
	for(int i = 0; i < count; i++){ 
		if(p[i].weight == -1) continue;
		printf("%2d ", i+1); 
		readProduct(p[i]); 
	}
	 printf("\n"); 
}
	

int selectDataNo(Product *p, int count){
    int no=0;
    listProduct(p,count);
    printf("번호는? ");
    scanf("%d",&no);
    return no;
}

void saveData(Product *p, int count){
	FILE *fp; 
	fp = fopen("product.txt", "wt"); 
	
	for(int i = 0; i < count; i++){ 
		if(p[i].weight == -1) continue; 
		fprintf(fp, "%d %d %d %d %d %d %s\n", p.weight, p.price, p.star, p.pcolor, p.color, p.event, p.name); 
		}fclose(fp); 
	printf("저장됨!\n"); 
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

int loadData(Product *p){
	int n=0;
   	FILE * fp;
   	fp = fopen("product.txt","rt");
    	if(fp == NULL){
        printf("=> 파일 없음\n");
        return 0;
    }
    for(; ; n++){
        fscanf(fp,"%s %d %d %d %d %d %d\n", p.name, &p.weight, &p.price, &p.star, &p.pcolor, &p.color, &p.event);
        if(feof(fp))break;
    }
    fclose(fp);
    printf("=> 로딩 성공!\n");
    return n;

}

int selectColor(Product *p,int colorNo){
	int color;
	for(int i=0;i<colorNo;i++){
	printf("%2d %s",i+1,p[i].fcolor);
	}	
	printf("번호는? ");
    	scanf("%d",&color);
	return color-1;
}

int loadColor(Product*p){
	int n=0;
	FILE * fp ;
	fp = fopen ("color.txt","rt");
	if(fp ==NULL){
	printf("=> no Data\n");
	return 0;
	}
	for(; ;n++){
	fscanf(fp,"%s\n", p[n].fcolor); 
	if(feof(fp))break;

}
	fclose(fp);
	printf("=> 색 로딩 성공!\n");
	return n;
}

void eventPoduct(Product *p,int count){

	for(int i = 0; i < count; i++){
                if(p[i].weight == -1) continue;
		if(p[i].event ==1){
                	printf("%2d ", i+1);
                	readProduct(p[i]);
		}
        }
         printf("\n");

}


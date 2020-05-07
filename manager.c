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
	printf("\nNo Name Weight Price point PersonalColor ProductColor event1/2\n"); 
	printf("=================================\n"); 
	//제품이름 제품무게 제품가격 제품별점 personalcolor 제품색상 이벤트유무
	printf("%s %d %d %d %d %s %d\n", p.name, p.weight, p.price, p.star, p.pcolor, p.color, p.event);
	for(int i = 0; i < count; i++){ 
		if(p[i].weight == -1) continue;
		printf("%2d ", i+1); 
		readProduct(p[i]); 
	}
	 printf("\n"); 
}
	

int selectDataNo(Product *p, int count){
    int no=0;
    listScord(p,count);
    printf("번호는? ");
    scanf("%d",&no);
    return no;
}

void saveData(Product *p, int count){
	FILE *fp; 
	fp = fopen("product.txt", "wt"); 
	
	for(int i = 0; i < count; i++){ 
		if(p[i].weight == -1) continue; 
		fprintf(fp, "%d %d %d %d %d %s %s\n", p.weight, p.price, p.star, p.pcolor, p.event, p.color, p.name); 
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
        fscanf(fp,"%d %d %d %d %d %s %s\n",&p.weight, &p.price, &p.star, &p.pcolor, &p.event, p.color, p.name);
        if(feof(fp))break;
    }
    fclose(fp);
    printf("=> 로딩 성공!\n");
    return n;

}

void searchName(Product *p, int count){
	int scount = 0; 
	char search[20];
	
	printf("검색할 이름은?\n"); 
	scanf("%s", search); 
	printf("\nNo Name Weight Price point PersonalColor ProductColor eventO/X\n"); 
	printf("=================================\n"); 
	
	for(int i = 0; i < count; i++){ 
		if(p[i].weight == -1) continue; 
		if(strstr(p[i].name, search)){ 
			printf("%2d ", i+1); 
			readProduct(p[i]); scount++; 
		} 
	} 
	if(scount == 0) printf("=> 검색된 데이터 없음!");
	 printf("\n");
}
	
int selectColor(Product *p,int colorNo){
	int color;
	for(int i=0;i<colorNo;i++){
	printf("%2d %s",i+1,p[i]->fcolor);
	}	
	printf("번호는? ");
    	scanf("%d",&color);
	return color-1;
}

int searchColor(Product *p, int count){
	int scount = 0;
	char search[20];
	
	printf("검색할 컬러는?"\n);
	scanf("%s", search);
	printf("\nNo Name Weight Price point PersonalColor ProductColor eventO/X\n"); 
	printf("=================================\n"); 
		for(int i = 0; i < count; i++){ 
		if(p[i].weight == -1) continue; 
		if(strstr(p[i].color, search)){ 
			printf("%2d ", i+1); 
			readProduct(p[i]); scount++;
		}
		} 
		if(scount == 0) printf("=> 검색된 데이터 없음!"); 
		printf("\n");
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
	fscanf(fp,"%s\n", p[i].fcolor); 
	if(feof(fp))break;

}
	fclose(fp);
	printf("=> 색 로딩 성공!\n");
	return n;
}

void PersonalColor(Product *p){
	
}

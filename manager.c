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
	printf("7. 이벤트 제품 조회 \n");
	printf("8. 색상 별 제품 조회 \n");
	printf("0. 종료\n\n"); 
	printf("=> 원하는 메뉴는? "); 
	scanf("%d", &menu); 
	return menu;
}

void listProduct(Product *p,int count){
	printf("\nNo Name     Weight Price Point PersonalColor ProductColor event1/2\n"); 
	printf("=================================\n"); 
	//제품이름 제품무게 제품가격 제품별점 personalcolor 제품색상 이벤트유무
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
		fprintf(fp, "%d %d %d %d %d %d %s\n", p[i].weight, p[i].price, p[i].star, p[i].pcolor, p[i].color, p[i].event, p[i].name); 
		}fclose(fp); 
	printf("저장됨!\n"); 
}

void eventProduct(Product *p,int count){

	for (int i=0;i<count;i++){
		if(p[i].event==1){
			printf("%2d ",i+1);
			readProduct(p[i]);		

		}
		else continue;
	}
}

void searchColor(Product *p,int count){
	for (int i = 0; i < count; i++){
		if(p[i].color == 1) {
			printf("%2d ivory:\n ", i+1);
			readProduct(p[i]);
		} 
		else if (p[i].color == 2) {
			printf("%2d coralPink:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 3) {
			printf("%2d warmPastelPink:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 4) {
			printf("%2d peach:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 5) {
			printf("%2d pastelAqua:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 6) {
			printf("%2d lavender:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 7) {
			printf("%2d burgundy:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 8) {
			printf("%2d skyblue:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 9) {
			printf("%2d orange:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 10) {
			printf("%2d gold:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 11) {
			printf("%2d warmBeige:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 12) {
			printf("%2d limeGreen:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 13) {
			printf("%2d navyBlue:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 14) {
			printf("%2d lemonYellow:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 15) {
			printf("%2d icyViolet:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 16) {
			printf("%2d black:\n ", i+1);
			readProduct(p[i]);
		}
		else if (p[i].color == 17) {
			printf("%2d charcoalGray:\n ", i+1);
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
	else{
 	   while(!feof(fp)){
       		 fscanf(fp,"%d %d %d %d %d %d %s\n",&p[n].weight, &p[n].price, &p[n].star, &p[n].pcolor, &p[n].event, &p[n].color, p[n].name);
	n++;
    }

    
    printf("=> 로딩 성공!\n");
    return n;
}
fclose(fp);
}

void searchName(Product *p, int count){
	int scount = 0; 
	char search[20];
	
	printf("검색할 이름은?\n"); 
	scanf("%s", search); 
	printf("\nNo Name     Weight Price point PersonalColor ProductColor event1/2\n"); 
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
	printf("%2d %s",i+1,p[i].fcolor);
	}	
	printf("번호는? ");
    	scanf("%d",&color);
	return color-1;
}

int loadColor(Product *p){
	int n=0;
	FILE * fp ;
	fp = fopen ("color.txt","rt");
	if(fp ==NULL){
	printf("=> no Data\n");
	return 0;
	}
	for(; ;n++){
	if(feof(fp))break;
	fscanf(fp,"%s\n", p[n].fcolor); 

}
	fclose(fp);
	printf("=> 색 로딩 성공!\n");
	return n;
}


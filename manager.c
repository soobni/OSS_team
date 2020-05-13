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
	printf("8. Color로 제품 찾기 \n");
	printf("9. Personal Color로 제품 찾기\n");
	printf("0. 종료\n\n"); 
	printf("=> 원하는 메뉴는? "); 
	scanf("%d", &menu); 
	return menu;
}

void listProduct(Product *p,int count){
	printf("\nNo Name    Weight Price Point PersonalColor ProductColor event1/2\n"); 
	printf("======================================\n"); 
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
	printf("_____현재 event중인 상품은_____\n");
	printf("No Name     Weight Price Point PersonalColor ProductColor event1/2\n");
	printf("====================================\n");
	for (int i=0;i<count;i++){
		if(p[i].event==1){
			printf("%3d ",i+1);
			readProduct(p[i]);		

		}
		else continue;
	}
}

void PersonalColor(Product *p, int count){
	for (int i=0;i<count;i++){
		if(p[i].pcolor==0){
			printf("%2d 아무 색이나 잘 어울린다면?\n",i+1);
			readProduct(p[i]);
		}	
		if(p[i].pcolor==1){
			printf("%2d 나의 Personal Color가  봄웜이라면?\n",i+1);
			readProduct(p[i]);
		}	
		if(p[i].pcolor==2){
			printf("%2d 나의 Personal Color가  여름쿨이라면?\n",i+1);
			readProduct(p[i]);
		}	
		if(p[i].pcolor==3){
			printf("%2d 나의 Personal Color가  가을웜이라면?\n",i+1);
			readProduct(p[i]);
		}	
		if(p[i].pcolor==4){
			printf("%2d 나의 Personal Color가  겨울쿨이라면?\n",i+1);
			readProduct(p[i]);
		}	
			
	}	
}

void searchColor(Product *p,int count){
	int color;
	int ccount;
	int j=0;
	ccount = loadColor(p);
	color=selectColor(p,ccount);		
	for(int i=0;i<count;i++){
	if(p[i].color==color){
		printf("%3d ",i+1);
		readProduct(p[i]);
		j++;
	}
	
}
	if(j==0){printf("\n제품이 없습니다!\n");return;}

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
       		 fscanf(fp,"%d %d %d %d %d %d %s\n",&p[n].weight, &p[n].price, &p[n].star, &p[n].pcolor, &p[n].color,&p[n].event, p[n].name);
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
	
	printf("검색할 이름은? "); 
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
	printf("%2d %s\n",i+1,p[i].fcolor);
	}	
	printf("번호는? ");
    	scanf("%d",&color);
	return color;
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
	return n;
}


#include <stdio.h>
#include <string.h>

typedef struct{
	char name[100]; //화장품 이름
	int weight; //화장품 무게
	int price; //화장품 가격
	int star; //화장품 별점
	int color; //화장품 색깔
	int pcolor; //퍼스널컬러  
	int color; //제품의 컬러
	int event; //이벤트중인 화장품  
	char fcolor // color파일에 있는 색
} Product;

int createProduct(Product *p); //제품을 추가하는 함수
void readProduct(Product p); //하나의 제품을 출력하는 함수
int deleteProduct(Product *p); //제품을 삭제하는 함수 
int updateProduct(Product *p); //제품을 수정하는 함수

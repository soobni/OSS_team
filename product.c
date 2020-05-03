#include "product.h"

int updateProduct(Product *p){




	return 0;
} 
int createProduct(Product *p){

	printf("제품의 이름은? ");
	scanf("%[^\n]s",p->name);
	printf("제품의 무게는? ");
	scanf("%d",p->weight);
	printf("제품의 별점은? ");
	scanf("%d", p->star);
	printf("제품의 personal color는? :(1: 봄웜 2: 여름쿨 3: 가을웜 4: 겨울쿨) ");
	scanf("%d",p->pcolor);
	printf("제품의 색상은? ");
	// 색은 string으로 받을까? 아님 숫자로 받을까? 숫자로 받으면 색의 종류는 어떤식으로 나눌까?	
	printf("이벤트 유무? Y:1 N:2 ");
	scanf("%d",p->event);


	return 1;
}


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
	printf("제품의 색상은? ");
	// 색상 구현 생각..
	printf("이벤트 유무? Y:1 N:2 ");
	scanf("%d",p->event);


	return 1;
}


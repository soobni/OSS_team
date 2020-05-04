#include "product.h"

int updateProduct(Product *p){
	printf("제품명은? ");
   	scanf("%[^\n]s",p->name);
	printf("제품의 무게는? ");
    	scanf("%d",&p->weight);
	printf("제품의 가격은? ");
	scanf("%d",p->price);
	printf("제품의 별점은? ");
	scanf("%d", p->star);
	printf("제품의 personal color는? :(0: 공통 1: 봄웜 2: 여름쿨 3: 가을웜 4: 겨울쿨) ");
	scanf("%d",p->pcolor);
	printf("제품의 색상은? ");
	//대표적인 색 몇가지 리스트 보여주고 선택하게 하는 함수 구현하기	
	printf("이벤트 유무? Y:1 N:2 ");
	scanf("%d",p->event);
    	
	printf("==> 수정됨!\n");
    	
	return 1;

} 
int createProduct(Product *p){

	printf("제품의 이름은? ");
	scanf("%[^\n]s",p->name);
	printf("제품의 무게는? ");
	scanf("%d",p->weight);
	printf("제품의 가격은? ");
	scanf("%d",p->price);
	printf("제품의 별점은? ");
	scanf("%d", p->star);
	printf("제품의 personal color는? :(0: 공통 1: 봄웜 2: 여름쿨 3: 가을웜 4: 겨울쿨) ");
	scanf("%d",p->pcolor);
	printf("제품의 색상은? ");
	// 색은 string으로 받을까? 아님 숫자로 받을까? 숫자로 받으면 색의 종류는 어떤식으로 나눌까?	
	printf("이벤트 유무? Y:1 N:2 ");
	scanf("%d",p->event);


	return 1;
}

void readProduct(Product p){
	//제품이름 제품무게 제품가격 제품별점 personalcolor 제품색상 이벤트유무
	printf("%s %d %d %d %d %d %d\n", p.name, p.weight, p.price, p.star, p.pcolor, p.color, p.event);
	 //제품의 색상을 숫자라고 해놓음
}

int deleteProduct(Product *p){
	p->weight = -1;
	p->price = -1;
	p->star = -1;
	p->pcolor = -1;
	p->color = -1;
	p->event = -1;
	printf("=> 삭제됨!\n");
	
	return 1;
}

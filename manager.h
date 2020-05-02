#include "product.h"

int selectMenu();
void listProduct(Product *p,int count); //전체 제품의 리스트를 출력하는 함수
void saveData(Product *p, int count); //등록된 제품 리스트를 파일에 저장
void searchName(Product *p, int count); //파일 속의 이름을 찾는 함수
void searchColor(Product *p); //제품의 색깔을 찾는 함수
void PersonalColor(Product *p); //자신의 퍼스널 컬러에 맞는 화장품을 보여주는 함수

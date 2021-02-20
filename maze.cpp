/*
구조체는 다른 자료형들을 하나로 묶어 사용할 수 있게 해줌, 변수들을 모아둔 박스

struct 구조체명{				#구조체 선언
	자료형 멤버명1;
	자료형 멤버명2;
};

struct 구조체명 변수명;
변수명.멤버명1 = 변수값1;
변수명.멤버명2 = 변수값2;

typedef struct 구조체명{
} 구조체별칭;
*/

/*
자료형 배열명[행][열];			#2차원배열 선언, 행 개수는 비워도 자동채움 됨
자료형 배열명[행][열]={
	{값,값,값,...}
	{값,값,값,...}
}

배열명[행][열]=값;				#값 수정
printf("%d", 배열명[행][열]);	#값 출력

int arr[4][3];
int row_len, col_len;
row_len = sizeof(arr) / sizeof(arr[0]);			#행의 크기=아파트 모든 방 수/한 층의 방 수
col_len = sizeof(arr[0]) / sizeof(arr[0][0]);	#열의 크기=한 층에 있는 모든 방 수/한 집의 방 수
*/

/*
포인터는 어떤 값의 주소를 가리키는 변수임.
#include <stdio.h>
int main(){
	int a=10;
	int *ptr=&a;
	printf("a 값:%d / a 주소값:%p", a, &a);
	printf("ptr 값:%d / ptr 주소값:%p", *ptr, ptr);
}

이중포인터는 포인터를 값으로 갖는 포인터임.
int main(){
	int b=20;
	int* ptr = &b;
	int** pptr = &ptr;
	print("%p", pptr);								#pptr의 메모리주소
	printf("%p = %p", ptr, *pptr);					#ptr의 메모리주소
	printf("%d = %d = %d", b, *ptr, **pptr);		#20
*/
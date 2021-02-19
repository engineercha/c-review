///*m번째 구간의 층수가 2m+1인 크리스마스 트리다.
//사용자가 입력한 트리 층수(n)를 맞추기 위해 n2 변수를 사용했으며, 따라서 마지막 구간의 층수는 2m+1 이하일 수 있다.
//i는 한 구간의 라인 넘버다.
//j와 m은 각각 좌측 공백 및 * 출력과 구간의 층수에 관여하는 변수다 */
//
//#include<stdio.h>
//int main(void) {
//
//	int i, j, m; 
//	int n;
//
//	printf("\n트리의 높이를 입력하세요: ");
//	scanf_s("%d", &n);
//	int n2 = n;
//
//	for (m = 3; ; m += 2) {
//
//		for (i = 1; i <= n2 && i <= m; i++) {
//
//			for (j = 1; j <= n - i; j++)
//				printf(" ");
//			if (m == 3 && i == 1) printf("☆");
//			else {
//				for (j = 1; j <= i; j++)
//					printf("* ");
//			}
//			printf("\n");
//		}
//		n2 -= m;
//		if (n2 <= 0) break;
//	}
//	printf("\n\tMerry Christmas!\n\n");
//	return 0;
//}
#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> //GotoXY �Լ� �������
#include <conio.h> //Ŀ�������� �Լ� �������

#define XP 40
#define YP 5

void gotoxy(int x, int y) {
	COORD Pos; //������Ͽ� ����� x,y���� �����ϴ� ����ü
	Pos.X = x; //COORD Pos={x,y};
	Pos.Y = y; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	//�ܼ��� �ڵ鰪, ��ǥ���� �޾Ƽ� �ش� ��ġ�� Ŀ���� �̵���Ŵ
}

void CursorView(char show) {
	CONSOLE_CURSOR_INFO ConsoleCursor; //0�̸� Ŀ�� �������� �����ְ�, 1�̸� ������
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

int main() {
	CursorView(0);
	int i, j;
	gotoxy(XP, YP); //(XP,YP)�� �̵�
	for (i = 0; i < 4; i++) printf("��");
	for (j = 2; j < 6; j++) {
		gotoxy(XP + 6, YP + j);
		printf("��");
	}
}
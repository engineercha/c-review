#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> //GotoXY 함수 헤더파일
#include <conio.h> //커서깜빡임 함수 헤더파일

#define XP 40
#define YP 5

void gotoxy(int x, int y) {
	COORD Pos; //헤더파일에 선언된 x,y값을 저장하는 구조체
	Pos.X = x; //COORD Pos={x,y};
	Pos.Y = y; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	//콘솔의 핸들값, 좌표값을 받아서 해당 위치로 커서를 이동시킴
}

void CursorView(char show) {
	CONSOLE_CURSOR_INFO ConsoleCursor; //0이면 커서 깜빡임을 숨겨주고, 1이면 보여줌
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

int main() {
	CursorView(0);
	int i, j;
	gotoxy(XP, YP); //(XP,YP)로 이동
	for (i = 0; i < 4; i++) printf("■");
	for (j = 2; j < 6; j++) {
		gotoxy(XP + 6, YP + j);
		printf("■");
	}
}
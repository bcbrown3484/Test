// ConsoleApplicationTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fx, fy, score;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirecton dir;
void setup()
{
	gameOver = false;
	x = width / 2;
	y = height / 2;
	fx = rand() % width;
	fy = rand() % height;
	score = 0;
}

void draw()
{
	system("cls");
	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;
	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;
}
void logic()
{

}
void input()
{

}

int main()
{
	setup();

	while (!gameOver)
	{
		draw();
		logic();
		input();
	}
    return 0;
}


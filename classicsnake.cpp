// classicsnake.cpp : Defines the entry point for the console application.
//Console Snake by [B] [R] [O] [N] [S] [O] [N]   [B] [R] [O] [W] [N]. 2017... 

#include "stdafx.h"
#include <iostream>
using namespace std;
bool gameOver;
//Creates coordinate plane.
const int height = 20;
const int width = 20;
//Numerical variables
int x, y, fruitX, fruitY, score;
// index direction for snake
enum direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
direction dir;

// Four basic game structures.
//Establishes a basis for starting the game.
void setup()
{
	gameOver = false;
	dir = stop;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
	system('cls');

}
//Draws changes to field.
void draw()
{
	for (int i = 0, i < width, i++)
		cout "#";
	cout << endl;
	for (int i = 0, i < width, i++)
		cout "#";
	count << endl;
}
//takes player input.
void input()
{

}
//processes and handles logic from user input.
void logic()
{

}
//Main instance of program.
int main()
{
	// loop runs until game is over.
	setup();
	while (!gameOver)
	{
		draw();
		input();
		logic();
	}
    return 0;
}


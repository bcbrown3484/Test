// classicsnake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
bool gameOver;
const int height = 20;
const int width = 20;

// Four basic game structures.
//Establishes a basis for starting the game.
void setup()
{
	gameOver = false;

}
//Draws changes to field.
void draw()
{

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


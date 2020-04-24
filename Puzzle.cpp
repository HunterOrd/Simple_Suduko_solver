#include "Puzzle.h"
#include <stdio.h>
#include <iostream>


//Creates the puzzle withing the puzzle class
Puzzle::Puzzle(int input[][9])
{
	for (int i = 0; i < 9; i++) {
		for (int x = 0; x < 9; x++)
		{
			puzzle[i][x] = input[i][x];
		}
	}
}

//checks to see if any garuenteed numbers exist
//if one does, it will fill in that number
//otherwise it will ignore it
bool Puzzle::CheckGAR(int row, int collumn)
{
	if (puzzle[row][collumn] != -1)
		return false;
	int holder[9] = { 1,2,3,4,5,6,7,8,9 };
	int count = 0;
	int temp;
	int Cstart;
	int Rstart;
	if (row > 5)
		Rstart = 6;
	else if (row > 2)
		Rstart = 3;
	else
		Rstart = 0;
	if (collumn > 5)
		Cstart = 6;
	else if (collumn > 2)
		Cstart = 3;
	else
		Cstart = 0;
	for (int y = 0; y < 9; y++) {
		if (puzzle[row][y] != -1)
			holder[puzzle[row][y] - 1] = 0;
		if (puzzle[y][collumn] != -1)
			holder[puzzle[y][collumn] - 1] = 0;
		if (puzzle[Rstart + (y / 3)][Cstart + (y % 3)] != -1)
			holder[puzzle[Rstart + (y / 3)][Cstart + (y % 3)] - 1] = 0;
	}
	for (int z : holder)
	{
		if (z != 0)
			temp = z;
		else
			count++;
	}

	if (count == 8) {
		puzzle[row][collumn] = temp;
		return true;
	}
	else
		return false;

}

//Goes through and will solve any puzzle with a unique solution
void Puzzle::Initialsweep()
{
	for (int i = 0; i < 9; i++) {
		for (int x = 0; x < 9; x++)
		{
			if (CheckGAR(i, x))
				Initialsweep();
		}
	}
}

//Will return true or false if a number can possible go there
bool Puzzle::possibility(int row, int collumn, int posi) {
	bool descision = true;
	int Cstart;
	int Rstart;
	if (row > 5)
		Rstart = 6;
	else if (row > 2)
		Rstart = 3;
	else
		Rstart = 0;
	if (collumn > 5)
		Cstart = 6;
	else if (collumn > 2)
		Cstart = 3;
	else
		Cstart = 0;
	for (int y = 0; y < 9; y++) {
		if (puzzle[row][y] == posi)
			descision = false;
		if (puzzle[y][collumn] == posi)
			descision = false;
		if (puzzle[Rstart + (y / 3)][Cstart + (y % 3)] == posi)
			descision = false;
	}
	return descision;
}

//Will use backtracking to find a possible solution
//will print another solution on command
void Puzzle::solver()
{
	for (int i = 0; i < 9; i++) {
		for (int x = 0; x < 9; x++)
		{
			if (puzzle[i][x] == -1) {
				for (int z = 0; z < 9; z++) {
					if (possibility(i, x, (z + 1))) {
						puzzle[i][x] = z + 1;
						solver();
						puzzle[i][x] = -1;
					}
				}
				return;
				
			}
			
		}
	}
	Printer();
	printf("More? \n");
	system("pause");
}


//prints the puzzle
void Puzzle::Printer() 
{
	for (int i = 0; i < 9; i++) {
		for (int x = 0; x < 9; x++)
		{
			printf(" | %d", puzzle[i][x]);
		}
		printf(" | \n");
		
	}
}
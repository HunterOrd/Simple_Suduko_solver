#include "Puzzle.h"
#include <stdio.h>

int main() {

	int temp[9][9] = {
	{5,3,-1,-1,7,-1,-1,-1,-1},
	{ 6,-1,-1,1,9,5,-1,-1,-1 },
	{ -1,9,8,-1,-1,-1,-1,6,-1 },
	{ 8,-1,-1,-1,6,-1,-1,-1,3 },
	{ 4,-1,-1,8,-1,3,-1,-1,1 },
	{ 7,-1,-1,-1,2,-1,-1,-1,6 },
	{ -1,6,-1,-1,-1,-1,2,8,-1 },
	{ -1,-1,-1,4,1,9,-1,-1,5 },
	{ -1,-1,-1,-1,8,-1,-1,7,9 } };

	int temp2[9][9] = {
	{4,-1,-1,7,-1,9,-1,8,2},
	{ -1,-1,2,3,-1,4,6,-1,9},
	{ -1,-1,-1,-1,8,-1,-1,3,-1 },
	{ 2,-1,-1,-1,-1,-1,-1,5,3 },
	{ -1,-1,4,6,-1,5,1,-1,-1 },
	{ 8,7,-1,-1,-1,-1,-1,-1,6 },
	{ -1,2,-1,-1,6,-1,-1,-1,-1 },
	{ 5,-1,7,8,-1,3,2,-1,-1 },
	{ 6,3,-1,4,-1,1,-1,-1,5 } };

	int temp3[9][9] = {
	{6,-1,-1,-1,-1,-1,5,3,-1},
	{ -1,-1,-1,-1,-1,2,7,-1,-1},
	{ 5,-1,7,-1,9,6,-1,1,8} ,
	{ -1,-1,6,-1,-1,1,-1,8,-1 },
	{ -1,9,8,-1,-1,-1,-1,-1,-1 },
	{ -1,-1,-1,-1,2,-1,-1,-1,-1 },
	{ -1,-1,-1,-1,-1,-1,9,-1,-1 },
	{ -1,-1,-1,2,-1,-1,-1,4,3 },
	{ 3,1,-1,-1,-1,9,-1,6,2 } };

	int temp4[9][9] = {
	{-1,-1,-1,-1,-1,-1,3,-1,2},
	{ -1,-1,-1,3,-1,6,1,-1,-1},
	{ 9,-1,3,-1,-1,-1,5,-1,-1} ,
	{ -1,-1,-1,-1,-1,-1,-1,-1,-1 },
	{ -1,-1,-1,-1,-1,7,-1,-1,9 },
	{ 1,6,2,8,9,-1,-1,-1,4 },
	{ 8,-1,-1,-1,5,-1,-1,-1,-1 },
	{ 7,-1,-1,-1,-1,3,-1,-1,1 },
	{ 3,4,5,-1,7,-1,-1,-1,-1 } };

	int temp5[9][9] = {
	{-1,2,-1,-1,-1,-1,9,4,-1},
	{ -1,-1,-1, -1,-1,6,-1,-1,8},
	{ 1,-1,-1,-1,8,-1,-1,-1,-1} ,
	{ -1,-1,8,-1,7,-1,-1,-1,1 },
	{ -1,-1,-1,-1,-1,-1,-1,-1,9 },
	{ -1,3,-1,5,-1,9,-1,-1,-1 },
	{ 4,-1,-1,-1,6,3,8,-1,-1 },
	{ 3,-1,-1,4,1,5,-1,-1,-1 },
	{ -1,-1,-1,-1,-1,-1,7,-1,-1 } };

	Puzzle suduko1(temp);

	printf("Puzzle 1\n");
	suduko1.Printer();
	printf("\n Solved \n");
	suduko1.Initialsweep(); // Will solve the puzzle immediately through recursion
	suduko1.solver(); //If solved in initial sweep won't need backtracking but will use backtracking to solve if multiple solutions are present
	printf("No more\n");

	Puzzle suduko2(temp2);

	printf("Puzzle 2\n");
	suduko2.Printer();
	printf("\n Solved \n ");
	suduko2.Initialsweep();
	suduko2.solver();
	printf("No more\n");

	Puzzle suduko3(temp3);

	printf("Puzzle 3\n");
	suduko3.Printer();
	printf("\n Solved \n");
	suduko3.Initialsweep();
	suduko3.solver();
	printf("No more\n");

	Puzzle suduko4(temp4);

	printf("Puzzle 4\n");
	suduko4.Printer();
	printf("\n Solved \n");
	suduko4.Initialsweep();
	suduko4.solver();
	printf("No more\n");

	Puzzle suduko5(temp5);

	printf("Puzzle 5\n");
	suduko5.Printer();
	printf("\n Solved \n");
	suduko5.Initialsweep();
	suduko5.solver();
	printf("No more\n");

}

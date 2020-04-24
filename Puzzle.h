#pragma once
class Puzzle
{
private:

	int puzzle[9][9];

public:

	Puzzle(int input[][9]);

	bool CheckGAR(int row, int collumn);

	bool possibility(int row, int collumn, int posi);

	void Initialsweep();

	void solver();

	void Printer();
};


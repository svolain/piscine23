#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	**check_for_4(int **cell, int *in);
int	**check_for_3(int **cell, int *in);
int	**check_for_1(int **cell, int *in);
int	**check_for_2(int **cell, int *in);
int	**almost_full(int **cell);
int	check_full(int **cell);
int	error_2(int **cell, int **temp_grid);
int	**copy(int **cell, int **temp_grid);

int	**grid_maker(int rows, int cols)
{
	int	**grid;
	int	i;

	grid = (int **)malloc(rows * sizeof(int *));
	i = 0;
	while (i <rows)
	{
		grid[i]= (int *)malloc(cols * sizeof(int));
		i++;
	}
	return (grid);
}

int	main (int argc, char *argv[])
{
	int **cell;
	int **temp_grid;
	int	input;
	int	i;
	int j;
	char buffer;
	int in[15];

	cell = grid_maker(4, 4);
	temp_grid = grid_maker (4, 4);
	i = 0;
//	grid initiator
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			cell[i][j] = 0;
			j++;
		}
		i++;
	}

//	check_for_error_1_input(argv);

	i = 0;
	j = 0;
	while (*(argv[1] + i) != '\0')
	{
		if (*(argv[1] + i) < 49 || *(argv[1] + i) > 52)
			if (*(argv[1] + i) != 32)
//				write(1, "Error1", 6);
				return (1);
		i++;
	}

//	change argv[1] to separate digits
	i = 0;
	j = 0;
	while (*(argv[1] + i) != '\0')
	{
		if (*(argv[1] + i) >= 49 && *(argv[1] + i) <= 52)
		{
			in[j] = *(argv[1] + i) - 48;
			j++;
		}
		i++;
	}

	cell = check_for_4 (cell, in);
	cell = check_for_1 (cell, in);
	cell = check_for_3 (cell, in);
	cell = check_for_2 (cell, in);

	while (!check_full(cell))
	{
		copy (cell, temp_grid);
		error_2 (cell, temp_grid);
		copy (cell, temp_grid);
		cell = almost_full (cell);
		error_2 (cell, temp_grid);
	}
	input = 1;
	while (input < 17)
	{
//		char *temp;      maybe no need
//		temp = argv[input];    maybe no need
//		temp_grid = copy (cell)

		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				temp_grid [i][j] = cell [i][j];
				j++;
			}
			i++;
		}
//


//		error_type_2_check_wrong_change (temp_grid , cell);

		i = 0;
		j = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (temp_grid [i][j] != 0)
				{
					if (temp_grid [i][j] != cell [i][j])
						return (1);
				}
				j++;
			}
			i++;
		}

//		error type_3:having more than one digit in collumn or row (cell)

//		checking
//		cell = check_for_2 (temp, cell, input);
		input++;
	}
	i = 0;
//	cell = almost_full (cell);
//	almost_full and check for 2 need repeetatio
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			buffer = (char) (cell[i][j]) + '0';
			write (1, &buffer, 1);
			write (1, "    ", 4);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
	
int	**check_for_4(int **cell, int *in)
{	
	int	i;

	i = 0;
	while (i < 16)
	{
		if (in[i] == 4)
		{
			if (i < 4)
			{
				cell [0][i] = 1;
				cell [1][i] = 2;
				cell [2][i] = 3;
				cell [3][i] = 4;
			}
			if (i > 3 && i < 8)
			{
				cell [0][i - 4] = 4;
				cell [1][i - 4] = 3;
				cell [2][i - 4] = 2;
				cell [3][i - 4] = 1;
			}
			if (i > 7 && i < 12)
			{
				cell [i - 8][0] = 1;
				cell [i - 8][1] = 2;
				cell [i - 8][2] = 3;
				cell [i - 8][3] = 4;
			}
			if (i > 11)
			{
				cell [i - 12][0] = 4;
				cell [i - 12][1] = 3;
				cell [i - 12][2] = 2;
				cell [i - 12][3] = 1;
			}
		}
		i++;
	}
	return (cell);
}

int	**check_for_3(int **cell, int *in)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (in[i] == 3) 
		{
			if (i < 4)
			{
				if (in [11 - i] == 2)
				{
					cell [2][i] = 4;
					if (cell [0][i] == 2)
						cell [1][i] = 3;
				}
				if (in [11 - i] == 1 && (cell [0][i] == 2 || cell [1][i] == 1 || cell [2][i] == 3))
				{
					cell [0][i] = 2;
					cell [1][i] = 1;
					cell [2][i] = 3;
				}
				if (in [11 - i] == 1 && (cell [0][i] == 2 || cell [1][i] == 3 || cell [2][i] == 1))
				{
					cell [0][i] = 3;
					cell [1][i] = 2;
					cell [2][i] = 1;
				}
				if (in [11 - i] == 1 && (cell [0][i] == 1 || cell [1][i] == 3 || cell [2][i] == 2))
				{
					cell [0][i] = 1;
					cell [1][i] = 3;
					cell [2][i] = 2;
				}
			}
			if (i > 3 && i < 8)
			{
				if (in [19 - i] == 2)
				{
					cell [1][i - 4] = 4;
					if (cell [3][i - 4] == 2)
						cell [2][i - 4] = 3;
				}
				if (in [19 - i] == 1 && (cell [0][i] == 2 || cell [1][i] == 1 || cell [2][i] == 3))
				{
					cell [0][i] = 2;
					cell [1][i] = 1;
					cell [2][i] = 3;
				}
				if (in [19 - i] == 1 && (cell [0][i] == 2 || cell [1][i] == 3 || cell [2][i] == 1))
				{
					cell [0][i] = 3;
					cell [1][i] = 2;
					cell [2][i] = 1;
				}
				if (in [19 - i] == 1 && (cell [0][i] == 1 || cell [1][i] == 3 || cell [2][i] == 2))
				{
					cell [0][i] = 1;
					cell [1][i] = 3;
					cell [2][i] = 2;
				}
			}
			if (i > 7 && i < 12)
			{
				if (in [11 - i] == 2)
				{
					cell [i - 8][2] = 4;
				if (cell [i - 8][0] == 2)
					cell [i - 8][1] = 3;
				}
				if (in [11 - i] == 1 && (cell [0][i] == 2 || cell [1][i] == 1 || cell [2][i] == 3))
				{
					cell [0][i] = 2;
					cell [1][i] = 1;
					cell [2][i] = 3;
				}
				if (in [11 - i] == 1 && (cell [0][i] == 2 || cell [1][i] == 3 || cell [2][i] == 1))
				{
					cell [0][i] = 3;
					cell [1][i] = 2;
					cell [2][i] = 1;
				}
				if (in [11 - i] == 1 && (cell [0][i] == 1 || cell [1][i] == 3 || cell [2][i] == 2))
				{
					cell [0][i] = 1;
					cell [1][i] = 3;
					cell [2][i] = 2;
				}
			}
			if (i > 11)
			{
				if (in [19 - i] == 2)
				{
					cell [i - 12][2] = 4;
					if (cell [i - 12][0] == 2)
						cell [i - 12][1] = 3;
				}
				if (in [19 - i] == 1 && (cell [0][i] == 2 || cell [1][i] == 1 || cell [2][i] == 3))
				{
					cell [0][i] = 2;
					cell [1][i] = 1;
					cell [2][i] = 3;
				}
				if (in [19 - i] == 1 && (cell [0][i] == 2 || cell [1][i] == 3 || cell [2][i] == 1))
				{
					cell [0][i] = 3;
					cell [1][i] = 2;
					cell [2][i] = 1;
				}
				if (in [19 - i] == 1 && (cell [0][i] == 1 || cell [1][i] == 3 || cell [2][i] == 2))
				{
					cell [0][i] = 1;
					cell [1][i] = 3;
					cell [2][i] = 2;
				}
			}
		}
		i++;
	}
	return (cell);
}

int	**check_for_1(int **cell, int *in)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (in[i] == 1)
		{
			if (i < 4)
			{
				cell [0][i] = 4;
			}
			if (i > 3 && i < 8)
			{
				cell [3][i - 4] = 4;
			}
			if (i > 7 && i < 12)
			{
				cell [i - 8][0] = 4;
			}
			if (i > 11)
			{
				cell [i - 12][3] = 4;
			}
		}
		i++;
	}
	return (cell);
}

int	**almost_full(int **cell)
{
	int	i;
	int	j;
	int counter;
	int empty;
	int	sum;

	i = 0;

	while (i<4)
	{
		j = 0;
		sum = 0;
		counter = 0;

		while (j < 4)
		{
			if (cell[i][j] > 0)
			{
				counter++;
				sum = sum + cell[i][j];
			}
			if (cell[i][j] == 0)
				empty = j;
			j++;
		}
		if (counter == 3)
			cell [i][empty] = 10 - sum;
		i++;
	}
	j = 0;
	while (j < 4)
	{
		i = 0;
		sum = 0;
		counter = 0;
		while (i < 4)
		{
			if (cell[i][j] > 0)
			{
				counter++;
				sum = sum + cell[i][j];
			}
			if (cell[i][j] == 0)
				empty = i;
			i++;
		}
		if (counter == 3)
			cell [empty][j] = 10 - sum;
		j++;
	}
	return (cell);
}

int	check_full(int **cell)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (cell [i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	**check_for_2(int **cell, int *in)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (in[i] == 2)
		{
			if (i < 4 && cell [2][i] == 4)
			{
				if (cell [3][i] == 1)
				{
					cell [0][i] = 3;
					cell [1][i] = 2;
				}
				if (cell [3][i] == 2)
				{
					cell [0][i] = 3;
					cell [1][i] = 1;
				}
				if (cell [3][i] == 3)
				{
					cell [0][i] = 2;
					cell [1][i] = 1;
				}
			}
			if (i > 3 && i < 8 && cell [1][i - 4] == 4)
			{
				if (cell [3][i - 4] == 1)
				{
					cell [0][i - 4] = 3;
					cell [1][i - 4] = 2;
				}
				if (cell [3][i - 4] == 2)
				{
					cell [0][i - 4] = 3;
					cell [1][i - 4] = 1;
				}
				if (cell [3][i - 4] == 3)
				{
					cell [0][i - 4] = 2;
					cell [1][i - 4] = 1;
				}
			}
			if (i > 7 && i < 12 && cell [i - 8][2] == 4)
			{
				if (cell [3][i - 8] == 1)
				{
					cell [0][i - 8] = 3;
					cell [1][i - 8] = 2;
				}
				if (cell [3][i - 8] == 2)
				{
					cell [0][i - 8] = 3;
					cell [1][i - 8] = 1;
				}
				if (cell [3][i - 8] == 3)
				{
					cell [0][i - 8] = 2;
					cell [1][i - 8] = 1;
				}

			}
			if (i > 11 && cell [i - 12][1] == 4)
			{
				if (cell [0][i - 12] == 1)
				{
					cell [3][i - 12] = 3;
					cell [2][i - 12] = 2;
				}
				if (cell [0][i - 12] == 2)
				{
					cell [3][i - 12] = 3;
					cell [2][i - 12] = 1;
				}
				if (cell [0][i - 12] == 3)
				{
					cell [3][i - 12] = 2;
					cell [2][i - 12] = 1;
				}
			}
		}
		i++;
	}
	return (cell);
}

int	error_2(int **cell, int **temp_grid)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (temp_grid [i][j] != 0)
			{
				if (temp_grid [i][j] != cell [i][j])
					printf("error");
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	**copy(int **cell, int **temp_grid)
{
	int i;
	int j;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp_grid [i][j] = cell [i][j];
			j++;
		}
		i++;
	}
	return (temp_grid);
}


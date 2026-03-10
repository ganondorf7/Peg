#include <stdio.h>
#include <stdlib.h>


struct position
{
	int     row;
	int     col;
	int     val;
};

int	main(void)
{
	struct position board[25];
	int	i = 0;
	int	j = 0;
	int	k = 0;
	int	rows = 5;
	int	cols = 5;

	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			board[k].row = i;
			board[k].col = j;
			board[k].val = 0;
			j++;
			k++;
		}
		i++;
	}

	i = 0;
	k = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			printf("%d", board[k].row);
			j++;
			k++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
	
	i = 0;
	k = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			printf("%d", board[k].col);
			j++;
			k++;
		}
		printf("\n");
		i++;
	}
	printf("\n");

	i = 0;
	k = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			printf("%d", board[k].val);
			j++;
			k++;
		}
		printf("\n");
		i++;
	}

	return (0);
}

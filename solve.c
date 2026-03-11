#include <unistd.h>
#include <stdio.h>

struct[i].row = int;
struct[i].col = int;
struct[i].val = int;

void	move_row(int i, int a)
{
	if (a < 0)
		struct[i].row = 0;
		struct[i - 1].row = 0;
		struct[i - 2].row = 1;
	else
		struct[i].row = 0;
		struct[i + 1].row = 0;
		struct[i + 2].row = 1;
}
void	move_col(int i, int a)
{
	if (a < 0)
		struct[i].row = 0;
		struct[i - 1].row = 0;
		struct[i - 2].row = 1;
	else
		struct[i].row = 0;
		struct[i + 1].row = 0;
		struct[i + 2].row = 1;
}
int	solve(struct[i])
{
	while (struct[i].col <= col)
	{
		if (struct[i].val = 1)
		{
			int a = 1;
			for (i = 0; i < 2; i++)
			{
				while (struct[i + (2 * a)].row = 0 && struct[i + (1 * a)] = 1)
					move_row(i, a);
				while (struct[i + (2 * a)].col = 0 && struct[i + (1 * a)].col = 1)
					move_col(i, a);
				a = a * -1;
			}
	}
		i++;
	}
	return 0;
}

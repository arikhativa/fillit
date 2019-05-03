
#include "fillit.h"

int		shape_id(point p1, point p2, point p3, point p4)
{
	int sumx;
	int sumy;
	int x;
	int y;

	x = p4.x - p1.x;
	y = p4.y - p1.y;
	sumx = p1.x + p2.x + p3.x + p4.x;
	sumy = p1.y + p2.y + p3.y + p4.y;
	if (sumx == 6 && sumy == (4 * p1.y))
		return (0);
	if (sumx == (4 * p1.x) && sumy == 7)
		return (1);
	if (sumx == 2 + (4 * p1.x) && (sumy == 8 || sumy == 12) && x == 1 && y == 2)
		return (2);
	if (x == -1)
		return (3);
	if ((sumx == 4 || sumx == 8) && sumy == (2 * p1.y) + (2 *(p1.y + 1)) && x == 1 && y == 2)
		return (4);
	if ((sumx == 4 || sumx == 8) && sumy == 2 + (4 * p1.y) && x == 0 && y == 1)
		return (5);
	if ((sumx == 4 || sumx == 8) && sumy == p1.y + (3 * (p1.y + 1)))
		return (6);
	if ((sumx == 4 || sumx == 8) && sumy == (p1.y + 1) + (3 * p1.y))
		return (7);
	if (sumx == (3 * p1.x) + (p1.x - 1) && (sumy == 8 || sumy == 12))
		return (8);
	if (sumx == (3 * p1.x) + (p1.x + 1) && (sumy == 12 || sumy == 8))
		return (9);
	if (sumx == (3 * p1.x) + (p1.x + 1) && (sumy == 11 || sumy == 9) && x == 0 && y == 2)
		return (10);
	if (sumx == (3 * p1.x + 1) + p1.x && (sumy == 7 || sumy == 11) && x == 1 && y == 2)
		return (11);
	if (sumx == (3 * p1.x) + (p1.x + 1) && (sumy == 9 || sumy == 13) && x == 1 && y == 2)
		return (12);
	if (sumx == (3 * p1.x) + (p1.x - 1) && (sumy == 7 || sumy == 13) && x == 0 && y == 2)
		return (13);
	if ((sumx == 5 || sumx == 9) && sumy == (3 * p1.y) + (p1.y + 1) && x == 2 && y == 1)
		return (14);
	if ((sumx == 3 || sumx == 7) && sumy == (3 * p1.y) + (p1.y + 1) && x == 0 && y == 1)
		return (15);
	if ((sumx == 5 || sumx == 9) && sumy == (2 * p1.y) + (2 * (p1.y + 1)) && x == 0 && y == 1)
		return (16);
	if ((sumx == 3 || sumx == 7) && sumy == (2 * p1.y) + (2 * (p1.y + 1)) && x == 1 && y == 1)
		return (17);
	if ((sumx == 2 || sumx == 10 || sumx == 6) && sumy == (2 * p1.y) + (2 * (p1.y + 1)) && x == 1 && y == 1)
		return (18);
	return (-1);
}

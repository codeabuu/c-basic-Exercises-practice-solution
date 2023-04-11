#include <stdio.h>
int main()
{
	int height=7;
	int width=5;
	int perimeter;
	int area;
	perimeter = (height+width)*2;
	area = height *width;

	printf("Perimeter of the rectangle=%d\n", perimeter);
	printf("Area of the rectangle=%d\n", area);
	return (0);
}

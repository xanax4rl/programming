#include <stdio.h>
#include <iostream>

int x = 2, y = 4, z = 6, s1, s2, s3;
float s;

int main()
{

	s1 = x * y;
	s2 = x * z;
	s3 = y * z;

	s = sqrt(s1 + s2 + s3);

	printf("%f", s);
	return 0;
}
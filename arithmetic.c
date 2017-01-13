/* This is a test program for a Git repository */

#include <stdio.h>

int main(void)
{
	int side_len, cube_vol;
	
	printf("Enter the length of the side of a cube in how many metres it is (integer): ");
	scanf("%d", &side_len);
	cube_vol = side_len * side_len * side_len;
	printf("The volume is %d metres cubed.", cube_vol);
	
	return 0;
}
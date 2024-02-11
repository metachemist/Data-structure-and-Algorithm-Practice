#include<stdio.h>

int img[13][12] =
{{0, 0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	1},
{0,	0,	1,	1,	1,	0,	0,	0,	0,	0,	1,	0},
{1,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0},
{0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0},
{0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0},
{0,	0,	0,	0,	0,	0,	0,	0,	1,	1,	0,	0},
{0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	1,	1},
{0,	0,	0,	0,	1,	0,	1,	0,	0,	0,	0,	0},
{0,	0,	0,	1,	0,	0,	1,	0,	0,	0,	0,	0},
{0,	0,	1,	0,	0,	0,	0,	1,	0,	0,	0,	0},
{0,	1,	0,	0,	0,	0,	0,	0,	1,	1,	1,	1},
{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0}};

	int img [13][12];
	int rMAX =12;
	int cMAX =11;
	int roads (int r, int c);

int roads(int r, int c){
	if ((r<0)|| (c<0)||(r>rMAX)||(c>cMAX)){
		return 0;
	}
	
	if (img[r][c]== 0){ 
	return 0;
    }
	else{
	img [r][c]= 0;
	return 1 + roads(r, c-1) +roads(r, c+1) +roads(r-1, c) +roads(r-1, c-1) +roads(r-1, c+1) +roads(r+1, c-1) +roads(r+1, c) +roads(r+1, c+1);
    }
} 
int main(){

	int r, c;
	printf("Enter row: ");
	scanf("%d", &r);
	printf("Enter column: ");
	scanf("%d", &c);
	int roadlength;
	roadlength = roads(r,c);
	printf("The length of the road is %d", roadlength);
	return 0;
	
}
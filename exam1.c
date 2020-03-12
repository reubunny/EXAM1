#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int sides (void);
int rolls(void);
void printer(int p, int r, int arr[SIZE]);

int main(void)
{
	int p,r;
	p= sides(); //sides of die
	r= rolls(); //amount of rolls

	int arr[SIZE]={0};
	printf("the number of times you rolled a:\n");
	printer(p,r, arr);
	return EXIT_SUCCESS;
}

int sides(void)
{
	int x=0;
	printf("enter the number of sides for a die no more than 20 sides. \n");
	scanf("%d",&x);
	return x;
}

int rolls(void)
{
	int x=0;
	
	printf("enter the number of times you would like to roll the die. \n");
	scanf("%d", &x);

	return x;
}

void printer(int p, int r, int arr[SIZE])
{
	int i=1;
	
	srand(time(NULL));
	for(i=1;i<=p; i++)
	{
		arr[i] = rand()% p + 1; // git add 'filename' git // commit -m "exam1"// git push
		printf("%d= %d\n",i,arr[i]);
	}

}


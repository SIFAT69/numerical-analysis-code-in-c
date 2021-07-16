#include<stdio.h>
#include<conio.h>
#include<math.h>

#define   f(x)   3*x-cos(x)-1

#define   g(x)   (cos(x)+1)/3

int main()
{
	 int step=1, N;
	 float x0, x1, e;


	 printf("Enter initial guess: ");
	 scanf("%f", &x0);
	 printf("Enter tolerable error: ");
	 scanf("%f", &e);
	 printf("Enter maximum iteration: ");
	 scanf("%d", &N);


	 do
	 {
		  x1 = g(x0);


		  step = step + 1;

		  if(step>N)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }

		  x0 = x1;

	 }while( fabs(f(x1)) > e);

	 printf("\nRoot is %f", x1);

	 getch();
	 return(0);
}

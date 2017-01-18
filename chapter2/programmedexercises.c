/*Deitel & Deitel
Page 46
section 2.3*/

// Write a program that asks the user to enter two numbers, obtains them from 
//the user and prints their sum, product, difference, quotient and remainder.
/* first program
#include <stdio.h>
int main(void)
{
  
  int a, b, sum, product, difference, quotient, remainder;

  printf("Enter two numbers: \n");
  scanf("%d%d", &a, &b );
  
  sum = a + b;
  product = a * b;
  difference = a - b;
  quotient = a / b;
  remainder = a % b;
  
  printf("Sum: %d \n", sum);
  printf("Product: %d \n", product);
  printf("Difference: %d \n", difference);
  printf("Quotient: %d \n", quotient);
  printf("Remainder: %d \n", remainder);
  
  return 0;
}
*/    //end of first program


/*    //Starting of second program
#include <stdio.h>
int main()
{

int s;

   for(s=1; s<=4; ++s)
   {
      printf("%d", s);
   }
   printf("\n");
   return 0;
}
*/   //ending of second program 

/*   // starting of third program
#include <stdio.h>
int main()
{
   int x, y, sum, average, product;
   
   printf("Enter two numbers: \n");
   scanf("%d%d", &x, &y);
   
   if(x==y)
   {
      printf("%d and %d are equal\n", x, y);
   }
   else
   {
   	  printf("%d and %d are different\n", x, y);
      if(x>y)
      {
         printf("%d is larger than %d\n", x, y);
      }
      else
         printf("%d is less than %d\n", x, y);
   }
   
   sum = x + y;
   average = sum/2;
   product = x * y;
   
   printf("The average of %d and %d is: %d\n", x, y, average);
   printf("The sum of %d and %d is: %d\n", x, y, sum);
   printf("The product of %d and %d is: %d\n", x, y, product);   
   
   return 0;
}
*/   // ending of third program 

/*   // start of fourth program
#include <stdio.h>

int main()
{
   int s, A, B, C, a, b, c;
   char "0";
   printf("********     ***        *       *\n");
   printf("*      *   *     *     ***     * *\n");
   printf("*      *  *       *   *****   *   * \n");
   printf("*      *  *       *     *    *     * \n");   
   printf("*      *  *       *     *   *       * \n");
   printf("*      *  *       *     *    *     * \n");
   printf("*      *  *       *     *     *   *\n");
   printf("*      *   *     *      *      * *\n");
   printf("********     ***        *       *\n");
   printf("\n");
   printf( "*\n**\n***\n****\n*****\n" );
   printf("\n");
   
   for(s = 1; s<=4; ++s)
   {
      printf("* * * * * * * *\n");
      printf(" * * * * * * * *\n");
   }
   printf("%d\n", A);
   printf("%d\n", B);
   printf("%d\n", C);
   printf("%d\n", a);
   printf("%d\n", b);
   printf("%d\n", c);
   printf("%d\n", "0");
   //printf("%d\n", 1);
   //printf("%d\n", 2);
   //printf("%d\n", $);
   //printf("%d\n", *);
   //printf("%d\n", +);
   //printf("%d\n", /);
   //printf("%d\n",  );
   return 0;
}
*/      // end of fourth program
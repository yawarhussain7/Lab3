/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar(); 

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }
  if(agi <=  4000 && numChildren >=1 && numChildren <= 2 )
  {
    tax = tax;
    totalTax = tax;
    childCredit = childCredit;
  }
  else if(agi <= 20000 && numChildren == 0)
  {
    tax = (agi - 2002);
    totalTax = tax;
    childCredit = childCredit;
  }
  else if(agi <= 120000 && numChildren == 3)
  {
    tax  = (agi - 11,897.00);
    
  }
  else
  {
    printf("invalid \n");
  }
  //TODO: compute the tax, child credit, and total tax here

  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}

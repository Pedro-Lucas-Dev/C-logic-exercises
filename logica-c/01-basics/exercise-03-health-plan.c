/*
 * ============================================================
 *  PROBLEM
 * ============================================================
 *  Exercise 3
 *
 *  Create a program that reads a person's age and number of
 *  children, and calculates the health plan price proposal
 *  for that person.
 *
 *  The proposal is calculated from the plan's base price of
 *  R$ 200.00, plus R$ 83.00 for each child.
 */

 #include <stdio.h>

 /* ============================================================
  *  MY SOLUTION
  * ============================================================ */
 int main(void)
 {
    int age, children;
    float basePrice = 200, plus = 83, planPrice;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter how many children you have: ");
    scanf("%d", &children);

    planPrice = (plus * children) + basePrice;
    printf("Your age is %d", age);
    printf("\nThe price of your plan is: %.2f", planPrice);

    /* For testing only (Windows): keeps the window open when running the .exe. */
    printf("\nPress Enter to exit...");
    getchar();
    getchar();
    return 0;
 }
 
 /*
  * ============================================================
  *  COURSE SOLUTION
  * ============================================================
  *

  #include<stdio.h>

  int main() {

    int idade, numeroFilhos;
    float propostaPlanoSaude;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    printf("Informe o numero de filhos: ");
    scanf("%d", &numeroFilhos);

    propostaPlanoSaude = 200 + (83 * numeroFilhos);
    
    printf("\nO valor do seu plano de saude ficara em R$ %.2f", propostaPlanoSaude);

  }
   
*/
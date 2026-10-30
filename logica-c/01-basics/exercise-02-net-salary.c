/*
 * ============================================================
 *  PROBLEM
 * ============================================================
 *  Exercise 2
 *
 *  Create a program that reads the name and the gross salary
 *  of an employee and prints the employee's name and net salary.
 *
 *  The net salary is the gross salary minus the deductions.
 *
 *  Deductions:
 *      a. IR (income tax)    - 15%  of the gross salary
 *      b. VT (transport)     - 6%   of the gross salary
 *      c. VR (meal voucher)  - 1.5% of the gross salary
 */

 #include <stdio.h>

 /* ============================================================
  *  MY SOLUTION
  * ============================================================ */
 int main(void)
 {
    char name[20];
    float grossSalary, netSalary, IR, VT, VR, deductions;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your gross salary: ");
    scanf("%f", &grossSalary);   

    IR = (grossSalary * 15) / 100;
    VT = (grossSalary * 6) / 100;
    VR = (grossSalary * 1.5) / 100;
    deductions = IR + VT + VR;
    netSalary = grossSalary - deductions;

    printf("%s", name);
    printf("\nYour net salary is: %.2f", netSalary);


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
  *  (paste the course's answer here, commented out)
  */
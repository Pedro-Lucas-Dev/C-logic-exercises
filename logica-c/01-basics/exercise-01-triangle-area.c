/*
 * ============================================================
 *  PROBLEM
 * ============================================================
 *  Exercise 1
 *
 *  Create a program that reads the base and the height of a
 *  triangle, entered by the user, and calculates the area of
 *  that triangle.
 *
 *  The area of a triangle is calculated by taking its base
 *  multiplied by its height, divided by two.
 */

 #include <stdio.h>

 /* ============================================================
  *  MY SOLUTION
  * ============================================================ */
 int main(void)
 {

  float base,height,area;

  printf("Enter the base of the triangle: ");
  scanf("%f", &base);
  printf("Enter the height of the triangle: ");
  scanf("%f", &height);

  area = (base * height) / 2;
  printf("This is the area of the triangle: %.2f", area);


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
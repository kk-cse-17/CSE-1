#include <stdio.h>
int main()
{ printf("WELCOME TO CALCULATOR\n");
  printf("CHOICE 1: Addition\n");
  printf("CHOICE 2: Subtraction\n");
  printf("CHOICE 3: Multiplication\n");
  printf("CHOICE 4: Division\n");
  int choice;
  printf("Enter your choice (1, 2, 3, 4): ");
  scanf("%d", &choice);

  float num1, num2, result;

   if(choice==1) 
    {
      printf("Enter two numbers for addition: ");
      scanf("%f %f", &num1, &num2);
      result = num1 + num2;
      printf("%.2f + %.2f = %.2f\n", num1, num2, result);
      
    }
    else if(choice==2)
    {
      printf("Enter two numbers for subtraction: ");
      scanf("%f %f", &num1, &num2);
      result = num1 - num2;
      printf("%.2f - %.2f = %.2f\n", num1, num2, result);
      
    }
    if(choice==3)
    {
      printf("Enter two numbers for multiplication: ");
      scanf("%f %f", &num1, &num2);
      result = num1 * num2;
      printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    }
    else if(choice==4)
    {
      printf("Enter two numbers for division: ");
      scanf("%f %f", &num1, &num2);
      if (num2 != 0) 
      {
        result = num1 / num2;
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
      } 
      else {
        printf("Error: Division by zero is not allowed.\n");
      }
      
    }
     else{      printf("Invalid choice.\n");
     }


    return 0;
}
  

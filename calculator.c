#include <stdio.h>

int main(){
    int choice;
    float num1, num2, result;

    // Making running loop till user chooses to exit
    while(1){
        printf("\n---- SIMPLE CALCULATOR ---- \n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Find the remainder\n");
        printf("6.Exit\n");
        printf("Choose (1-6): ");
        scanf("%d", &choice);
        
        if (choice == 6){
            printf("Exiting the calculator");
            break;
        }

        //Performing basic operation based on choice

        if(choice == 1){
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter Second number: ");
            scanf("%f", &num2);
            result = num1+num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
        }
        else if (choice == 2){
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter Second number: ");
            scanf("%f", &num2);
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
        }
        else if(choice == 3){
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter Second number: ");
            scanf("%f", &num2);
            result = num1*num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
        }
        else if (choice == 4){
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter Second number: ");
            scanf("%f", &num2);
            if (num2 == 0){
                printf("Error cannot divide by 0 \n");
            }
            else{

                result = num1/num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
        }
        else if(choice == 5){
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter Second number: ");
            scanf("%f", &num2);
            
            if (num2==0){
                printf("You can't divide a number by 0");
            }
            else{
                result = (int)num1 % (int)num2;
                printf("Result: %.2f %% %.2f = %.2f\n", num1, num2, result);
            }
        }
        else {
            printf("Enter a valid choice");
        }
    }

    return 0;
}
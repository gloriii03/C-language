#include <stdio.h>

// Function declarations
void display_menu();
void perform_operation(int operation, int num1, int num2, int results[], int *index);

int main() {
    int choice, num1, num2, results[10], result_index = 0;
    
    while(1) {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        }
        
        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select a valid option.\n");
            continue;  // Jump back to the beginning of the loop
        }

        printf("Enter two numbers (num1 num2): ");
        scanf("%d %d", &num1, &num2);
        
        perform_operation(choice, num1, num2, results, &result_index);

    
    }
    return 0;
}

void display_menu() {
    printf("\nMenu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
}

void perform_operation(int operation, int num1, int num2, int results[], int *index) {
    int result;
    
    switch(operation) {
        case 1: // Addition
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;

        case 2: // Subtraction
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;

        case 3: // Multiplication
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;

        case 4: // Division
            if(num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
                return; // Exit the function if division by zero occurs
            }
            result = num1 / num2;
            printf("Result: %d / %d = %d\n", num1, num2, result);
            break;

        default:
            printf("Invalid operation!\n");
            return;
    }
    
    results[*index] = result;
    (*index)++;
}

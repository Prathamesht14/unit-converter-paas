#include <stdio.h>

int main() {
    int choice;
    float celsius, fahrenheit;
    float km, miles;
    float inr, usd;
    float sgpa, cgpa, percentage;
    char grade;

    printf("===== UNIT CONVERTER PROJECT =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Kilometer to Miles\n");
    printf("3. INR to USD\n");
    printf("4. SGPA to Percentage\n");
    printf("5. CGPA to Percentage\n");
    printf("6. Percentage to Grade\n");
    printf("7. Grade to Percentage (approx)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9/5) + 32;
            printf("Fahrenheit = %.2f\n", fahrenheit);
            break;

        case 2:
            printf("Enter Kilometers: ");
            scanf("%f", &km);
            miles = km * 0.621371;
            printf("Miles = %.2f\n", miles);
            break;

        case 3:
            printf("Enter INR: ");
            scanf("%f", &inr);
            usd = inr / 83; // fixed rate
            printf("USD = %.2f\n", usd);
            break;

        case 4:
            printf("Enter SGPA: ");
            scanf("%f", &sgpa);
            percentage = (sgpa * 10) - 7.5;
            printf("Percentage = %.2f%%\n", percentage);
            break;

        case 5:
            printf("Enter CGPA: ");
            scanf("%f", &cgpa);
            percentage = (cgpa * 10) - 7.5;
            printf("Percentage = %.2f%%\n", percentage);
            break;

        case 6:
            printf("Enter Percentage: ");
            scanf("%f", &percentage);

            if (percentage >= 90)
                printf("Grade = A\n");
            else if (percentage >= 75)
                printf("Grade = B\n");
            else if (percentage >= 60)
                printf("Grade = C\n");
            else if (percentage >= 40)
                printf("Grade = D\n");
            else
                printf("Grade = Fail\n");
            break;

        case 7:
            printf("Enter Grade (A/B/C/D/F): ");
            scanf(" %c", &grade);

            switch(grade) {
                case 'A':
                    printf("Percentage ≈ 90-100\n");
                    break;
                case 'B':
                    printf("Percentage ≈ 75-89\n");
                    break;
                case 'C':
                    printf("Percentage ≈ 60-74\n");
                    break;
                case 'D':
                    printf("Percentage ≈ 40-59\n");
                    break;
                case 'F':
                    printf("Percentage < 40\n");
                    break;
                default:
                    printf("Invalid Grade\n");
            }
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
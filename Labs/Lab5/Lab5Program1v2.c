/*
 * DISCLAIMER:
 * This C program was generated with the help of AI (ChatGPT) and is designed to calculate
 * Canadian federal income tax based on provided tax brackets. It assumes no deductions 
 * or special cases and is for educational purposes only. For actual tax calculations, 
 * please consult a tax professional or use certified tax software.
 * 
 * Generated using ChatGPT by OpenAI: https://chat.openai.com/
 */

#include <stdio.h>

/*
 * Function: calculate_tax
 * -----------------------
 * Calculates the total federal income tax owed based on the
 * provided income, using the Canadian tax brackets as defined.
 *
 * Parameters:
 *      income: the total taxable income
 *
 * Returns:
 *      The total tax owed.
 */
double calculate_tax(double income) {
    double tax = 0.0; // Initialize tax to 0

    /*
     * Tax calculation proceeds from the highest bracket downward.
     * For each bracket, the portion of income above the bracket limit
     * is taxed, and then the income is reduced to that limit.
     * We keep adding the tax calculated for each bracket to the total `tax`.
     */

    // Tax at 33% for income above $221,708
    if (income > 221708) {
        tax += (income - 221708) * 0.33;
        income = 221708; // Reduce income to the upper limit of this bracket
    }

    // Tax at 29% for income between $155,625 and $221,708
    if (income > 155625) {
        tax += (income - 155625) * 0.29;
        income = 155625; // Reduce income to the upper limit of this bracket
    }

    // Tax at 26% for income between $100,392 and $155,625
    if (income > 100392) {
        tax += (income - 100392) * 0.26;
        income = 100392; // Reduce income to the upper limit of this bracket
    }

    // Tax at 20.5% for income between $50,197 and $100,392
    if (income > 50197) {
        tax += (income - 50197) * 0.205;
        income = 50197; // Reduce income to the upper limit of this bracket
    }

    // Tax at 15% for income up to $50,197
    tax += income * 0.15;

    return tax; // Return the total calculated tax
}

int main() {
    double income;  // Declare a variable to store the income input by the user
    char continue_calculating = 'y'; // To track if the user wants to calculate again

    // Loop to allow multiple users to input their income and calculate taxes
    while (continue_calculating == 'y' || continue_calculating == 'Y') {

        /*
         * Prompt the user to enter their total taxable income.
         * The income will be used to calculate the federal income tax.
         */
        printf("Enter your income: ");
        scanf("%lf", &income); // Read the income from the user

        // Call the calculate_tax function to determine the tax owed
        double tax = calculate_tax(income);

        // Display the result: total tax owed
        printf("The total tax owed is: $%.2lf\n", tax);

        // Ask if the user wants to calculate taxes for another person
        printf("Do you want to calculate tax for another user? (y/n): ");
        scanf(" %c", &continue_calculating); // Read 'y' or 'n' from the user
    }

    printf("Thank you for using the tax calculator. Goodbye!\n");

    return 0; // Indicate successful completion of the program
}

/*
 * PROMPTS PROVIDED TO GENERATE THIS PROGRAM:
 *
 * 1. "Generate me a C program based on a prompt."
 * 2. Image provided: A scenario with Canadian federal income tax brackets and example outputs.
 * 3. "Now add more block and line comments."
 * 4. "Include a disclaimer that you generated this code at the beginning."
 * 5. "Add on at the end the prompts that I gave you to generate it."
 * 6. "Now make it repeat for a new user after completion."
 * 7. "Update the prompt list at the end."
 */

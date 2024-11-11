/******************************************************************************

Feminization tool

*******************************************************************************/
#include <stdio.h>

// Function to simulate a delay
void delay(int milliseconds) {
    for (long i = 0; i < milliseconds * 100000; i++); // Simple delay loop
}

void displayProgressBar(int progress, int total) {
    int barWidth = 50; // Width of the progress bar
    
    // Calculate the ratio of progress
    float ratio = (float)progress / total;
    int filled = ratio * barWidth; // How much of the bar is filled
    
    printf("[");
    for (int i = 0; i < filled; ++i) {
        printf("=");
    }
    for (int i = filled; i < barWidth; ++i) {
        printf(" ");
    }
    printf("] %d%%\r", (int)(ratio * 100)); // Print the percentage progress
    fflush(stdout); // Make sure it gets printed immediately
}

int main() {
    int totalSteps = 100;
    char name[30];
    int uwuLevel;
    float sassiness;
    int sockLength; // Sock length in cm
    
    // Introduction and user input
    printf("Welcome to the Femboy Transformation Program!\n");
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin); // Get user name
    printf("On a scale of 1-10, how 'UwU' do you want to be?: ");
    scanf("%d", &uwuLevel);
    printf("How sassy do you feel today? (scale of 0.0 to 10.0): ");
    scanf("%f", &sassiness);
    printf("How long are your socks? (cm): ");
    scanf("%d", &sockLength);

    // Start the transformation
    printf("\nInitiating Femboy Transformation for %s...\n", name);
    
    for (int i = 0; i <= totalSteps; ++i) {
        displayProgressBar(i, totalSteps);
        delay(10); // Use delay instead of usleep to simulate progress
        
        // Add funny messages during transformation
        if (i == 20) {
            printf("\nSocks lengthening...\n");
        } else if (i == 40) {
            printf("\nUwU Levels rising...\n");
        } else if (i == 60) {
            printf("\nSassiness reaching maximum potential...\n");
        } else if (i == 80) {
            printf("\nCat ears detected...\n");
        }
    }
    
    // Transformation complete
    printf("\nTransformation Complete! Welcome, %s, to your femboy form!\n", name);
    printf("UwU Level: %d/10\n", uwuLevel);
    printf("Sassiness: %.1f/10.0\n", sassiness);
    printf("Sock Length: %d cm\n", sockLength);
    printf("You are now certified to say 'UwU' and 'OwO' at will!\n");

    return 0;
}
#include <stdio.h>

int main() {
    // Declare variables to store the weight and calculated charge.
    float weight, charge;

    // Prompt the user to enter the weight of the parcel.
    printf("Enter the weight of the parcel in Kg: ");
    
    // Read the user's input and store it in the 'weight' variable.
    scanf("%f", &weight);

    // Check if the entered weight is valid (greater than zero).
    if (weight <= 0) {
        printf("Invalid input! Weight must be a positive number.\n");
    } 
    // Case 1: Weight is up to 10 Kg.
    else if (weight <= 10) {
        charge = weight * 30;
    } 
    // Case 2: Weight is more than 10 Kg but up to 30 Kg.
    else if (weight <= 30) {
        // Charge for the first 10 Kg is fixed (10 * 30).
        // Charge for the remaining weight (weight - 10) is calculated at Rs. 20/Kg.
        charge = (10 * 30) + ((weight - 10) * 20);
    } 
    // Case 3: Weight is above 30 Kg.
    else {
        // Charge for the first 10 Kg is fixed (10 * 30).
        // Charge for the next 20 Kg is fixed (20 * 20).
        // Charge for the remaining weight (weight - 30) is calculated at Rs. 15/Kg.
        charge = (10 * 30) + (20 * 20) + ((weight - 30) * 15);
    }

    // If the weight was valid, print the calculated total charge.
    if (weight > 0) {
       printf("The total charge for the parcel is: Rs. %.2f\n", charge);
    }

    return 0; // End of the program.
}

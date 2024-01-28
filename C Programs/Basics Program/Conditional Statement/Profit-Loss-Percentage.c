// C program to calculate profit percent or loss percent on a transaction

// Here We wil Calculate the profit and loss percentage using the formula

/*

The formula for calculating profit or loss percentage can be expressed as follows:

Profit/Loss Percentage = (Profit or Loss / Cost Price) * 100

Here:
- "Profit or Loss" refers to the numerical value of either profit or loss.
- "Cost Price" is the initial cost of the item or investment.

To calculate profit percentage, if the result is positive, it indicates profit. 

If the result is negative, it indicates a loss.

*/

#include<stdio.h>

// So that percentage is always positive
#include<math.h>

// Defining Function for Percentage calculation
float percentageCalculate(float costPrice, float sellingPrice){

    float percent;

    percent = ( (sellingPrice - costPrice) / costPrice) * 100.0;

    return percent;

}

int main(){

    // Declaring variables
    float cost, sell, percent;;

    // Taking Input
    printf("Enter the Cost Price: ");
    scanf("%f", &cost);

    printf("Enter the Selling Price: ");
    scanf("%f", &sell);

    percent = percentageCalculate(cost, sell);

    // Calling Function
    if( percent >= 0){

        // %% is used to print one % literal
        printf("Profit Percentage is: %f %%", percent);
    }

    else{

        // fabs print the absolute value of percent 
        // Done to make sure it is not negative
        // %% is used to print one % literal
        printf("Loss Percentage is: %f %%", fabs(percent));

    }
}
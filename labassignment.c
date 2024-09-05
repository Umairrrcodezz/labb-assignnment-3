ans 1
THE VALUE IS EXCEEDING INTEGER LIMIT

ANS 2 
#include <stdio.h>

int main() { 
  
    float salary, taxRate, taxAmount, salaryAfterTax;

   
    printf("Enter your salary: ");
    scanf("%f", &salary);

   
    printf("Enter the tax rate (in percentage): ");
    scanf("%f", &taxRate);
 
    taxAmount = (taxRate / 100) * salary;

     
    salaryAfterTax = salary - taxAmount;
    printf("Tax amount to be paid: $%.2f\n", taxAmount);
    printf("Salary after paying tax: $%.2f\n", salaryAfterTax);

    return 0;
ANS 3
#include<stdio.h>
int main(){
    float taxrate, salary, tax, netsalary;
    printf("enter the tax rate :- ");

    scanf("%f", &taxrate);

    printf("Enter your  salary :- ");
    scanf("%f", &salary);

    tax=(taxrate/100) * salary;
    netsalary= salary-tax;
    
    printf("Your net salary is %f\n", netsalary);
    printf("The tax amount is  %f", tax);
    return 0;
}

ANS 4
#include<stdio.h>
int main(){
    
    float average, fuel1, fuel2, total_fuel, cost1, cost2, total_cost;
    int distance=1207;
    printf("Enter the fuel average:- ");
    scanf("%f", &average);
    if (average > 0)
    {
        
        cost1= (distance/average)*118;
        cost2= (distance/average)*123;
        
        fuel1= distance/ average;
        fuel1= distance/ average;
        
        total_cost= cost1+cost2;
        
        total_fuel_consumed= fuel1+fuel2;
        
        printf("Total litres of fuel %f\n", total_fuel);
        printf("The total cost of fuel for round trip is %f", total_cost);
    }
    else{
        
        printf(" Enter a valid average!!!");

    }
    return 0;
    }
ANS 5 = 
#include<stdio.h>
int main(){
    int principle, time, interest_rate;
    float interest;
    printf("enter the Principle amount 100-1,000,000:- ");

    scanf("%d", &principle);

    printf("enter the rate of interest 5 - 10 percent :- ");

    scanf("%d", &interest_rate);

    printf("enter the time period 1-10 in years:- ");

    scanf("%d", &time_period);
    interest= (principle * interest_rate * time)/100;
    printf("Interest will be %f ", interest);
    return 0;
    }
ANS 6 
#include <stdio.h>
int main() {
    
    float x = 5.0, y = 4.0;
    float x1 = 3.0, y1 = 2.0;
 
    float slope = (y1 - y) / (x1 - x);
    printf("The slope of the line passing through the points (%.1f, %.1f) and (%.1f, %.1f) is: %.3f\n", 
           x ,y, x1, y1, slope);
 return 0;
}
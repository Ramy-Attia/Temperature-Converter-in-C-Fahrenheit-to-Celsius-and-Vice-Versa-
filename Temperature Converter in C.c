#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
char user_input;//declaring variable user_input to store choice of user
float degree;//declaring variable degree to hold users desired temperature value
printf("what type of temperature will you be entering? (F/C):");
scanf("%c",&user_input);

if (user_input == 'F' || user_input== 'f'){// if statement here is used to check if user inputs F or f to check if user wants to enter a Fahrenheit temperature
printf( "please enter degree in Fahrenheit:");
scanf("%f",&degree);
printf("\n");

printf("Fahrenheit degree to be converted to Celsius: %.2f\n",degree);
degree = (degree-32)/1.8;// Fahrenheit to Celsius equation used to convert value of user input temperature to celsius
printf("degree in Celsius is: %.2fC\n",degree);// prints user temperature in celsius
}

if (user_input == 'C' || user_input== 'c'){// this whole if statement is identical to the past if statement yet it used for case of user entering celcius degree to convert to Fahrenheit
printf( "please enter degree in Celsius:");
scanf("%f",&degree);
printf("\n");

printf("Celsius degree to be converted to Fahrenheit: %.2f\n",degree);
degree = degree *1.8 +32;//same idea as last equation yet here it will convert from Celsius to Fahrenheit
printf("degree in Fahrenheit is: %.2fF\n",degree);
}
}

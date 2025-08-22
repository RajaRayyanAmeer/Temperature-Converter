#include<iostream>
#include<cmath>
using namespace std;
float Fahrenheit_to_Celsius();        // Function prototypes
float Celsius_to_Fahrenheit();        // Function prototypes
int main()
{
 int choice;
 cout<<"\n\n\t\t\t\t\tTemperature Converter: ";        
 while (true)           // Infinite loop to repeatedly prompt user for input
       {
        cout<<"\n\t\t\tChoose an Option:\n";
        cout<<"\t\t1. Temperature from Fahrenheit to Celsius.\n";
        cout<<"\t\t2. Temperature from Celsius to Fahrenheit.\t";
        cin>>choice;
        switch (choice)         // Switch statement to handle user input
        {
         case 1:
                Fahrenheit_to_Celsius();      // Call Fahrenheit_to_Celsius function
                break;
         case 2:
                Celsius_to_Fahrenheit();      // Call Celsius_to_Fahrenheit function
                break;
         default:
                cout << "\n\t\t\tERROR...\n"; // Display error message for invalid input
        }
       }
 return 0;
}
float Fahrenheit_to_Celsius()          // Function to convert Fahrenheit to Celsius
{
 float temperature;
 char option;
 cout<<"\n\t\t\tEnter the Value of Temperature: ";      // Prompt user to enter temperature in Fahrenheit
 cin>>temperature;
 float Celsius = (temperature - 32.0) * (5.0 / 9.0);     // Calculate Celsius temperature
 cout<<"\n\t\t\t"<<temperature<<" is in Fahrenheit.";
 cout<<"\n\t\t\tAfter Conversion In Celsius: "<<Celsius<<"C";
 cout<<"\n\t\t\tWant to Countinue or Exit? For YES, Press Y and For NO, Press N... ";   // Ask user if they want to continue or exit
 cin>>option;
 if (option == 'Y')
    {
     cout << "\n\t\t\t\t\t\tLOOKS LIKE YOU LIKE MY PROGRAM!!\n";
    }
 else
    {
     exit(0);
    }
}
float Celsius_to_Fahrenheit()          // Function to convert Celsius to Fahrenheit
{
    float temperature;
    char option;
    cout<<"\n\t\t\tEnter the Value of Temperature: ";      // Prompt user to enter temperature in Celsius
    cin>>temperature;
    float Fahrenheit = (temperature * (9.0 / 5.0)) + 32.0;  // Calculate Fahrenheit temperature
    cout<<"\n\t\t\t"<<temperature<<" is in Celsius.";
    cout<<"\n\t\t\tAfter Conversion In Fahrenheit: "<<Fahrenheit<<"F";
    cout << "\n\t\t\tWant to Countinue or Exit? For YES, Press Y and For NO, Press N... ";      // Ask user if they want to continue or exit
    cin >> option;
    if (option == 'Y')
    {
     cout << "\n\t\t\t\t\t\tLOOKS LIKE YOU LIKE MY PROGRAM!!\n";
    }
    else
    {
     exit(0);
    }
}           
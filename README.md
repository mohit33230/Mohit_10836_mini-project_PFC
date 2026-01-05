Toll Booth Vehicle Count System
📌 Overview

This C program simulates a Toll Booth Vehicle Count System.
It allows the user to enter vehicle types passing through a toll booth and generates a summary report showing the total count for each vehicle type and the overall total.

The program uses arrays, loops, functions, and basic input validation.

🚗 Vehicle Type Mapping
Code	Vehicle
0	Car
1	Bus
2	Truck
3	Bike
✨ Features

Counts four different vehicle types

Prevents invalid vehicle type entries

Displays a formatted summary report

Uses a separate function to display results

Simple and easy-to-understand logic

🛠 How the Program Works

Initializes an array to store counts for each vehicle type.

Displays vehicle type mapping to the user.

Asks the user how many vehicle entries they want to record.

Accepts vehicle type input for each entry.

Validates input (only accepts values from 0 to 3).

Increments the count for the selected vehicle type.

Calls a function to display the final report.

Calculates and displays the total number of vehicles passed.

▶️ How to Compile and Run
Compile
gcc toll_booth.c -o toll_booth

Run
./toll_booth

🧪 Sample Input
Enter number of vehicle entries: 5
Enter vehicle type (0-3): 0
Enter vehicle type (0-3): 1
Enter vehicle type (0-3): 2
Enter vehicle type (0-3): 3
Enter vehicle type (0-3): 0

📊 Sample Output
--- Toll Booth Vehicle Report ---
Cars   : 2
Buses  : 1
Trucks : 1
Bikes  : 1
Total Vehicles Passed: 5

📚 Concepts Used

Arrays

Functions

Loops

Conditional statements

Input validation

Standard I/O in C

🧑‍💻 Author

Created as a simple demonstration of array usage and function implementation in C.

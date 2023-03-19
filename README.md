# Arithmetic-progression

This code is an implementation of various arithmetic progression (AP) functions in C programming language.

The main function presents a menu-driven interface to the user, displaying six different options. The options include:

Finding the nth term of an AP
Printing the first n terms of an AP
Printing particular terms of an AP
Finding three consecutive numbers using their sum and product
Finding the sum of the square of three consecutive numbers
Exiting the program
The user is prompted to choose one of these options by entering a number between 1 and 6. The chosen function is then called based on the user's input.

The menu has six options, each of which corresponds to a specific problem:

FindNthTerm(): This function takes input from the user for the first term (a), the difference (d), and the term number (n), and then calculates and displays the nth term of the arithmetic progression using the formula: result = a + (n-1)*d.

printNTerms(): This function takes input from the user for the first term (a), the difference (d), and the number of terms (n), and then prints the first n terms of the arithmetic progression using a for loop.

particular(): This function takes input from the user for the first term (a), the difference (d), the starting term (st), and the number of terms (n), and then prints the n terms of the arithmetic progression starting from the st term.

Find3TermUsingSumProduct(): This function takes input from the user for the sum and product of three consecutive terms of an arithmetic progression, and then calculates and displays the three consecutive terms using the formulas: a = sum/3 and d = sqrt(a^2 - (product/a)), where a is the second term in the sequence.

Find3TermUsingSumandSquare(): This function takes input from the user for the sum and sum of squares of three consecutive terms of an arithmetic progression, and then calculates and displays the three consecutive terms using the formulas: a = sum/3 and d = sqrt((2sum_of_squares - 3a^2)/2), where a is the second term in the sequence.

Exit: This option simply exits the program.

Once the user selects an option, the main function calls the corresponding function from the functions file, which performs the necessary calculations and displays the results.

The functions file contains five functions, one for each problem that the user can solve. Each function takes input from the user as necessary and then performs the necessary calculations and displays the results.

In summary, this program is designed to solve different arithmetic progression problems based on user input. It displays a menu of options to the user, each of which corresponds to a specific problem. The user selects an option, and the program calls the corresponding function to solve the problem and display the results.

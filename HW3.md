## Problem 1 										(60 points)

Create a ```C``` program that performs binary-to-decimal and decimal-to-binary conversions.

Organize the code into three separate ```C``` files:
- ```binconv.c```: The main function that handles user input and output.
- ```bin2dec.c```: A function to convert binary strings to decimal integers.
- ```dec2bin.c```: A function to convert decimal integers to binary strings.

Implement the ```bin2dec``` function to:
- Take a binary string as input.
- Convert the binary string to its equivalent decimal integer using appropriate algorithms (e.g., Horner's method).
- Return the decimal integer result.

Implement the ```dec2bin``` function to:
- Take a decimal integer as input.
- Convert the decimal integer to its equivalent binary string representation.
- Return the binary string result.

In the ```binconv.c```, the main function provides a user-friendly interface that:
- Prompts the user to enter a binary number or a decimal number.
- Calls the appropriate conversion function based on the user's choice.
- Displays the converted result to the user.
- Offers the option to continue converting or exit the program.

Use header files (```bin2dec.h``` and ```dec2bin.h```) to declare function prototypes with guard statements.

Implement error checking to handle invalid input formats (e.g., non-binary characters in binary strings).

Provide informative error messages to the user. Compile each ```.c``` file separately using a ```C``` compiler.

Link the compiled object files to create an executable named ```binconv```.

Example usage is as follows:

```
Enter a binary number or a decimal number (b for binary, d for decimal): b
Enter a binary number: 1011
Decimal equivalent: 11

Continue (y/n)? y

Enter a binary number or a decimal number (b for binary, d for decimal): d
Enter a decimal number: 42
Binary equivalent: 101010
```


## Problem 2 										(40 points)

Create a ```C``` program that allows users to manipulate individual bits within a 4-byte integer variable. Initialize a 4-byte integer variable to all zeros. Enter a loop that continuously prompts the user for input.

Display a menu with the following options:
- 1: Set a bit
- 2: Clear a bit
- 3: Print the integer
- 4: Exit the program

If the user chooses to set or clear a bit:
- 1: Prompt for the bit number (0-31).
- 2: To modify the corresponding bit, use bitwise operations (e.g., ```|, &, ~```).

Print the current value of the integer in 2's complement representation.

Validate user input to ensure it's within the valid range for bit numbers. Handle invalid menu choices gracefully.

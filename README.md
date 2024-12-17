# Bubble Sort Program

## Overview

This C program implements the **Bubble Sort** algorithm to sort a list of integers in ascending order. It allows users to input a series of numbers, sorts them, and displays the sorted array. The program also offers the option to restart and sort another set of integers, providing a simple and interactive experience.

## Features

- The program asks the user to input how many values they want to sort.
- It validates user input to ensure only valid integers are entered.
- The program uses the **Bubble Sort** algorithm to sort the numbers in ascending order.
- After sorting, the sorted array is displayed.
- The user can choose to restart the program and sort another set of integers.
- The program handles invalid inputs and allows retrying a set number of times.

## Prerequisites

- A **C compiler** (such as **GCC**) is required to compile and run the program.
- A Linux environment with the **`compile`** script installed (for simplifying the compile and run process).

## File Description

The main program file is `sort.c`.

### Key Variables:
- **userInput**: Stores the number of integers the user wants to sort.
- **userNumber**: Holds each number input by the user.
- **array[]**: The array that stores the user input values.
- **constant**: Temporary variable used for swapping values during sorting.
- **restart**: User's choice to restart the program (1 for yes, 0 for no).
- **invalid**: Tracks the number of invalid input attempts.
- **trial**: Maximum number of invalid input attempts allowed.

### Functions:
1. **Main Function**: Controls the main flow of the program, including input collection, sorting, and restart functionality.
2. **Input Validation**: Ensures that the user inputs only valid integers.
3. **Bubble Sort**: Sorts the array of integers in ascending order using the bubble sort algorithm.
4. **Restart Mechanism**: Prompts the user to restart the program after sorting the current set of integers.

---

## How to Compile and Run

### Option 1: Manually Compile the Program

1. **Compile the Program**:

   Open a terminal and use the following command to compile the C program:

   ```bash
   gcc sort.c -o sort
   ```

2. **Run the Program**:

   After compiling, execute the program with the following command:

   ```bash
   ./sort
   ```

3. **Interacting with the Program**:

   - The program will first prompt you to input how many values you wish to sort. Enter a positive integer greater than 1.
   - You will then be asked to input the integers you want to sort.
   - After sorting the numbers, the program will display the sorted array.
   - You will be asked if you want to restart the program. Input `1` to restart or `0` to exit.

---

### Option 2: Compile Using Custom Script (Linux Users)

For Linux users, you can simplify the compilation process using a custom script that automatically compiles **and runs** your program without needing to manually execute the generated executable. This script also provides an interactive error reporting system for easier debugging.

1. **Install the Script**:
   You can download the script from the [project repository](https://github.com/n1lby73/c-compiler).

   To install, run:

   ```bash
   git clone https://github.com/n1lby73/c-compiler
   cd c-compiler
   sudo bash install.sh
   ```

2. **Usage**:
   After installation, you can use the `compile` command from any directory you're working on to compile and run your C program. For example, to compile the `sort.c` program, run:

   ```bash
   compile <file_path_or_program_name>
   ```

   This command will:
   - Automatically compile the C program.
   - Run the program if there are no compilation errors.
   - If there is an error during compilation, the script will prompt you to view the error or debug it yourself.

   Example usage:

   ```bash
   compile sort.c
   ```

   This will:
   - Compile the `sort.c` file.
   - Run the compiled program (without leaving an executable file behind).
   - If there is an error, it will ask whether you want to view the error or handle it yourself.

3. **Script Behavior**:
   - If compilation succeeds, the script runs the program and deletes the generated executable after running it.
   - If there's a compilation error, the script will offer to show the error message or allow you to debug it yourself.
   - If the file or path is invalid, the script will notify you.

For more details on how to install and use the script, visit the [project repository](https://github.com/n1lby73/c-compiler).

---

## Sample Output

```
How many values do you want to sort: 5

Input value number 1: 7
Input value number 2: 3
Input value number 3: 5
Input value number 4: 2
Input value number 5: 9

Your sorted array is:

2
3
5
7
9

Do you want to restart the program
1 ==> yes
0 ==> no
Please choose: 1

How many values do you want to sort: 3
Input value number 1: 12
Input value number 2: 8
Input value number 3: 5

Your sorted array is:

5
8
12

Do you want to restart the program
1 ==> yes
0 ==> no
Please choose: 0

Thanks for using this program
```

---

## Error Handling

- **Invalid Input**: If the user enters a non-integer value, the program will prompt them to enter a valid integer.
- **Input Retry Limit**: If the user enters an invalid restart option more than 3 times, the program will terminate.

---

## Contribution

Feel free to contribute to this project by forking the repository, reporting issues, and submitting pull requests for bug fixes or improvements.

---

## License

This project is open source and available under the **GNU General Public License (GPL)** version 3.0.

### GPL-3.0 License Details:

- You are free to use, modify, and distribute the code.
- If you modify and distribute the code, you must release it under the same license and provide source code when distributing binaries.
- The code is provided "as-is", without any warranty, express or implied.

For more details, see the full [GNU General Public License (GPL) v3.0](https://www.gnu.org/licenses/gpl-3.0.html).

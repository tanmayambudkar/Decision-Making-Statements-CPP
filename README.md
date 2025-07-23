# Aim: To study and implement C++ decision making statements
# Software Required:
Visual Studio
# Theory:
Decision-making is the process to make a decision about which part of the code should be executed or not based on some condition. Decision-making in C++ involves the usage of conditional statements (also called decision control statements) to execute specific blocks of code primarily based on given situations and their results.

<img width="500" height="500" alt="Screenshot 2025-07-20 095740" src="https://github.com/user-attachments/assets/f59a21f2-2f8e-44e5-9de9-835abafe3e9e" />

1. <ins>if Statement:</ins>
In C++, the if statement is the simplest decision-making statement. It allows the execution of a block of code if the given condition is true. The body of the if statement is executed only if the given condition is true.

2. </ins>if-else Statement</ins>
The if else is a decision-making statement allows us to make a decision based on the evaluation of a given condition. If the given condition evaluates to true then the code inside the 'if' block is executed and in case the condition is false, the code inside the 'else' block is executed.

3. </ins>if else if Ladder</ins>
The if else if Ladder statements allow us to include additional situations after the preliminary if condition. The 'else if' condition is checked only if the above condition is not true, and the `else` is the statement that will be executed if none of the above conditions is true. If some condition is true, then not only the associated block is executed.

4. </ins>Nested if else</ins>
The nested if else statement contains an 'if' statement inside another 'if' statement. This structure lets in more complex selection-making by way of comparing multiple conditions. In this type of statement, multiple conditions are checked, and then the body of the last if statement is executed.

5. </ins>Switch Statement</ins>
In C++, the switch statement is used when multiple situations need to be evaluated primarily based on the value of a variable or an expression. switch statement acts as an alternative to multiple if statements or if-else ladder and has a cleaner structure and it is easy for handling multiple conditions.

 # Implementation:
 Based on the above decision making statements in C++ , Simple programs have been used to help understand how decision making statements work in c++.
 The programs are:
 + Odd-Even check
 + Vowel Check
 + Finding the largest number from three given numbers by the user
 + Making a Calculator using Switch Case
 + Made a ticket booking platform using Switch Case

# Algorihtms:
Program 1:

Objective:
To determine whether a user-entered number is even or odd.

Steps:

1. Start

2.  Ask the user to enter an integer (a)

3. Read input into variable a

4. Check divisibility of a by 2:

If a % 2 == 0, then:

Display "This is an even number"

Else:

Display "This is an Odd number"

5. End

Program 2:

Objective:
To determine whether the character entered by the user is a vowel or a consonant.

Steps:

1. Start

2. Declare a character variable str

3. Ask the user to enter a character

4. Read the input into str

   Check if the character is a vowel:

If str is equal to 'a', 'e', 'i', 'o', 'u' (or their uppercase forms), then:

Display "The Character entered is a Vowel"

Else:

Display "The Character entered is a Consonant"

5. End

Program 3

Objective:

To determine and display the largest number among three user-entered integers.

Steps:

1. Start

2. Declare three integer variables: a, b, c

3. Ask user to enter three numbers

4. Read input values into a, b, and c

5. Initialize num ← a

6. Compare b and c with num:

If b > num, set num ← b

If c > num, set num ← c

7. Display the largest number (num)

8. End

Program 4:

Objective:
To perform one of four basic arithmetic operations—Addition, Subtraction, Multiplication, or Division—based on user input.

Steps:

1. Start

2. Declare float variables a, b, sum, sub, mul, Div and integer num

3. Ask user to enter two numbers

4. Read inputs into a and b

5. Ask user to select an operation:

1 → Addition

2 → Subtraction

3 → Multiplication

4 → Division

5 → Exit

6. Read input into num

7. Use a switch-case statement to perform the selected operation:

Case 1: sum ← a + b

Case 2: sub ← a - b

Case 3: mul ← a * b

Case 4: Div ← a / b

Case 5: exit

If the user choose exit, then it prints, "Thankyou For Using the Calculator, Hope To See You Soon!!!"

Default: Display invalid input message

8. Display the result of the selected operation

9. End

Program 5:

Objective:
To Create A Ticket Booking Platform Using Switch Case.

1. Start Program
Display a welcome message for the ticket booking platform.

2. Main Menu
Present transport mode options to the user:

Railways

Airways

Roadways

Prompt the user to enter their choice and read the input.

3. Mode Selection (Based on User Choice)
Case 1: Railways
Display "Departure From" options:

a. Pune

b. Mumbai

c. Nashik

Ask the user to choose a departure location and read input.

a. If Pune Selected
Show arrival options:

e. Mumbai

f. Nashik

Ask for arrival location and read input.

If 'e' (Mumbai): Display the route and fare (₹1500).

If 'f' (Nashik): Display the route and fare (₹600).

If neither, prompt for a valid option.

b. If Mumbai Selected
Show arrival options:

g. Pune

h. Nashik

Ask for arrival location and read input.

If 'g' (Pune): Display route and fare (₹1500).

If 'h' (Nashik): Display route and fare (₹560).

If neither, prompt for a valid option.

c. If Nashik Selected
Show arrival options:

i. Mumbai

j. Pune

Ask for arrival location and read input.

If 'i' (Mumbai): Display route and fare (₹560).

If 'j' (Pune): Display route and fare (₹700).

If neither, prompt for a valid option.

If none of the main departure options (a, b, c) are chosen, prompt for a valid option.

Case 2: Airways
Display "Departure From" options:

a. Pune

b. Mumbai

c. Delhi

Ask for user selection.

a. If Pune Selected
Show arrival options:

d. Mumbai

e. Delhi

Ask for arrival location.

If 'd': Display route and fare (₹4500).

If 'e': Display route and fare (₹6000).

If neither, prompt for a valid option.

b. If Mumbai Selected
Show arrival options:

f. Pune

g. Delhi

Ask for arrival location.

If 'f': Display route and fare (₹4500).

If 'g': Display route and fare (₹6000).

If neither, prompt for a valid option.

c. If Delhi Selected
Show arrival options:

h. Mumbai

i. Pune

Ask for arrival location.

If 'h': Display route and fare (₹6000).

If 'i': Display route and fare (₹5000).

If neither, prompt for a valid option.

If none of the main departure options (a, b, c) are chosen, prompt for a valid option.

Case 3: Roadways
Display "Departure From" options:

a. Pune

b. Mumbai

c. Nagpur

Ask for user selection.

a. If Pune Selected
Show arrival options:

d. Mumbai

e. Nagpur

Ask for arrival location.

If 'd': Display route and fare (₹550).

If 'e': Display route and fare (₹2000).

If neither, prompt for a valid option.

b. If Mumbai Selected
Show arrival options:

f. Pune

g. Nagpur

Ask for arrival location.

If 'f': Display route and fare (₹600).

If 'g': Display route and fare (₹1000).

If neither, prompt for a valid option.

c. If Nagpur Selected
Show arrival options:

h. Mumbai

i. Pune

Ask for arrival location.

If 'h': Display route and fare (₹1100).

If 'i': Display route and fare (₹2000).

If neither, prompt for a valid option.

If none of the main departure options (a, b, c) are chosen, prompt for a valid option.

Default Case (Invalid Mode)
If user selects an option other than 1, 2, or 3, show a "Please Select Valid Option!!!" message.

4. End Program
After booking confirmation or error message, the program finishes.


# Conclusion:
The Programs helps to understand the logic and flow of the decision making statements available in C++

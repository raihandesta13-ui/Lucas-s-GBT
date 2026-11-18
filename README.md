# Lucas-s-GBT
Lucas's GBT is a beginner C++ console chatbot project. It can respond to simple greetings and recognize basic arithmetic requests involving the numbers 1 to 10.

The project is written in C++ and uses standard library features for console input/output and short delays while processing some messages.
Features
- Asks the user to enter their name.
- Greets the user and uses their name in some responses.
- Recognizes simple greetings such as hello and hi.
- Provides predefined responses for basic arithmetic operations:
  - Addition (+, add, plus)
  - Subtraction (-, subtract, minus)
  - Multiplication (x, X, multiply)
  - Division (/, ÷, divide)
- Includes short processing delays for some chatbot responses.
- Uses the \a escape sequence in output strings to request the terminal's alert/bell sound.
Example
*/
Enter your name: Alex

What can I do for you, Mr. Alex?
> hello
Processing your message...
Hello again...

> 1+2
Of course! The result of 1 + 2 is 3
*/
The exact response depends on the input and the conversation turn.
Requirements
- A C++ compiler that supports C++11 or later (for example, GCC or MinGW).
- A terminal or command prompt to run the program.
How to Compile and Run
Using GCC / MinGW
1. Download or clone this repository.
2. Open a terminal in the project folder.
3. Compile the source file:
   g++ -std=c++11 Lucas_GBT_English.cpp -o LucasGBT
4. Run the program:
   Windows:
   LucasGBT.exe
   Linux / macOS:
   ./LucasGBT
Notes
- Lucas's GBT uses predefined responses for arithmetic combinations rather than calculating every possible expression dynamically.
- The program is designed around numbers from 1 to 10.
- The main conversation loop accepts up to 100 user inputs in one run.
- The \a alert sound depends on the terminal and system settings. Some terminals may not play an audible sound.
Project Status
This is a personal learning project that demonstrates the use of C++ basics, including variables, strings, conditional statements, loops, console input/output, and standard library utilities.
Author
Created by Lucas_pre.man.

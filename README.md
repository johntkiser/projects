# Project Two from CS 210 at SNHU

The premise of this project was to create an Object Oriented C++ program to calculate investment growth based on compounding interest from deposits to a saving account. The program allows users to enter an initial deposit amount, a monthly deposit amount, an annual interest rate, and a number of years to project monetary growth. The program would then calculate the return and display the amounts including the monthly deposits, as well as excluding the monthly deposits.

I believe I was able to provide the functionality well through the use of user input checks/validation, and an intuitive User Interface through the use of a console menu. 

I believe the code could have been enhanced by making use of integers instead of floating points due to the subject of the program being money.

Since this was my first Object Oriented programming project using multiple files (additional custom designed .cpp and .h files), I both overcame the challenges required at this point in my programming journey and learned a lot in completing the project. These skills will be constantly used in any project of any size going forward and are a valuable addition to my skillset.

The code was commented thoroughly and follows a relatively industry standard code formatting style to allow maximum ease of maintainability, readability and adaptability.

## Compiling and Running

The code was compiled on MacOS Catalina 10.15.4 using the GNU C++ compiler. To compile and run:

```bash
g++ -o Investments main.cpp Investments.cpp
./Investments
```

/*Edgar Ruiz
  CS 411
  March 1, 2016
*/

Steps to run parser

Step 1: In the terminal, reach the location where “parser.y” and ”lexana.l" is located at.
Step 2: Type in “bison -d parser.y” in the terminal and hit enter. This will generate the “parser.tab.h” and “parser.tab.c” file.
Step 3: Type in "flex lexana.l" in the terminal and hit enter. This will generate a "lex.yy.c" file.
Step 4: Type in "gcc -o parser lex.yy.c parser.tab.c -ll" in the terminal and hit enter. Note: “-ll” is used if on a Mac. On Windows, “-ll” is replaced by “-lfl”.
Step 5: Type in “./parser < *" in the terminal and hit enter. Replace the "*" with the name of the file that will be used for testing the parser.

After these steps, the parser will have a message of [accept] or [reject] once the test file is read to see if it is a valid B program or not.
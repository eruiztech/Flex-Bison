/*Edgar Ruiz
  CS 411
  January 28, 2016
*/

Steps to run "lexana.l"

Step 1: In the terminal, reach the location where "lexana.l" is located at.
Step 2: Type in "flex lexana.l" in the terminal and hit enter. This will generate a "lex.yy.c" file.
Step 3: Type in "gcc lex.yy.c -ll" in the terminal and hit enter. Note: “-ll” is used if on a Mac. On Windows, “-ll” is replaced by “-lfl”.
Step 4: Type in "./a.out *" in the terminal and hit enter. Replace the "*" with the name of the file that will be read by the lexical analyzer.

After these steps, the lexical analyzer will read the file and then print out all the different tokens in the file.
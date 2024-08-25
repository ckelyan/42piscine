# rush02.c breakdown

- declare a pointer to a constant char
 - const means the variable will NOT change after it has been initialized.
- declare row and col, used to keep track of the current x and y coordinates

- check if arguments are valid; values under 1 are forbidden.
 - if it's the case, we write down an error message.

- assign the table of characters we want to print depending on where they are.
 - it is made up of 3 distinct parts;
 - the first part "ABA" means the first character of the first and the last characters of the row should be A and anything between is B
 - same for "B B" (first B then spaces then B)
 - same for "CBC" (first C then B then C)
- assign 0 to the "row" value because we want to start at the first row.

- repeat the following, until row is equal or greater than y:
 - assign 0 to the "col" value because for each row we want to start at the first column
 - repeat the following until col is equal or greater than y:
  - run the function print_col with cur, col and x
  - increment col by 1;
 - if we just printed the row, 

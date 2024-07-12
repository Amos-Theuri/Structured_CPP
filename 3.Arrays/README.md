# Arrays

A method of storing many values of the same type under a single variable name instead of usign many different names for each one.
The name of the different values within an array is elemnts.

- Declaring an array
  type name[n];
  the n stands for the total amount of values to be held by the array eg:-
  double temp[31];
  here the array will hold a total of 31 items.

- Initiating an array
  you can values to an array at declaration, eg :-
  int iNo[5] = {25, 13, 65, 89, 47};
  The values are separeted by commas and enclosed in curly braces.
  While initiating an array it is not necessary to state the number of values it holds as the values assigned will be enumarated right there. Therefor :-
  int iNo[] = {66, 31, 19, 21, 97}; is also correct.

## Copying an array

Every element in an array has to be copied one at a time, therefore a loop is used eg:-
for (int i=1; i<=30; i++)
{
dTempJun[i] = dTempApril
}

## comparing arrays

arrays can be compared through a loop that goes through each element of the arrays being compared and returns a true or false value after each comparison.

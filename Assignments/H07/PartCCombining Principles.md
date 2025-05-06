# Combining Principles:

Adhering to DRY and KISS in a program will help keep it simiple and remove duplication. 
However it favors simplicity first making sure the code doesnt get too abstract or complex.
EX:
This line of code is for calculating tax:
double calculate(double amount, double rate) { return amount * rate; }
however it is not instaly recognizable that it is for tax.
An improvement would look something like this:
double calculateSalesTax(double amount) { return amount * 0.07; }
It does not repeat itself and its clear what it does.
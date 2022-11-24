/*
Requirements:
	1. All different combinations of two digits (00 - 99)
	2. These two 2-digit numbers cannot be the same. 
	3. 00 00, NO. 00 01, YES
*/

#include <unistd.h>

void printChar(char c){
	write (1, &c, 1);
}

void printTwoDigitNumber(int n) {
	// ascii 0: 48
	char tens_ascii = 48 + n / 10;
	char ones_ascii = 48 + n % 10;
	printChar(tens_ascii);
	printChar(ones_ascii);
}

void ft_print_comb2(void) {
	for (int firstNum = 0; firstNum < 99; firstNum++) {
	    for (int secNum = firstNum + 1; secNum < 100; secNum++) {
	        printTwoDigitNumber(firstNum);
	        printChar(' ');
	        printTwoDigitNumber(secNum);
			if (!(firstNum == 98 && secNum == 99)) {
				printChar(',');
				printChar(' ');
			}
	    }
	}
}

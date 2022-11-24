/*
Requirement:
The function can print all the int number using write().
*/

/*
Notes: 
1. Recursion:
	1.1 Recursion: if a function calls itself from inside.
	1.2 Recursion in this part is to convert multi-digit number -> two-digit number. (The main purpose is to get the number in the tens place and above).
	
2. Dealing with -2147483648
	int value range from -2,147,483,648 to 2,147,483,647. So we cannot directly remove the negative sign to deal with the absolute value of the number. If so, we will get a blank.
*/

#include <unistd.h>

void printChar(char c){
	write(1, &c, 1);
}

void ft_putnbr(int nb) {
    // Positive or 0
	if (nb >= 0) {
		if (nb < 10) {
			printChar(48 + nb);
		} else {
		    ft_putnbr(nb / 10);
		    ft_putnbr(nb % 10);
		}
	}
	
	// Negative 
	else {
	    if (nb == -2147483648) {
	        printChar('-');
	        ft_putnbr(2);
	        ft_putnbr(147483648);
	    } else {
	        printChar('-');
	        ft_putnbr(-nb / 10);
	        ft_putnbr(-nb % 10);
	    }
	}
}

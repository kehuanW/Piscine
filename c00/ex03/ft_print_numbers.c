#include <unistd.h>

void ft_print_numbers (void) {

	for (char temp = '0'; temp <= '9'; temp++) {
		write(1, &temp, 1);
	}
}
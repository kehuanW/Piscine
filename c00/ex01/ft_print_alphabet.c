#include <unistd.h>

void ft_print_alphabet (void) {

	for (char temp = 'a'; temp <= 'z'; temp++) {
		write(1, &temp, 1);
	}
}
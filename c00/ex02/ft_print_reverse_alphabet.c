#include <unistd.h>

void ft_print_alphabet (void) {

	for (char temp = 'z'; temp >= 'a'; temp--) {
		write(1, &temp, 1);
	}
}
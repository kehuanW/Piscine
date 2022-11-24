#include <unistd.h>

void ft_is_negative (int n) {
	char status;
	if (n < 0) {
		status = 'N';
		write(1, &status, 1);
	} else {
		status = 'P';
		write(1, &status, 1);
	}
}
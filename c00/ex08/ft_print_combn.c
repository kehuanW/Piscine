
/*
Requirement:
	1. Display all different combinations fo n numbers by ascending order.
	2. 11, NO; 98, NO
*/


#include <unistd.h>
#include <stdbool.h>

void printChar(char c){
	write(1, &c, 1);
}

bool checkIfOrderAscending(int *tempArr, int n) {
	bool flag = true;
	for (int i = 1; i < n; i++){
		if (tempArr[i - 1] >= tempArr[i]) {
			flag = false;
		}
	}
	return flag;
}

void printOrderedArray(int *tempArr, int n) {
    if (checkIfOrderAscending(tempArr, n)) {
        for (int i = 0; i < n; i++) {
            printChar(tempArr[i]+48);
        }
        if (tempArr[0] < (10 - n)) {
            printChar(','); 
            printChar(' ');
        }
	}
}

void ft_print_combn(int n){
	int tempArr[n];
	
	// init array
	for (int i = 0; i < n; i++) {
		tempArr[i] = 0;
	}
	
	int i;
	while(tempArr[0] <= (10-n)) {
		printOrderedArray(tempArr, n);
		tempArr[n - 1] += 1;
		
		i = n - 1;
		while(i > 0) {
			if(tempArr[i] > 9) {
				tempArr[i - 1] += 1;
				tempArr[i] = 0;
			}
			i -= 1;
		}
	}
	
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *reverse(char *str) {
	char *rev;
	for (int i = 0; i < strlen(str)-1; i++) {
		rev[i] = str[strlen(str)-i-1];		
	}
	return rev;
}

int main() {
	char str[] = "sentence";
	int flag = 0;
	for (int i = 0; i < strlen(str)-1; i++) {
		if (strcmp(str, reverse(str)) == 0) {
			flag = 1;
		}
	}
	char *result;
	printf("%s\n", (flag == 1) ? "palindrome" : "not palindrome");;
}

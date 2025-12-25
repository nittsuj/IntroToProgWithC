// simple storing an alphabet array from a sentence

#include <stdio.h>
#include <string.h>
#include <ctype.h>
	
int main() {
	char *sentence = "sentence of words";
       	int each[27] = {0};
	for (int i = 0; i < strlen(sentence)-1; i++) {
		if (isalpha(sentence[i])) {
			each[(tolower(sentence[i]) - 'a')]++;	
		}
	}

	for (int i = 0; i < sizeof(each)/sizeof(each[0]); i++) {
		printf("%d %d\n", i, each[i]);
	}
	return 0;
}

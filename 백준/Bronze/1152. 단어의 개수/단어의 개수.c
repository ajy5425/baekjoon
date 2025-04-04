#include <stdio.h>
#include <string.h>

int main() {

	char s[1000001];
	scanf("%[^\n]", s);
    int word = 0;
    
    if(s[0] != ' ') {
        word++;
    }

	for (int i = 0; i < strlen(s) - 1; i++) {
		if (s[i] == ' ') word++;
	}

	printf("%d", word);

	return 0;
}
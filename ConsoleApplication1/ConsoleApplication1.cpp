#include <stdio.h>

void my_strcopy(char Dest[], char Source[]) {
	int i = 0;
	while (Source[i] != 0) {
		Dest[i] = Source[i];
		i++;
	}
	Dest[i] = 0;
}

int my_strlen(char S[]) {
	int len = 0;
	while (S[len] != 0)
		len++;
	return len;
}

bool my_strcmp(char S1[], char S2[]) {
	int i = 0;
	while (S1[i] != 0 && S2[i] != 0) {
		if (S1[i] != S2[i]) return false;
		i++;
	}
	if (S1[i] != 0 || S2[i] != 0) return false;
	return true;
}

void my_reverse(char S[]) {
	int len = my_strlen(S);
	char temp;
	for (int i = 0; i < len / 2; i++) {
		temp = S[i];
		S[i] = S[len - i - 1];
		S[len - i - 1] = temp;
	}
}

int my_atoi(char S[]) {
	int val = 0;
	for (int i = 0; S[i] != 0; i++) {
		val = val * 10 + S[i] - '0';
	}
}

void my_itoa(int val, char S[]) {
	int i = 0;
	while (val > 0) {
		S[i] = val % 10 + '0';
		val = val / 10;
		i++;
	}
	S[i] = 0;
	my_reverse(S);
}

int main() {
	char S[] = "Hello World";
	int i = 0;
	while (S[i] != 0) {
		if (S[i] != ' ')
			printf("%c", S[i]);
		i++;
	}
}
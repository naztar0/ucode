void mx_printchar(char);

unsigned long mx_strlen(const char*);

void mx_printstr(const char*);


int main(int argc, char const *argv[]) {
	if (argc < 2)
		return 0;
	for (int i = 1; i < argc; i++) {
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}
	return 0;
}

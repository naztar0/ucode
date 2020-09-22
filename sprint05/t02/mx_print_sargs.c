void mx_printchar(char);

unsigned long mx_strlen(const char*);

void mx_printstr(const char*);

int mx_strcmp(const char*, const char*);


int main(int argc, char *argv[]) {
	if (argc < 2)
		return 0;

	int p, i = 1;
	do {
		p = 0;
		for (; i < argc - 1; i++)
			if (mx_strcmp(argv[i], argv[i + 1]) > 0) {
				char* tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				p = 1;
			}
		i = 1;
	} while (p == 1);
	for (i = 1; i < argc; i++) {
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}
	return 0;
}

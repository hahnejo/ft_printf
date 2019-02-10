#include <unistd.h>

int	main() {
	int i = 0;
	char str[5] =  "hello";
	while (str[i]) {
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

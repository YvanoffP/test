#include <unistd.h>

int main(void)
{
	write(1, "salut\n", 6);
	write(1, "cava?\n", 6);
	return (0);
}

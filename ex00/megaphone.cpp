#include <iostream>
#include <cctype>

int main(int argc, char **argv) {
	for (int i = 1; i < argc; ++i) {
		for (int j = 0; argv[i][j] != '\0'; ++j) {
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
		}
		std::cout << " ";
	}
	std::cout << std::endl;
    return 0;
}

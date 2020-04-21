#include <iostream>

int solve_me_first(int&, int&);

int main() {
	std::ios::sync_with_stdio(false);
	
	// Get input from user
	int a,b;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

	// Use the function and print output
	std::cout << solve_me_first(a, b) << std::endl;
	return 0;
}

int solve_me_first(int& p, int& q) {
	return p+q;
}

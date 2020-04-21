#include <iostream>
#include <vector>

int simple_array_sum(std::vector<int>&);

int main() {
	std::ios::sync_with_stdio(false);

	// Get the size
	int s;
	std::cout << "Enter size: ";
	std::cin >> s;

	// Initialise array and get the elements
	std::vector<int> array;
	std::cout << "\nEnter elements\n";
	int elem;
	for(int i=0; i<s; ++i) {
		std::cin >> elem;
		array.push_back(elem);
	}

	// Print output
	std::cout << "\nSum = " << simple_array_sum(array) << std::endl;
	return 0;
}

int simple_array_sum(std::vector<int>& ar) {
	int sum = 0;
	for(int& x : ar) sum += x;
	return sum;
}

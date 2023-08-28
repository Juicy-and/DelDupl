#include <iostream>
#include <set>
#include <vector>

int main() {
	int num,b;
	std::cout << "[IN]: " << std::endl;
	std::cin >> num;
	std::vector<int> v;
	for (int i = 0; i < num; i++) 
	{
		std::cin >> b;
		v.push_back(b);
	}
	std::cout << "[OUT]: " << std::endl;
	std::set<int,std::greater<int>> s;
	for (const int& i : v)
	{
		s.insert(i);
	}
	for (const int& i : s)
		std::cout << i << std::endl;

	return 0;
}
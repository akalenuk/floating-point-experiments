#include <array>
#include <iostream>

template <typename T>
struct Box
{
	std::array<T, 3> m_side;
	double Volume()
	{
		return m_side[0]*m_side[1]*m_side[0];
	}
};

int main()
{
	Box<int> test_box;
	test_box.m_side = {100, 200, 300};
	std::cout << test_box.Volume() << std::endl;
	test_box.m_side = {1000, 2000, 3000};
	std::cout << test_box.Volume() << std::endl;
	test_box.m_side = {10000, 20000, 30000};
	std::cout << test_box.Volume() << std::endl;
}


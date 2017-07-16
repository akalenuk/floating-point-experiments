#include <iostream>
#include <limits>

int main()
{
	for(uint32_t i = 0u; i < std::numeric_limits<uint32_t>::max(); ++i)
	{
		const float& f = *(reinterpret_cast<float*>(&i));
		if(f != f)
			{
			std::cout << f << " != " << f << std::endl;
			return 0;
			}
	}
}


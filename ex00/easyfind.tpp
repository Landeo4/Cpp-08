#include "easyfind.hpp"

template <typename T>
easyfind::easyfind()
{

}

template <typename T>
~easyfind::easyfind()
{

}

template <typename T>
easyfind::easyfind(const easyfind & copy)
{
	*this = copy;
}

template <typename T>
easyfind::operator=(const easyfind & copy)
{
	if (this != &copy)
		*this = copy;
	return this;
}

template <typename T>
easyfind::easyfind(T typ, int i)
{

}

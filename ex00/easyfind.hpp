#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <vector>

template <typename T>
T easyfind(T typ, int i);

template <typename T>
T easyfind(T typ, int i)
{
	std::vector<int>::iterator it;

	for (it = typ.begin(); *it != i ; it++)

	return (it);
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/11/13 11:07:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array {
private:
	T *arr;
	unsigned int idx;
public:
	Array(): arr(new T[0]), idx(0){}
	~Array() {
		delete[] arr;
	}
	Array(unsigned int n): arr(new T[n]), idx(n){}
	Array(Array const &copy): arr(new T[copy.size()]), idx(copy.size())
	{
		for (unsigned int i = 0;i < this->idx ; i++)
			arr[i] = copy.arr[i];
	}
	Array	&operator=(Array const &src)
	{
		delete[] arr;
		arr = new T[src.size()];
		idx = src.size();
		for (unsigned int i = 0; i < idx; i++)
			arr[i] = src.arr[i];
	}

	unsigned int size() const {return idx;}
	T &operator[](unsigned int idx){
		if (idx < 0 || idx >= this->idx)
			throw OutOfRange();
		return this->arr[idx];
	}

	class OutOfRange: public std::exception
	{
		public:
			virtual const char *what() const throw(){
				return "Error: Out of range.";
			}
	};
};

#endif

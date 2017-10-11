/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.template.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 14:57:05 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/11 17:18:13 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TEMPLATE_HPP
# define ARRAY_TEMPLATE_HPP

template <typename T>
class Array {

public:
	T*	array;
	int len;

	Array<T>(void)
    {
		std::cout << "Default Constructor" << std::endl;
    	this->array = new T[0]();
		this->len = 0;
    	return ;
    }

    Array<T>(unsigned int n)
    {
		std::cout << "Size Constructor" << std::endl;
		if (n == 0) {
			*this = Array();

			return ;
		}
		else {
			this->len = n;
    		this->array = new T[n]();
		}

		return ;
    }

	Array<T>(Array<T> const & src)
	{
		std::cout << "Copy Constructor" << std::endl;
		*this = src;

		return ;
	}

    ~Array<T>(void)
    {
		std::cout << "Destructor" << std::endl;
		delete [] this->array;

    	return ;
    }

	Array<T>& operator=(Array<T> const & rhs)
	{
		this->len = rhs.size();
		this->array = new T[rhs.size()]();

		for (int i = 0; i < this->len; i++) {
			this->array[i] = rhs.array[i];
		}

		return *this;
	}

	T& operator[](int n) const
	{
		if (n < len) {
			return this->array[n];
		}
		else {
			throw std::exception();
		}
	}

	int size(void) const
	{
		return this->len;
	}

private:

};

#endif

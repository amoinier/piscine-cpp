/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 10:29:29 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/09 11:59:55 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	else {

	}

	return ;
}

Bureaucrat::Bureaucrat(void)
{

	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName())
{
	*this = src;

	return ;
}

Bureaucrat::~Bureaucrat(void)
{

	return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();

	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;

	return o;
}

std::string 		Bureaucrat::getName(void) const
{
	return this->_name;
}

int					Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void 				Bureaucrat::incrementGrade(void)
{
	if (this->getGrade() - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else {
		this->_grade--;
	}
}

void 				Bureaucrat::decrementGrade(void)
{
	if (this->getGrade() + 1 > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	else {
		this->_grade++;
	}
}

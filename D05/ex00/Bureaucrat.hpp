/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 10:29:35 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/09 11:47:39 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat {

public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);

	Bureaucrat& operator=(Bureaucrat const & rhs);

	std::string 		getName(void) const;
	int					getGrade(void) const;

	void 				incrementGrade(void);
	void 				decrementGrade(void);

	class GradeTooHighException : public std::exception {};
	class GradeTooLowException : public std::exception {};

private:
	Bureaucrat(void);

	const std::string 	_name;
	int 				_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif

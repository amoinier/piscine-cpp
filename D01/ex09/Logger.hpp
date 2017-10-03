/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 18:06:41 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/03 18:57:57 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <ctime>

class Logger {

public:
	Logger(std::string filename);
	~Logger(void);

	void log(std::string const & dest, std::string const & message);

private:
	void 			logToConsole(std::string logstr);
	void 			logToFile(std::string logstr);
	std::string 	makeLogEntry(std::string logstr);

	std::string _filename;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 18:12:32 by amoinier          #+#    #+#             */
/*   Updated: 2017/10/04 18:47:20 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string filename) : _filename(filename)
{
	return ;
}

Logger::~Logger()
{
	return ;
}

std::string now( const char* format = "%c" )
{
    std::time_t t = std::time(0) ;
    char cstr[128] ;
    std::strftime( cstr, sizeof(cstr), format, std::localtime(&t) ) ;
    return cstr ;
}

std::string Logger::makeLogEntry(std::string logstr)
{
	std::stringstream result;

	result << "[" << now( "%D %H:%M:%S" ) << "] " << logstr;

	return (result.str());
}

void Logger::logToConsole(std::string logstr)
{
	std::cout << logstr << std::endl;
}

void Logger::logToFile(std::string logstr)
{
	std::ofstream	ofs(this->_filename, std::ios::app);

	if (ofs) {
		ofs << logstr << std::endl;
		ofs.close();
	}
	else {
		std::cout << "No space disk" << std::endl;
	}

	return ;
}

void Logger::log(std::string const & dest, std::string const & message)
{
	typedef void (Logger::*Func)(std::string message);
    Func func[2] = {&Logger::logToConsole, &Logger::logToFile};

	std::string logString[2] = {"console", "file"};

	for (int i = 0; i < 2; i++) {
		if (logString[i] == dest) {
			(this->*func[i])(this->makeLogEntry(message));
			break ;
		}
	}
}

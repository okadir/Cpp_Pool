/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:25:47 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/25 16:25:48 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*----------------------------------------------------------------------------*/
Bureaucrat::Bureaucrat(){
	std::cout << "Bureaucrat: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){
	std::cout << "Bureaucrat: Initializer constructor called!" << std::endl;
	if (grade < 1)
		throw std::runtime_error("Bureaucrat::GradeTooHighException");
	else if (grade > 150)
		throw std::runtime_error("Bureaucrat::GradeTooLowException");
	else
		this->_grade = grade;
}

/*----------------------------------------------------------------------------*/
Bureaucrat::Bureaucrat(const Bureaucrat &a) : _name(a.getName()){
	std::cout << "Bureaucrat: Copy constructor called!" << std::endl;

	this->_grade = a.getGrade();
}

/*----------------------------------------------------------------------------*/
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a){
	if (this != &a)
	{
		std::cout << "Bureaucrat: Copy assignment operator called!" << std::endl;
		*this = a;
	}
	return (*this);
}

/*----------------------------------------------------------------------------*/
Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat: Destructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
const std::string Bureaucrat::getName() const{
	return (this->_name);
}

/*----------------------------------------------------------------------------*/
int Bureaucrat::getGrade() const{
	return (this->_grade);
}

/*----------------------------------------------------------------------------*/
void Bureaucrat::incrementGrade(){
	if ((this->_grade - 1) < 1)
		throw std::runtime_error("Bureaucrat::GradeTooHighException");
	this->_grade--;
}

/*----------------------------------------------------------------------------*/
void Bureaucrat::decrementGrade(){
	if ((this->_grade + 1) > 150)
		throw std::runtime_error("Bureaucrat::GradeTooLowException");
	this->_grade++;
}

/*----------------------------------------------------------------------------*/
std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj){
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
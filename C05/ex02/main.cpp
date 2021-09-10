/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:16:03 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/10 14:22:47 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat pasquale(150, "Pasquale");
	Bureaucrat paolo(50, "Paolo");
	Bureaucrat gianmarco(76, "Gianmarco");
	Bureaucrat vincenzo(1, "Vincenzo");
	std::cout << pasquale << paolo << gianmarco << vincenzo;

	ShrubberyCreationForm a("casa");

}

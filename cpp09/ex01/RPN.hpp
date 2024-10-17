/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:59:00 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/17 12:55:01 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>

class RPN : public std::stack<int>{
  public:
    RPN();
    RPN(const RPN &src);
    RPN &operator=(RPN &src);
    ~RPN();

    typedef std::deque<int>::reverse_iterator iterator;
    iterator begin(){
      return this->c.rbegin();
    }
    iterator end(){
      return this->c.rend();
    }
    class InvalidExpression : public std::exception{
      public:
        virtual const char *what() const throw();
    };
    void pushWithoutSign(std::string str);
    void addExpression();
};

bool isNumber(char c);
bool isSign(char c);
#endif
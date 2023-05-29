#include<iostream>
#include"Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _rawBits = 0;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this =src;

}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assingment operator called" <<std::endl;
    if (this != &rhs)
        _rawBits = rhs.getRawBits();
    return (*this);
}


Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_rawBits);

}

void Fixed::setRawBits(int const raw)
{
    _rawBits = raw;
}

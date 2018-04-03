/*
 * File: suit_t.h
 * Created: 04/02/2018
 * Modified: 04/02/2018
 */

#ifndef __SUIT_T__
#define __SUIT_T__

#include <iostream>

enum class suit_t
{
    hearts,
    diamonds,
    clubs,
    spades
};

std::ostream& operator<<( std::ostream& os, const suit_t& s );

std::string operator+( const suit_t& s, std::string& in );
std::string operator+( std::string& in, const suit_t& s );

#endif


// mcs::units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2007 Matthias Christian Schabel
// Copyright (C) 2007 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_SI_MASS_HPP
#define BOOST_UNITS_SI_MASS_HPP

#include <boost/units/systems/si/base.hpp>

namespace boost {

namespace units { 

namespace SI {

typedef unit<mass_dimension,SI::system>      mass;
    
BOOST_UNITS_STATIC_CONSTANT(kilogram,mass); 
BOOST_UNITS_STATIC_CONSTANT(kilograms,mass);    
BOOST_UNITS_STATIC_CONSTANT(kilogramme,mass);   
BOOST_UNITS_STATIC_CONSTANT(kilogrammes,mass);  

} // namespace SI

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_SI_MASS_HPP

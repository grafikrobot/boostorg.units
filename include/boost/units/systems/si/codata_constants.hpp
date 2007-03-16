// mcs::units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2007 Matthias Christian Schabel
// Copyright (C) 2007 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_CODATA_CONSTANTS_HPP
#define BOOST_UNITS_CODATA_CONSTANTS_HPP

namespace boost {

namespace units {

namespace SI { 

namespace constants {

namespace CODATA {

typedef dimensionless_quantity<SI::system,double>::type    dimensionless_constant;

} // namespace CODATA

} // namespace constants

} // namespace SI

} // namespace units

} // namespace boost

#include <boost/units/systems/si/codata/atomic_and_nuclear_constants.hpp>
#include <boost/units/systems/si/codata/electromagnetic_constants.hpp>
#include <boost/units/systems/si/codata/physico-chemical_constants.hpp>
#include <boost/units/systems/si/codata/universal_constants.hpp>

#endif // BOOST_UNITS_CODATA_CONSTANTS_HPP

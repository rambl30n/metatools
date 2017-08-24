#pragma once

#include <type_traits>

namespace meta {

/// \brief whether \c T derives from \c Base
/// \author Andrzej Krzemieński
/// \note https://akrzemi1.wordpress.com/2013/10/10/too-perfect-forwarding/
template<typename T, typename Base>
constexpr bool NotBasedOf() {
  	using DecayedT = std::decay_t<T>;
  	return 
  		!std::is_same<DecayedT, Base>::value &&
      	!std::is_base_of<Base, DecayedT>::value;
}

}

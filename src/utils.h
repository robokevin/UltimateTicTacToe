#ifndef UTILS_H
#define UTILS_H

#include <cassert>

namespace Utils
{

  inline constexpr int exponentiate(int base, int exponent)
  {

    // Implementation not done for negative bases and exponents.
    assert(base >= 0 && exponent >= 0);

    if(exponent == 0) {return 1;}

    int power { base };

    for(int i {1} ; i <= exponent ; ++i)
    {
      power *= base;
    }
    return power;
  }

}

#endif
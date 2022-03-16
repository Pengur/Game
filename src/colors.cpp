#include <iostream>
#include "colors.h"

#if defined(__linux__)

void setColor(short clr) {
    auto f = [](int c){ std::cout << "\033[" << c << "m"; };

    if (clr & 0x8000) f( 0 );
    if (clr & 0x0200) f( 60 * (clr & 0x100) + 40 + ((clr & 0xE0) >> 5) );
    if (clr & 0x0010) f( 60 * (clr & 0x008) + 30 +  (clr & 0x07)       );
}

#elif defined(_WIN32)

void setColor(short clr) {

}

#else
void setColor(short clr) {}
#endif

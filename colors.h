#pragma once

#define RESET      0b1000000000000000

#define FG_NONE    0b0000000000000000
#define FG_BLACK   0b0000000000010000
#define FG_RED     0b0000000000010001
#define FG_GREEN   0b0000000000010010
#define FG_YELLOW  0b0000000000010011
#define FG_BLUE    0b0000000000010100
#define FG_MAGENTA 0b0000000000010101
#define FG_CYAN    0b0000000000010110
#define FG_WHITE   0b0000000000010111
#define FG_BRIGHT  0b0000000000011000

#define BG_NONE    0b0000000000000000
#define BG_BLACK   0b0000001000000000
#define BG_RED     0b0000001000100000
#define BG_GREEN   0b0000001001000000
#define BG_YELLOW  0b0000001001100000
#define BG_BLUE    0b0000001010000000
#define BG_MAGENTA 0b0000001010100000
#define BG_CYAN    0b0000001011000000
#define BG_WHITE   0b0000001011100000
#define BG_BRIGHT  0b0000001100000000

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

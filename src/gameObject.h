#pragma once

class GameObject{
public:
    short int x = 0;
    short int y = 0;
    char sign = 0;
    char color = 0;
    char priority = 0;
};

#define white 37
#define red 31
#define green 32
#define blue 34

//printf("\x1B[32mTexting\033[0m\t\t");
//Name            FG  BG
//Black           30  40
//Red             31  41
//Green           32  42
//Yellow          33  43
//Blue            34  44
//Magenta         35  45
//Cyan            36  46
//White           37  47
//Bright Black    90  100
//Bright Red      91  101
//Bright Green    92  102
//Bright Yellow   93  103
//Bright Blue     94  104
//Bright Magenta  95  105
//Bright Cyan     96  106
//Bright White    97  107
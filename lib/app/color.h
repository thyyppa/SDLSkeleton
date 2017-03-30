#ifndef COLOR_H
#define COLOR_H

struct color {
    int r;
    int g;
    int b;
    int a;

    void darken( int val )
    {
        r -= val;
        g -= val;
        b -= val;

        r = r > 0 ? r : 0;
        g = g > 0 ? g : 0;
        b = b > 0 ? b : 0;
    }

    void lighten( int val )
    {
        r += val;
        g += val;
        b += val;

        r = r < 0xff ? r : 0xff;
        g = g < 0xff ? g : 0xff;
        b = b < 0xff ? b : 0xff;
    }

    void fade( int val )
    {
        a -= val;
        a = a > 0 ? a : 0;

    }

    void unfade( int val )
    {
        a += val;
        a = a < 0xff ? a : 0xff;
    }
};

#endif //COLOR_H

#ifndef _PLAYERKNIFE_SPRITE_H
#define _PLAYERKNIFE_SPRITE_H

#define PLAYERKNIFE_SPRITE_LEN 192

#define PLAYERKNIFE_SPRITE_FRAMES 6

#ifdef LOCAL
const unsigned char playerknife_sprite[6][32] = {
{
0x00, 0x01, 0x03, 0x00, 0x07, 0x08, 0x00, 0x00,
0x00, 0x01, 0x03, 0x03, 0x01, 0x00, 0x00, 0x01,
0x00, 0xc0, 0xe4, 0x0c, 0xfc, 0x0c, 0x0c, 0x0c,
0x0c, 0xd6, 0xf0, 0x84, 0xca, 0x00, 0x00, 0xc0,
},
{
0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x07, 0x03,
0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00,
0x00, 0x00, 0x00, 0xe0, 0x00, 0xf0, 0xf0, 0xe0,
0xc0, 0x08, 0x0c, 0x70, 0x00, 0x80, 0x80, 0x00,
},
{
0x00, 0x01, 0x03, 0x00, 0x07, 0x08, 0x00, 0x00,
0x00, 0x03, 0x03, 0x03, 0x09, 0x09, 0x00, 0x00,
0x00, 0xc8, 0xd8, 0x18, 0xf8, 0x18, 0x18, 0x18,
0x18, 0x7c, 0x00, 0xd4, 0xc0, 0x00, 0x00, 0xe0,
},
{
0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x07, 0x03,
0x01, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00,
0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0xe0, 0xe0,
0xc0, 0x80, 0xf8, 0x00, 0x00, 0xc0, 0xc0, 0x00,
},
{
0x00, 0x01, 0x03, 0x00, 0x07, 0x08, 0x00, 0x00,
0x00, 0x03, 0x03, 0x01, 0x01, 0x00, 0x0c, 0x08,
0x00, 0xc2, 0xe6, 0x06, 0xf6, 0x0e, 0x06, 0x06,
0x0f, 0x60, 0xe5, 0xc0, 0xc8, 0x88, 0x18, 0x00,
},
{
0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x07, 0x03,
0x01, 0x04, 0x0c, 0x08, 0x02, 0x07, 0x02, 0x00,
0x00, 0x00, 0x00, 0xe0, 0x00, 0xf0, 0xf0, 0xe0,
0xc0, 0x9e, 0x18, 0x00, 0x00, 0x70, 0x00, 0x00,
}
};

#else

extern const unsigned char playerknife_sprite[6][32];
#endif // LOCAL

#endif // _PLAYERKNIFE_SPRITE_H

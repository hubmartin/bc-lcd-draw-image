
/*******************************************************************************
* image
* filename: C:/Users/mhubacek/Documents/Dev/BigClown/github/skeleton_bmp/images/Yannick_cumulus/sun-adn-rain.xml
* name: sun_and_rain
*
* preset name: Bigclown LCD Module
* data block size: 8 bit(s), uint8_t
* RLE compression enabled: no
* conversion type: Monochrome, Edge 128
* bits per pixel: 1
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: yes
*******************************************************************************/

#include <bc_image.h>



static const uint8_t image_data_sun_and_rain[512] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xc0, 0x03, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 
    0x00, 0x00, 0xf0, 0x0f, 0x80, 0x1f, 0xf8, 0x00, 
    0x00, 0x00, 0xfe, 0x7f, 0xf0, 0xff, 0x70, 0x00, 
    0x00, 0x80, 0xff, 0xff, 0xf9, 0xff, 0x21, 0x00, 
    0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 
    0x00, 0xf0, 0x1f, 0xf8, 0x7f, 0xe0, 0x07, 0x00, 
    0x00, 0xf8, 0x03, 0xc0, 0x3f, 0x80, 0x0f, 0x00, 
    0x00, 0xfc, 0x00, 0x00, 0x3f, 0x00, 0x1f, 0x00, 
    0x00, 0x7e, 0x00, 0x00, 0x7e, 0x00, 0x1e, 0x00, 
    0x00, 0x3e, 0x00, 0x00, 0xfc, 0x7f, 0x1e, 0x00, 
    0x00, 0x1f, 0x00, 0x00, 0xf8, 0xff, 0x3f, 0x00, 
    0x00, 0x0f, 0x00, 0x00, 0xf0, 0xff, 0x3f, 0x7e, 
    0x80, 0x0f, 0x00, 0x00, 0xf0, 0xff, 0x3f, 0xff, 
    0x80, 0x07, 0x00, 0x00, 0xe0, 0xe0, 0x3f, 0xff, 
    0x80, 0x07, 0x00, 0x00, 0x20, 0x00, 0x3f, 0x7e, 
    0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 
    0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 
    0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 
    0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
    0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
    0xf0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 
    0xf8, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 
    0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 
    0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 
    0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 
    0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
    0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
    0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
    0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
    0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
    0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
    0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
    0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
    0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 
    0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 
    0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 
    0xf8, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 
    0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 
    0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 
    0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 
    0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x00, 
    0x00, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0x00, 
    0x00, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0x00, 
    0x00, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0x00, 
    0x00, 0xc0, 0x83, 0xc1, 0x83, 0xc1, 0x03, 0x00, 
    0x00, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0x03, 0x00, 
    0x00, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3, 0x03, 0x00, 
    0x00, 0x80, 0xc1, 0x83, 0xc1, 0x83, 0x01, 0x00, 
    0x00, 0x00, 0xc0, 0x03, 0xc0, 0x03, 0x00, 0x00, 
    0x00, 0x00, 0xc0, 0x03, 0xc0, 0x03, 0x00, 0x00, 
    0x00, 0x00, 0xc0, 0x03, 0xc0, 0x03, 0x00, 0x00, 
    0x00, 0x00, 0x80, 0x01, 0x80, 0x01, 0x00, 0x00
};
const bc_image_t sun_and_rain = { image_data_sun_and_rain, 64, 64, 8 };


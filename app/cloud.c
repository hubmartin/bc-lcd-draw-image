
/*******************************************************************************
* image
* filename: C:/Users/mhubacek/Documents/Dev/BigClown/github/skeleton_bmp/images/Yannick_cumulus/cloud.xml
* name: cloud
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



static const uint8_t image_data_cloud[320] = {
    0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xfe, 0x7f, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x80, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 
    0x00, 0xe0, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 
    0x00, 0xf0, 0x1f, 0xf8, 0x0f, 0x00, 0x00, 0x00, 
    0x00, 0xf8, 0x03, 0xc0, 0x1f, 0x00, 0x00, 0x00, 
    0x00, 0xfc, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 
    0x00, 0x7e, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 
    0x00, 0x3e, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 
    0x00, 0x1f, 0x00, 0x00, 0xf8, 0xff, 0x01, 0x00, 
    0x00, 0x0f, 0x00, 0x00, 0xf0, 0xff, 0x07, 0x00, 
    0x80, 0x0f, 0x00, 0x00, 0xf0, 0xff, 0x0f, 0x00, 
    0x80, 0x07, 0x00, 0x00, 0xe0, 0xe0, 0x1f, 0x00, 
    0x80, 0x07, 0x00, 0x00, 0x20, 0x00, 0x3f, 0x00, 
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
    0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00
};
const bc_image_t cloud = { image_data_cloud, 64, 40, 8 };


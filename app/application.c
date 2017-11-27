#include <application.h>

// Icons created by
// https://www.flaticon.com/packs/cumulus

extern const bc_image_t clear_sun;
extern const bc_image_t cloud;
extern const bc_image_t cloudy_day;
extern const bc_image_t hail_cloud;
extern const bc_image_t rain_cloud;
extern const bc_image_t storm_cloud;
extern const bc_image_t sun_and_rain;

void application_init(void)
{
    // Initialize LCD
    // The parameter is internal buffer in SDK, no need to define it
    bc_module_lcd_init(&_bc_module_lcd_framebuffer);
}

void application_task()
{
    static uint8_t item = 0;

    // Needs to be enabled, otherwise drawing to the framebuffer is very slow (60ms vs 900ms for 128×128px images)
    bc_module_core_pll_enable();

    bc_module_lcd_clear();

    switch(item++)
    {
        case 0:
            bc_module_lcd_draw_image(30,20, &clear_sun);
            break;

        case 1:
            bc_module_lcd_draw_image(30,30, &cloud);
            break;

        case 2:
            bc_module_lcd_draw_image(30,20, &cloudy_day);
            break;

        case 3:
            bc_module_lcd_draw_image(30,30, &hail_cloud);
            break;

        case 4:
            bc_module_lcd_draw_image(30,30, &rain_cloud);
            break;

        case 5:
            bc_module_lcd_draw_image(30,30, &storm_cloud);
            break;

        case 6:
            bc_module_lcd_draw_image(30,20, &sun_and_rain);
            item = 0;
            break;

        default:
            break;
    }

    // Don't forget to update
    bc_module_lcd_update();

    bc_module_core_pll_disable();

    bc_scheduler_plan_current_relative(800);
}

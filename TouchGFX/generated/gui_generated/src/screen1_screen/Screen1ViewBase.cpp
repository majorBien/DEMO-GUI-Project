/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_BACKGROUNDS_MAIN_BG_PORTRAIT_TEXTURE_240X320PX_ID));

    toggleButton1.setXY(56, 104);
    toggleButton1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_OFF_ID), touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_ON_ID));
    toggleButton1.setAction(buttonCallback);

    toggleButton2.setXY(56, 166);
    toggleButton2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_OFF_ID), touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_ON_ID));
    toggleButton2.setAction(buttonCallback);

    buttonWithIcon1.setXY(35, 248);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_PLAY_48_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_ADD_NEW_32_ID));
    buttonWithIcon1.setIconXY(70, 8);
    buttonWithIcon1.setAction(buttonCallback);

    buttonWithIcon2.setXY(35, 10);
    buttonWithIcon2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_TOOLS_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_ADD_NEW_32_ID));
    buttonWithIcon2.setIconXY(70, 16);
    buttonWithIcon2.setAction(buttonCallback);

    add(__background);
    add(image1);
    add(toggleButton1);
    add(toggleButton2);
    add(buttonWithIcon1);
    add(buttonWithIcon2);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &toggleButton1)
    {
        //ToggleLED
        //When toggleButton1 clicked call virtual function
        //Call ToggleLED
        ToggleLED();
    }
    else if (&src == &toggleButton2)
    {
        //ToggleLED2
        //When toggleButton2 clicked call virtual function
        //Call ToggleLED2
        ToggleLED2();
    }
    else if (&src == &buttonWithIcon1)
    {
        //ChangeScreen1
        //When buttonWithIcon1 clicked change screen to Screen2
        //Go to Screen2 with no screen transition
        application().gotoScreen2ScreenNoTransition();
    }
    else if (&src == &buttonWithIcon2)
    {
        //ChangeScreen3
        //When buttonWithIcon2 clicked change screen to Screen3
        //Go to Screen3 with no screen transition
        application().gotoScreen3ScreenNoTransition();
    }
}

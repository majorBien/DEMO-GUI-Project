/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen2ViewBase::Screen2ViewBase() :
    buttonCallback(this, &Screen2ViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &Screen2ViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_BACKGROUNDS_MAIN_BG_PORTRAIT_TEXTURE_240X320PX_ID));

    textArea1.setPosition(55, 85, 131, 37);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));

    flexButton1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setPosition(35, 173, 50, 50);
    flexButton1.setAction(flexButtonCallback);

    flexButton2.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton2.setBorderSize(5);
    flexButton2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton2.setPosition(155, 173, 50, 50);
    flexButton2.setAction(flexButtonCallback);

    textArea2.setXY(167, 135);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID2));

    textArea2_1.setXY(32, 135);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID3));

    buttonWithIcon1.setXY(35, 247);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_REFRESH_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_ADD_NEW_32_ID));
    buttonWithIcon1.setIconXY(70, 16);
    buttonWithIcon1.setAction(buttonCallback);

    add(__background);
    add(image1);
    add(textArea1);
    add(flexButton1);
    add(flexButton2);
    add(textArea2);
    add(textArea2_1);
    add(buttonWithIcon1);
}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithIcon1)
    {
        //ChangeScreen2
        //When buttonWithIcon1 clicked change screen to Screen1
        //Go to Screen1 with no screen transition
        application().gotoScreen1ScreenNoTransition();
    }
}

void Screen2ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //downclicked
        //When flexButton1 clicked call virtual function
        //Call downclicked
        downclicked();
    }
    else if (&src == &flexButton2)
    {
        //upclicked
        //When flexButton2 clicked call virtual function
        //Call upclicked
        upclicked();
    }
}
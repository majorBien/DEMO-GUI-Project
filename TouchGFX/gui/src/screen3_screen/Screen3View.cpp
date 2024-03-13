#include <gui/screen3_screen/Screen3View.hpp>

Screen3View::Screen3View()
{

}

void Screen3View::setupScreen()
{
    Screen3ViewBase::setupScreen();
}

void Screen3View::tearDownScreen()
{
    Screen3ViewBase::tearDownScreen();
}


void Screen3View::setLight (bool state)
{
	LightON.setVisible(state);
	LightON.invalidate();
}

void Screen3View::setADC (int val)
{
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", val);
	textArea1.invalidate();
}

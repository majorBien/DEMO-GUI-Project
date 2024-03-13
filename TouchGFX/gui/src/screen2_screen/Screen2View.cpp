#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}



void Screen2View::downclicked()
{

	 if (counter>0) counter--;
	 Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", counter);
	 textArea1.invalidate();
}

void Screen2View::upclicked()
{
	 counter++;
	 Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", counter);
	 textArea1.invalidate();
}

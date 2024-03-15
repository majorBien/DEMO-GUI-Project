#ifndef SCREEN4VIEW_HPP
#define SCREEN4VIEW_HPP

#include <gui_generated/screen4_screen/Screen4ViewBase.hpp>
#include <gui/screen4_screen/Screen4Presenter.hpp>

class Screen4View : public Screen4ViewBase
{
public:
    Screen4View();
    virtual ~Screen4View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();


    //----------------calculator-methods-----------------

    virtual void clicked_one();
    virtual void clicked_two();
    virtual void clicked_three();
    virtual void clicked_four();
    virtual void clicked_five();
    virtual void clicked_six();
    virtual void clicked_seven();
    virtual void clicked_eight();
    virtual void clicked_nine();
    virtual void clicked_zero();
    virtual void clicked_add();
    virtual void clicked_sub();
    virtual void clicked_div();
    virtual void clicked_mul();
    virtual void clicked_eq();
    virtual void clicked_clear();


protected:

    char text_buffer1[10];
    char text_buffer2[10];
    int value1 = 0;
    int value2 = 0;
    uint8_t i_text_buffer1 = 0;
    uint8_t i_text_buffer2 = 0;
    int result;
    bool value = 0;
    bool add_v = 0;
    bool sub = 0;
    bool div = 0;
    bool mul = 0;
    char sign = ' ';

};

#endif // SCREEN4VIEW_HPP

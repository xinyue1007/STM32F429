/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainscreen_screen/mainscreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

mainscreenViewBase::mainscreenViewBase()
{

    __background.setPosition(0, 0, 272, 480);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 272, 174);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));

    mainbuttonWithLabel.setXY(60, 50);
    mainbuttonWithLabel.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID));
    mainbuttonWithLabel.setLabelText(touchgfx::TypedText(T_SINGLEUSEID1));
    mainbuttonWithLabel.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    mainbuttonWithLabel.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    box2.setPosition(1, 174, 271, 144);
    box2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));

    box3.setPosition(0, 318, 272, 162);
    box3.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 255));

    add(__background);
    add(box1);
    add(mainbuttonWithLabel);
    add(box2);
    add(box3);
}

void mainscreenViewBase::setupScreen()
{

}

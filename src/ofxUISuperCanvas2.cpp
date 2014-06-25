#include "ofxUISuperCanvas2.h"



ofxUISuperCanvas2::ofxUISuperCanvas2(string _label, ofxUIRectangle r, int _size) : ofxUISuperCanvas( _label,  r,  _size)
{
    superInit(_label, _size);
}

ofxUISuperCanvas2::ofxUISuperCanvas2(string _label, float x, float y, float w, float h, int _size) : ofxUISuperCanvas( _label,  x,  y,  w,  h,  _size)
{
    superInit(_label, _size);
}

ofxUISuperCanvas2::ofxUISuperCanvas2(string _label, float x, float y, float w, float h, ofxUICanvas *sharedResources, int _size) : ofxUISuperCanvas(_label,  x,  y,  w,  h,  sharedResources,  _size)
{
    superInit(_label, _size);
}

ofxUISuperCanvas2::ofxUISuperCanvas2(string _label, int _size) : ofxUISuperCanvas( _label,  _size)
{
    superInit(_label, _size);
}

ofxUISuperCanvas2::ofxUISuperCanvas2(string _label, ofxUICanvas *sharedResources, int _size) : ofxUISuperCanvas( _label, sharedResources,  _size)
{
    superInit(_label, _size);
}
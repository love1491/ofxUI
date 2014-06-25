#include "ofxUISuperCanvas.h"

class ofxUISuperCanvas2 :public ofxUISuperCanvas{
public :
    ofxUISuperCanvas2(string _label, ofxUIRectangle r, int _size = OFX_UI_FONT_MEDIUM);
    ofxUISuperCanvas2(string _label, float x, float y, float w, float h, int _size = OFX_UI_FONT_MEDIUM);
    ofxUISuperCanvas2(string _label, float x, float y, float w, float h, ofxUICanvas *sharedResources, int _size = OFX_UI_FONT_MEDIUM);
    ofxUISuperCanvas2(string _label, int _size = OFX_UI_FONT_MEDIUM);
    ofxUISuperCanvas2(string _label, ofxUICanvas *sharedResources, int _size = OFX_UI_FONT_MEDIUM);
	//yale
	public :
		void pauseUICanvas(){
			if(isEnabled())
				disable();
			else
				enable();
		}
		    int size; 
    string title; 
    ofxUILabel *canvasTitle;
    vector<ofxUIWidget *> headerWidgets;
    
    ofxUIVec2f hitPoint;
    float deltaTime;
    float lastHitTime;
    bool bIsMinified;
    bool bTitleLabelHit;
};
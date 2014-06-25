#pragma once
#include "ofxUICanvas.h"

class ofxUIMyCanvas : public ofxUICanvas{
	//yale
public :
	void pauseUICanvas(){
		if(isEnabled())
			disable();
		else
			enable();
	}
};

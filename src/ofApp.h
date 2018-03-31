#pragma once

#include "ofMain.h"
#include "JumpPoint.hpp"
#include "JumpRoute.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        int const numOfRoutes = 22;//number of JumpRoutes to depict
        int const numOfDivs = 22;//number of divisions in given JumpRoutes
        float const xBleed = 25;
        float const yBleed = 20;
    
        vector<JumpRoute> routes;
		
};

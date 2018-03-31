#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofHideCursor();
    
    for(int i = 0; i < numOfRoutes; i++){
        JumpRoute tempJumpRoute;
        
        //run setup on tempJumpRoute
        //tempJumpRoute.setup(ofVec2f(0, 0), ofVec2f(i*ofGetWidth()/numOfRoutes, i*ofGetHeight()/numOfRoutes), numOfDivs);
        tempJumpRoute.setup(ofVec2f(0 - xBleed, i*ofGetHeight()/numOfRoutes) + yBleed, ofVec2f(ofGetWidth() + xBleed, i*ofGetHeight()/numOfRoutes + yBleed), numOfDivs);
        routes.push_back(tempJumpRoute);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i < numOfRoutes; i++){
        routes[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    //testRoute.forward();
    
    for(int i = 0; i < numOfRoutes; i++){
        routes[i].forward();
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

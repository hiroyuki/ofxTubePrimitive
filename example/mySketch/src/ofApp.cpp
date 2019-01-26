#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	vector<glm::vec3> verts;
	for (int i = 0; i < 300; i++)
	{
		glm::vec3 p;
		float radius = 100;
		p.x = cos(i / 20.0) * radius;
		p.y = sin(i / 20.0) * radius;
		p.z = -i;
		verts.push_back(p);
	}
	float tubeRadius = 4.0;
	tube.setup(verts, tubeRadius);
	tube.update();
	cam.setDistance(100);
	ofSetSmoothLighting(true);
	
	light.setDiffuseColor(ofColor(0.f, 255.f, 0.f));
	light.setSpecularColor(ofColor(255.f, 255.f, 255.f));
	light.setPosition(0, 300, 0);
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	cam.begin();
	light.enable();
	if (drawMode == 0)
	{
		tube.draw();
	}
	else if (drawMode == 1)
	{
		tube.drawTubeRings();
	}
	else if (drawMode == 2)
	{
		tube.drawTubeSkeleton();
	}
	else if (drawMode == 3)
	{
		tube.drawTubeNormals();
	}
	else if (drawMode == 4)
	{
		tube.drawTubeTangents();
	}
	cam.end();
	ofDisableLighting();
	if (drawMode == 0)
	{
		ofDrawBitmapStringHighlight("tube.draw();", 20, 20);
	}
	else if (drawMode == 1)
	{
		ofDrawBitmapStringHighlight("tube.drawTubeRings();", 20, 20);
	}
	else if (drawMode == 2)
	{
		ofDrawBitmapStringHighlight("tube.drawTubeSkeleton();", 20, 20);
	}
	else if (drawMode == 3)
	{
		ofDrawBitmapStringHighlight("tube.drawTubeNormals();", 20, 20);
	}
	else if (drawMode == 4)
	{
		ofDrawBitmapStringHighlight("tube.drawTubeTangents();", 20, 20);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == OF_KEY_RIGHT)
	{
		drawMode++;
	}
	drawMode %= 5;
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

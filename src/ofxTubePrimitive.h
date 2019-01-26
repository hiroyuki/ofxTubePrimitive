//
//  ofxTubePrimitive.h
//  Created by Lukasz Karluk on 11/12/2013.
//

#pragma once

#include "ofMain.h"
#include "of3dPrimitives.h"

class ofxTubePrimitive : public of3dPrimitive {
    
public:
    ofxTubePrimitive();
    ofxTubePrimitive(ofPolyline & poly, float radius);
    ofxTubePrimitive(vector<glm::vec3> & points, float radius);
    ~ofxTubePrimitive();
    
    void init();
    void setup(ofPolyline & poly, float radius);
    void setup(vector<glm::vec3> & points, float radius);
    void addPoint(glm::vec3 point, float radius);
    void setResolution(int resolution);
    void update();
    
    void drawTubeSkeleton();
    void drawTubeNormals(float normalLenght=10);
    void drawTubeTangents(float tangentLength=10);
    void drawTubeRings();
    
    ofPolyline tubePoly;
    vector<float> tubeRadius;
    int tubeResolution;
};

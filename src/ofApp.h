#pragma once

#define DISP_POINT


#define SC_WIDTH 1280
#define SC_HEIGHT 720
#define CAM_POSI_X 0.0
#define CAM_POSI_Y 0.0
#define CAM_POSI_Z 0.0
#define CAM_POSI_Z_MAX 1000.0
#define BLUR 50//255
#define TIME_INTERPOLATION 24

#define ST1_GEN_POINT_X 250
#define ST1_GEN_POINT_Y 720
#define ST2_GEN_POINT_X 500
#define ST2_GEN_POINT_Y 720
#define ST3_GEN_POINT_X 700
#define ST3_GEN_POINT_Y 720
#define ST4_GEN_POINT_X 900
#define ST4_GEN_POINT_Y 720

//Mask
#define MASK_COLOR 255
#define DEFAULT_SIDE_OFFSET_L SC_WIDTH*-1
#define DEFAULT_SIDE_OFFSET_R SC_WIDTH

#include <vector>
#include "ofMain.h"
#include "slAppManager.h"
#include "Storm.h"
#include "OscManager.h"
//#include "interpolation.h"

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
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    //Camera Control
    float cam_posi_x = CAM_POSI_X;
    float cam_posi_y = CAM_POSI_Y;
    float cam_posi_z = CAM_POSI_Z;
    //Color Control
    float blur = BLUR;
    
    //OSC Event
    OscManager *osc;
    void setParticleSize(float &val);
    void setParticleNum(float &val);
    void setFriction(float &val);
    void setPointX(float &val);
    void setPointY(float &val);
    void setPointX2(float &val);
    void setPointY2(float &val);
    void setPointX3(float &val);
    void setPointY3(float &val);
    void setPointX4(float &val);
    void setPointY4(float &val);
    void setAttract(float &val);
    void setCamZ(float &val);
    void setCamX(float &val);
    void setCamY(float &val);
    void setBrightness(float &val);
    void setBlur(float &val);
    void addParticle(float &val);
    void setSizeScale(float &val);
    void setMaskLeft(float &val);
    void setMaskRight(float &val);

    //Model
    Storm storm1;
    Storm storm2;
    Storm storm3;
    Storm storm4;

    
    
    Interpolation calcSize;
    Interpolation calcSize2;
    Interpolation calcSize3;
    Interpolation calcSize4;
    Blink blink;
    Blink blink2;
    Blink blink3;
    Blink blink4;
    
    //Attraction Points
    int pointX = 0;
    int pointY = 0;
    int pointX2 = SC_WIDTH/4*1;
    int pointY2 = 0;
    int pointX3 = SC_WIDTH/4*2;
    int pointY3 = 0;
    int pointX4 = SC_WIDTH/4*3;
    int pointY4 = 0;

    
    
    // in ofApp.h :: void test1(float &val);
    // in setup() :: ofAddListener(osc.test1, this, &ofApp::test1);

    //For Capture
    void audioIn(float *input, int bufferSize, int nChannels);
    ofFbo cap;
    ofPixels p;
    ofImage *img;
    // ofVideoGrabber      vidGrabber;
    ofxVideoRecorder    vidRecorder;
    ofSoundStream       soundStream;
    bool bRecording;
    int sampleRate;
    int channels;
    string fileName;
    string fileExt;
    
    ofFbo recordFbo;
    ofPixels recordPixels;
    ofPixels converted;
    void convertPixels();
    
    float side_offset_l=DEFAULT_SIDE_OFFSET_L;
    float side_offset_r=DEFAULT_SIDE_OFFSET_R;
    
    
};

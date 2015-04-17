#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setParticleSize(float &val){
//    float scaled_num = val*PARTICLE_SIZE_MAX;
//    calcSize.init((float)storm1.particle_size, scaled_num, TIME_INTERPOLATION);
//    storm1.particle_size = (GLfloat)scaled_num;

//    calcSize.init((float)storm1.particle_size, val, TIME_INTERPOLATION);
//    calcSize2.init((float)storm2.particle_size, val, TIME_INTERPOLATION);
//    calcSize3.init((float)storm2.particle_size, val, TIME_INTERPOLATION);
//    calcSize4.init((float)storm2.particle_size, val, TIME_INTERPOLATION);
    
//    storm1.particle_size = val;
    
    cout << "particle_size: " << storm1.particle_size << endl;
    
}

//--------------------------------------------------------------
void ofApp::setParticleNum(float &val){
    
//    float scaled_num = val*CONST_PARTICLE_MAX;
//    storm1.setParticleNum((int)scaled_num);
//    cout << "particle_num: " << storm1.storm_particle_num << endl;
    cout << "setParticleNum was ignored in circleGenerator" << endl;
    
}

//--------------------------------------------------------------
void ofApp::setFriction(float &val){
    
    float scaled_num = val*ST_FRICTION_MAX;
    storm1.storm_friction = scaled_num;
    storm2.storm_friction = scaled_num;
    storm3.storm_friction = scaled_num;
    storm4.storm_friction = scaled_num;

    cout << "friction: " << storm1.storm_friction << endl;
    
    
}

//--------------------------------------------------------------
void ofApp::setPointX(float &val){
    
    int scaled_num = (int)(val*(float)ofGetWidth());
    pointX = scaled_num;
    cout << "PointX: " << pointX << endl;
    
    
}

//--------------------------------------------------------------
void ofApp::setPointY(float &val){
    
    float h = (float)ofGetHeight();
    int scaled_num = (int)( h-(h*val) );
    pointY = scaled_num;
    cout << "PointY: " << pointY << endl;
    
    
}


//--------------------------------------------------------------
void ofApp::setPointX2(float &val){
    
    int scaled_num = (int)(val*(float)ofGetWidth());
    pointX2 = scaled_num;
    cout << "PointX: " << pointX << endl;
    
    
}

//--------------------------------------------------------------
void ofApp::setPointY2(float &val){
    
    float h = (float)ofGetHeight();
    int scaled_num = (int)( h-(h*val) );
    pointY2 = scaled_num;
    cout << "PointY: " << pointY << endl;
    
    
}


//--------------------------------------------------------------
void ofApp::setPointX3(float &val){
    
    int scaled_num = (int)(val*(float)ofGetWidth());
    pointX3 = scaled_num;
    cout << "PointX: " << pointX << endl;
    
    
}

//--------------------------------------------------------------
void ofApp::setPointY3(float &val){
    
    float h = (float)ofGetHeight();
    int scaled_num = (int)( h-(h*val) );
    pointY3 = scaled_num;
    cout << "PointY: " << pointY << endl;
    
    
}


//--------------------------------------------------------------
void ofApp::setPointX4(float &val){
    
    int scaled_num = (int)(val*(float)ofGetWidth());
    pointX4 = scaled_num;
    cout << "PointX: " << pointX << endl;
    
    
}

//--------------------------------------------------------------
void ofApp::setPointY4(float &val){
    
    float h = (float)ofGetHeight();
    int scaled_num = (int)( h-(h*val) );
    pointY4 = scaled_num;
    cout << "PointY: " << pointY << endl;
    
    
}


//--------------------------------------------------------------
void ofApp::setAttract(float &val){
    
    bool flg = (bool)val;
    storm1.atraction = flg;
    storm2.atraction = flg;
    storm3.atraction = flg;
    storm4.atraction = flg;

    
    if(flg){
        cout << "attract_on" << endl;
    }else {
        cout << "attract_off" << endl;
    }
    
    
}

//--------------------------------------------------------------
void ofApp::setCamZ(float &val){
    
    float scaled_num = val*CAM_POSI_Z_MAX;
    cam_posi_z = scaled_num;
    cout << "cam_posi_z: " << cam_posi_z << endl;
    
}

//--------------------------------------------------------------
void ofApp::setCamX(float &val){
    
//    float scaled_num = (val*(float)ofGetWidth()*-1);
    float scaled_num = ofMap(val, 0.0f, 1.0f, (float)ofGetWidth()/2, ((float)ofGetWidth()*-1)/2);
    cam_posi_x = scaled_num;
    cout << "cam_posi_z: " << cam_posi_x << endl;
    
}

//--------------------------------------------------------------
void ofApp::setCamY(float &val){
    
//    float scaled_num = (val*(float)ofGetHeight()*-1);
    float scaled_num = ofMap(val, 0.0f, 1.0f, (float)ofGetHeight()/2, ((float)ofGetHeight()*-1)/2);
    cam_posi_y = scaled_num;
    cout << "cam_posi_y: " << cam_posi_x << endl;
    
}

//--------------------------------------------------------------
void ofApp::setBrightness(float &val){
    
    //    float scaled_num = (val*(float)ofGetHeight()*-1);
    int scaled_num = (int)(val * 255.0f);
    storm1.storm_color = scaled_num;
    storm2.storm_color = scaled_num;
    storm3.storm_color = scaled_num;
    storm4.storm_color = scaled_num;
    cout << "brightness: " << cam_posi_x << endl;
    
}

//--------------------------------------------------------------
void ofApp::setBlur(float &val){
    
    int scaled_num = 255-(int)(val * 255.0f);
    blur = scaled_num;
    cout << "blur: " << blur << endl;
    
}

//--------------------------------------------------------------

void ofApp::addParticle(float &val){
    
    int who = (int)val;

    switch(who){

        case 1:
        storm1.incrementParticleNum();
        break;
        case 2:
            storm2.incrementParticleNum();
            break;
        case 3:
            storm3.incrementParticleNum();
            break;
        case 4:
            storm4.incrementParticleNum();
            break;
            
    }

    
}

//--------------------------------------------------------------
void ofApp::setSizeScale(float &val){
    
    float inversed = 1.0-val;
    storm1.size_scale = inversed;
    storm2.size_scale = inversed;
    storm3.size_scale = inversed;
    storm4.size_scale = inversed;
    
}

//--------------------------------------------------------------
void ofApp::setMaskLeft(float &val){

    float inverted = 1.0f - val;
    side_offset_l = inverted*ofGetWidth()*-1;
    
}


//--------------------------------------------------------------
void ofApp::setMaskRight(float &val){
    
    float inverted = 1.0f - val;
    side_offset_r = inverted*ofGetWidth();
}


//--------------------------------------------------------------
void ofApp::setup(){

    osc = new OscManager(57112);
    
    cout << "setup" << endl;
    ofSetFrameRate(60);
    ofEnableSmoothing();

    
    //Setup storm
    ofSetCircleResolution(100);
    storm1.setup(ST1_GEN_POINT_X, ST1_GEN_POINT_Y);
    storm2.setup(ST2_GEN_POINT_X, ST2_GEN_POINT_Y);
    storm3.setup(ST3_GEN_POINT_X, ST3_GEN_POINT_Y);
    storm4.setup(ST4_GEN_POINT_X, ST4_GEN_POINT_Y);

    
    //Setup OSC Event Fire
    ofAddListener(osc->chgParticleSize, this, &ofApp::setParticleSize);
    ofAddListener(osc->chgParticleNum, this, &ofApp::setParticleNum);
    ofAddListener(osc->chgFriction, this, &ofApp::setFriction);
    ofAddListener(osc->chgPointX, this, &ofApp::setPointX);
    ofAddListener(osc->chgPointY, this, &ofApp::setPointY);
    ofAddListener(osc->chgPointX2, this, &ofApp::setPointX2);
    ofAddListener(osc->chgPointY2, this, &ofApp::setPointY2);
    ofAddListener(osc->chgPointX3, this, &ofApp::setPointX3);
    ofAddListener(osc->chgPointY3, this, &ofApp::setPointY3);
    ofAddListener(osc->chgPointX4, this, &ofApp::setPointX4);
    ofAddListener(osc->chgPointY4, this, &ofApp::setPointY4);

    ofAddListener(osc->chgAttract, this, &ofApp::setAttract);
    ofAddListener(osc->chgCamZ, this, &ofApp::setCamZ);
    ofAddListener(osc->chgCamX, this, &ofApp::setCamX);
    ofAddListener(osc->chgCamY, this, &ofApp::setCamY);
    ofAddListener(osc->chgBrightness, this, &ofApp::setBrightness);
    ofAddListener(osc->chgBlur, this, &ofApp::setBlur);
    ofAddListener(osc->addParticle, this, &ofApp::addParticle);
    ofAddListener(osc->chgSizeScale, this, &ofApp::setSizeScale);
    ofAddListener(osc->chgMaskLeft, this, &ofApp::setMaskLeft);
    ofAddListener(osc->chgMaskRight, this, &ofApp::setMaskRight);
    
    
    //For Video Capture
    //Capture Setting
    sampleRate = 44100;
    channels = 2;
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    //If you want to use grabber
    
    fileName = "stormDemo";
    fileExt = ".mov"; // ffmpeg uses the extension to determine the container type. run 'ffmpeg -formats' to see supported formats
    
    // override the default codecs if you like
    // run 'ffmpeg -codecs' to find out what your implementation supports (or -formats on some older versions)
//    vidRecorder.setVideoCodec("mpeg4");
        vidRecorder.setVideoCodec("prores");
    vidRecorder.setVideoBitrate("4000k"); //def is 800k
    vidRecorder.setAudioCodec("mp3");
    vidRecorder.setAudioBitrate("192k");
    
    //    soundStream.listDevices();
    //    soundStream.setDeviceID(11);
    soundStream.setup(this, 0, channels, sampleRate, 256, 4);
    
    bRecording = false;
    ofEnableAlphaBlending();
    
    
    
    //Setup FBO
//    cap.allocate(SC_WIDTH,SC_HEIGHT);
    cap.allocate(SC_WIDTH,SC_HEIGHT,GL_RGBA, 512);

    cap.begin();
    ofClear(0, 0, 0);
    cap.end();
    //    img = new ofImage;
    //Set Image time for RGB (without RGBA)
    converted.setImageType(OF_IMAGE_COLOR);

    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    float val = ofRandom(0.5)+0.5;
//    float val = 0.7;
    calcSize.init((float)storm1.particle_size, val, TIME_INTERPOLATION);
    calcSize2.init((float)storm2.particle_size, val, TIME_INTERPOLATION);
    calcSize3.init((float)storm2.particle_size, val, TIME_INTERPOLATION);
    calcSize4.init((float)storm2.particle_size, val, TIME_INTERPOLATION);


    storm1.particle_size = (GLfloat)calcSize.update();
    storm2.particle_size = (GLfloat)calcSize2.update();
    storm3.particle_size = (GLfloat)calcSize.update();
    storm4.particle_size = (GLfloat)calcSize2.update();

    storm1.update(pointX, pointY);
    storm2.update(pointX2, pointY2);
    storm3.update(pointX, pointY);
    storm4.update(pointX2, pointY2);

    osc->update();
    
    //VideoCapture
    if(bRecording){
        cap.readToPixels(recordPixels);
        convertPixels();
        vidRecorder.addFrame(converted);
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    cap.begin();

    ofSetBackgroundAuto(false);
    ofSetColor(0, 0, 0, blur); //半透明の黒（背景色）
    ofRect(0, 0, ofGetWidth(), ofGetHeight()); //画面と同じ大きさの四角形を描画
    
//    ofTranslate( ofGetWidth()/2, ofGetHeight()/2);
    ofTranslate(cam_posi_x, cam_posi_y, cam_posi_z);
    storm1.draw(pointX, pointY);
    storm2.draw(pointX2, pointY2);
    storm3.draw(pointX4, pointY3);
    storm4.draw(pointX4, pointY4);

    
    cap.end();
    cap.draw(0,0);
    
#ifdef DISP_POINT
    // 重力の点を描く
    if (storm1.atraction) {
        ofSetColor(255, 0, 0);
    } else {
        ofSetColor(0, 255, 255);
    }
    ofCircle(pointX, pointY, 4);
    
    if (storm2.atraction) {
        ofSetColor(255, 0, 0);
    } else {
        ofSetColor(0, 255, 255);
    }
    ofCircle(pointX2, pointY2, 4);
    
    if (storm3.atraction) {
        ofSetColor(255, 0, 0);
    } else {
        ofSetColor(0, 255, 255);
    }
    ofCircle(pointX3, pointY3, 4);
    
    if (storm4.atraction) {
        ofSetColor(255, 0, 0);
    } else {
        ofSetColor(0, 255, 255);
    }
    ofCircle(pointX4, pointY4, 4);
#endif
    
    if(bRecording){
        ofSetColor(255, 0, 0);
        ofCircle(ofGetWidth() - 20, 20, 5);
    }

    
    //To Mask SideLine
    ofSetColor(0, 0, MASK_COLOR, 255); //半透明の黒（背景色）
    //LeftMask
    ofRect(side_offset_l, 0, ofGetWidth(), ofGetHeight()); //画面と同じ大きさの四角形を描画
    //RightMask
    ofRect(side_offset_r, 0, ofGetWidth(), ofGetHeight()); //画面と同じ大きさの四角形を描画
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if(key == ' '){
        
        ofToggleFullscreen();
        
    }
    
    if (key == 'q') {

        storm1.reset();
        storm2.reset();
        storm3.reset();
        storm4.reset();
        
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
 
    if(key=='r'){
        bRecording = !bRecording;
        if(bRecording && !vidRecorder.isInitialized()) {
            vidRecorder.setup(fileName+ofGetTimestampString()+fileExt, SC_WIDTH, SC_HEIGHT, 30, sampleRate, channels);
        }
    }
    if(key=='c'){
        bRecording = false;
        vidRecorder.close();
    }
    if(key=='a'){
        
        storm1.incrementParticleNum();
    }
    if(key=='s'){
        
        storm2.incrementParticleNum();
    }
    if(key=='d'){
        
        storm3.incrementParticleNum();
    }
    if(key=='f'){
        
        storm4.incrementParticleNum();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

//    storm1.setAttraction(true);
//    storm2.setAttraction(true);
//    storm3.setAttraction(true);
//    storm4.setAttraction(true);
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    storm1.setAttraction(false);
    
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

//--------------------------------------------------------------
void ofApp::audioIn(float *input, int bufferSize, int nChannels){
    if(bRecording){
        vidRecorder.addAudioSamples(input, bufferSize, nChannels);
    }
}

//--------------------------------------------------------------
void ofApp::convertPixels(){
    
    
    //Make Array for treating each pixcels
    unsigned char * pixels = recordPixels.getPixels();
    unsigned char pixs2[SC_WIDTH*SC_HEIGHT*3];
    
    for(int i = 0; i < SC_WIDTH*SC_HEIGHT; i++)
    {
        pixs2[i*3]   = pixels[i*4];
        pixs2[i*3+1] = pixels[i*4+1];
        pixs2[i*3+2] = pixels[i*4+2];
    }
    
    //Copy the pixels into converted buffer with 3channel
    converted.setFromExternalPixels(pixs2, SC_WIDTH, SC_HEIGHT, 3);
    
}


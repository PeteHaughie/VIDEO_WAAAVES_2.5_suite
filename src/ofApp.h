/*
 * Copyright (c) 2013 Dan Wilcox <danomatika@gmail.com>
 *
 * BSD Simplified License.
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/danomatika/ofxMidi for documentation
 *
 */
#pragma once

#include "GuiApp.h"
#include "ofMain.h"
#include "ofxMidi.h"
#include "VideoInputManager.h"

class ofApp : public ofBaseApp, public ofxMidiListener {

public:
  void setup();
  void update();
  void draw();
  void exit();

  void keyPressed(int key);
  void keyReleased(int key);

  void mouseMoved(int x, int y);
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);

  void midibiz();

  void tetrahedron_setup();

  float lfo(float amp, float rate, int shape);

  void lfo_update();

  void hypercube_draw();

  float hypercube_theta = 0;
  float hypercube_phi = 0;
  float hypercube_r = 0.0;

  float hypercube_x[8];
  float hypercube_y[8];
  float hypercube_z[8];

  //-----------guibiz
  shared_ptr<GuiApp> gui;

  void newMidiMessage(ofxMidiMessage &eventArgs);

  ofxMidiIn midiIn;
  std::vector<ofxMidiMessage> midiMessages;
  std::size_t maxMessages = 10; //< max number of messages to keep track of

  ofShader shader_mixer;
  ofShader shader_blur;
  ofShader shader_sharpen;

  ofFbo fbo_draw;
  ofFbo fbo_feedback;
  ofFbo fbo_blur;

  ofFbo syphonTexture;

  VideoInputManager cam1Manager;
  VideoInputManager cam2Manager;

};

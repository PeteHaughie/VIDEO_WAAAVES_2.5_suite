# VIDEO_WAAAVES_2

a video mixer, framebuffer delay, and feedback resynthesis engine built in openFrameworks https://openframeworks.cc/

(QUICK ADVERTISEMENT FOR MYSELF https://andreijaycreativecoding.com/ this is my website, there is a pay pal button on here, if you have a fun time with the software i make and can afford to send me a donation it is super appreciated, the more donations i recieve means the more time i can spend working on crazy awesome open source software)

OK! so installing from these files here on the github are kind of only for folks reasonably well versed in navigating openFrameworks already! I can't really help anyone out anymore with this sort of thing as the volume of requests has greatly outpaced the amount of time I can afford to spend on that! But for everyone who has no idea what the heck an open frame work is don't worry I jurry rigged a reasonable solution for yalls! Head on over to this link

https://andreijaycreativecoding.com/VIDEO-WAAAVES-GETTING-STARTED

and follow the instructions to get up and running!

https://vimeo.com/andreijay for many examples of this program in action.

midi cc list for video waaaves!

ch1 hue 20

ch1 saturation 21

ch1 brightness 22

blur -25

sharpen 24

fb0 key V 28

fb0 mix 29

fb0 delay 30

fb0 x 4

fb0 y 3

fb0 z 12

fb0 rotate 11

fb0 hue 5

fb0 sat 2

fb0 bright 13

fb0 huemod 16-not bipolar

fb0 hueoffset 10

fb0 huelfo 17

fb1 key V 31

fb1 mix 27

fb1 delay 26

fb1 x 6

fb1 y 1

fb1 z 14

fb1 rotate 9

fb1 hue 7

fb1 sat 0

fb1 bright 15

fb1 huemod 18-not bipolar

fb1 hueoffset 8

fb1 huelfo 19

(yes i know that is far from all of the parameters. I'll be frank, adding full midi support for every parameter would be pretty boring and time consuming and adds very little to my personal usage of this software! if you want more midi ccs mapped to parameters you'll basically have to pay me because its a lot of dang work and i don't have any midi controllers with 200 knobs to use with this set up so)

## Build updates added by Peter Haughie

Xcode is a bloated waste of hard-drive space. By utilising VSCode instead we can reduce the size of the project, the speed of building, and ease of deployment.

Follow the instructions for [setting up VSCode](https://openframeworks.cc/setup/vscode/).

You will need the [ofxMidi](http://github.com/danomatika/ofxMidi), and [ofxImGui](http://github.com/jvcleave/ofxImGui) (remember to switch to the developer branch) addon libraries installed to be able to make it build. If like me you have several input devices identifying as webcams then you will need to alter the cam1 and cam2 with 0 and 9
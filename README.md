# Engine


# Dependencies
 .GLEW: wrapper gl commands.
 .GLFW3: windows/context and inputs
 .SDL2: windows/context and inputs
 .GLM: utilities math
 .GL: opengl - library with graphics commands.

Obs.: The window/context is created native using the libraries: Win32, Xlib or Cocoa

#STEPS TO INSTALL

##STEPS WINDOW VS2017

##STEPS MACOS XCode
 
##STEPS LINUX

1. Install IDE Codeblocks: http://www.codeblocks.org/downloads/binaries

2. Install dependencies by apt-get

$ sudo apt-get install libglew-dev libglfw3-dev libsdl2-dev libglm-dev

3. Insert link libraries in codeblocks
	. Click with mouse right button over project in management tab.
	. Select "Propertiers..." in popup menu.
	. Click "Projects build options..." button.
	. Select "Linker settings" tab.
	. Add link libraries: GL glfw GLEW SDL2

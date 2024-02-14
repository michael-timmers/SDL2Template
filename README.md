# SDL2 Template

This is a general purpose template for any new SDL2 project.

It has a basic event loop that only updates when an event occurs, and a renderer namespace with some helpful functions. 

##CMake method (recommended)

CMake modules are provided for SDL2, SDL2_ttf and SDL2_image. Uncomment their headers in 'headers.hpp'.

###how to use
create build folder, run 'cmake ..' inside it then run make.

##legacy compiling method

This does not work anymore

A bash shell file is provided for Mac that builds the project. It may work on linux if clang++ is supported, otherwise change it to g++ or something else.

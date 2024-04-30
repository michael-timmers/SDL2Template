# SDL2 Template

This is a general purpose template for any new SDL2 project.

It has a basic event loop that only updates when an event occurs, and renderer and timer classes with some helpful functions. 

## CMake compiling

CMake modules are provided for SDL2, SDL2_ttf and SDL2_image. Uncomment their headers in 'headers.hpp'.

### How to use
create build folder, run 'cmake ..' inside it then run make. To add more files, add their file paths in the CMakeLists.txt file, in the add_executable function. 

## License
### GPL3.0

Suggestions and issues welcome!
PROGRAM_NAME := SDL2Tempplate
PROGRAM_LOCATION := bin
PROGRAM_PATH = $(PROGRAM_LOCATION)/$(PROGRAM_NAME)
PROGRAM_CXX_SRCS := $(wildcard src/*.cpp)
PROGRAM_CXX_OBJS := ${PROGRAM_CXX_SRCS:.cpp=.o}
PROGRAM_OBJS := $(PROGRAM_CXX_OBJS)

# change this depending on OS
PROGRAM_INCLUDE_DIRS := /opt/homebrew/include/SDL2
PROGRAM_LIBRARY_DIRS := /opt/homebrew/lib
PROGRAM_LIBRARIES := SDL2 SDL2_ttf SDL2_image

#change if g++ is prefered.
CC = clang++
CPPFLAGS += -std=c++20
CPPFLAGS += $(foreach includedir,$(PROGRAM_INCLUDE_DIRS),-I$(includedir))
LDFLAGS += $(foreach librarydir,$(PROGRAM_LIBRARY_DIRS),-L$(librarydir))
LDLIBS += $(foreach library,$(PROGRAM_LIBRARIES),-l$(library))

$(PROGRAM_PATH) : $(PROGRAM_OBJS)
	mkdir $(PROGRAM_LOCATION)
	$(CC) $(LDFLAGS) $^ -o $@ $(LDLIBS)

%.o : %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

all : $(PROGRAM_PATH)

clean:
	rm $(PROGRAM_OBJS) $(PROGRAM_PATH)


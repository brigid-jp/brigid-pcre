CXXFLAGS += -Wall -W -std=c++11 -fvisibility=hidden $(ROCK_CFLAGS)
CPPFLAGS += -Ipcre2/include -I$(ROCK_LUA_INCDIR) -MMD
LDFLAGS += -Lpcre2/lib $(ROCK_LIBFLAG)
LDLIBS += -lpcre2-8

VPATH = ..
TARGET = brigid/pcre2.so
OBJS = \
	common.o \
	module.o

all: $(TARGET)

clean:
	rm -f *.d *.o $(TARGET)

install:
	mkdir -p $(ROCK_LIBDIR)/brigid
	cp $(TARGET) $(ROCK_LIBDIR)/brigid

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) $^ $(LDLIBS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $<

-include *.d

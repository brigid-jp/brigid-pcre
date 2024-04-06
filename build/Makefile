export CFLAGS
CFLAGS += $(ROCK_CFLAGS)
CXXFLAGS += -Wall -W -std=c++11 -fvisibility=hidden $(ROCK_CFLAGS)
CPPFLAGS += -Ipcre2/include -I$(ROCK_LUA_INCDIR) -MMD
LDFLAGS += -Lpcre2/lib $(ROCK_LIBFLAG)
LDLIBS += -lpcre2-8

VPATH = ..
TARGET = brigid/pcre2.so
OBJS = \
	module.o

pcre2_version = 10.43
pcre2_package = pcre2-$(pcre2_version)
pcre2_archive = $(pcre2_package).tar.gz
pcre2_url = https://github.com/PCRE2Project/pcre2/releases/download/$(pcre2_package)/$(pcre2_archive)
pcre2_library = pcre2/lib/libpcre2-8.a

all: $(pcre2_library) $(TARGET)

$(pcre2_archive):
	curl -fLO $(pcre2_url)

$(pcre2_package): $(pcre2_archive)
	gunzip -cd $(pcre2_archive) | tar xf -

$(pcre2_library): $(pcre2_package)
	(cd $(pcre2_package) && ./configure --prefix="`pwd`/../pcre2" --disable-shared --disable-jit)
	make V=1 -C $(pcre2_package) -j 8 install-nodist_includeHEADERS install-libLTLIBRARIES

# clean:
# 	rm -f *.d *.o $(TARGET) *.tar.gz

install:
	mkdir -p $(ROCK_LIBDIR)/brigid
	cp $(TARGET) $(ROCK_LIBDIR)/brigid

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) $^ $(LDLIBS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $<

-include *.d

export CFLAGS ROCK_CFLAGS ROCK_LIBFLAG ROCK_LUA_INCDIR ROCK_LIBDIR
CFLAGS += $(ROCK_CFLAGS)

pcre2_version = 10.43
pcre2_package = pcre2-$(pcre2_version)
pcre2_archive = $(pcre2_package).tar.gz
pcre2_url = https://github.com/PCRE2Project/pcre2/releases/download/$(pcre2_package)/$(pcre2_archive)
pcre2_library = pcre2/lib/libpcre2-8.a

all: $(pcre2_library)

$(pcre2_archive):
	curl -fLO $(pcre2_url)

$(pcre2_package): $(pcre2_archive)
	gunzip -cd $(pcre2_archive) | tar xf -

$(pcre2_library): $(pcre2_package)
	(cd $(pcre2_package) && ./configure --prefix="`pwd`/../pcre2" --disable-shared --disable-jit)
	make V=1 -C $(pcre2_package) -j 8 install-nodist_includeHEADERS install-libLTLIBRARIES

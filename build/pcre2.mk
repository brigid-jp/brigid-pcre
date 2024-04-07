pcre2_version = 10.43
pcre2_package = pcre2-$(pcre2_version)
pcre2_archive = $(pcre2_package).tar.gz
pcre2_url = https://github.com/PCRE2Project/pcre2/releases/download/$(pcre2_package)/$(pcre2_archive)
pcre2_library = pcre2/lib/libpcre2-8.a

export CFLAGS CPPFLAGS
CFLAGS += -std=c99 $(ROCK_CFLAGS)
CPPFLAGS += -DPCRE2_EXP_DECL=extern -DPCRE2_EXP_DEFN=extern

all: $(pcre2_library)

archive: $(pcre2_package).ready
	rm -f -r $(pcre2_archive) $(pcre2_package)/doc $(pcre2_package)/src/sljit $(pcre2_package)/testdata

clean:
	rm -f -r $(pcre2_package) $(pcre2_package).ready pcre2

$(pcre2_package).fetch:
	curl -fLO $(pcre2_url)
	touch $(pcre2_package).fetch

$(pcre2_package).ready: $(pcre2_package).fetch
	gunzip -cd $(pcre2_archive) | tar xf -
	touch $(pcre2_package).ready

$(pcre2_library): $(pcre2_package).ready
	(cd $(pcre2_package) && ./configure --prefix="`pwd`/../pcre2" --disable-shared --disable-jit)
	make -C $(pcre2_package) -j 8 install-nodist_includeHEADERS install-libLTLIBRARIES

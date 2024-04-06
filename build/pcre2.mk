pcre2_version = 10.43
pcre2_package = pcre2-$(pcre2_version)
pcre2_archive = $(pcre2_package).tar.gz
pcre2_url = https://github.com/PCRE2Project/pcre2/releases/download/$(pcre2_package)/$(pcre2_archive)
pcre2_extracted = $(pcre2_package)/.extracted
pcre2_library = pcre2/lib/libpcre2-8.a

export CFLAGS CPPFLAGS
CFLAGS += $(ROCK_CFLAGS)
CPPFLAGS += -DPCRE2_EXP_DECL= -DPCRE2_EXP_DEFN=

all: $(pcre2_library)

clean:
	rm -f -r pcre2 $(pcre2_package)

$(pcre2_archive):
	curl -fLO $(pcre2_url)

$(pcre2_extracted): $(pcre2_archive)
	gunzip -cd $(pcre2_archive) | tar xf -
	touch $(pcre2_extracted)

$(pcre2_library): $(pcre2_extracted)
	(cd $(pcre2_package) && ./configure --prefix="`pwd`/../pcre2" --disable-shared --disable-jit)
	make -C $(pcre2_package) -j 8 install-nodist_includeHEADERS install-libLTLIBRARIES

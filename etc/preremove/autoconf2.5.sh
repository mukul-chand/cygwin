#!/bin/bash

# remove unversion man pages
pushd /usr/share/man/man1 >/dev/null 2>&1
for fn in autoconf autoheader autom4te autoreconf autoscan \
	autoupdate config.guess config.sub ifnames
do
	rm -f ${fn}.1.gz 2>/dev/null || /bin/true
done
popd >/dev/null 2>&1


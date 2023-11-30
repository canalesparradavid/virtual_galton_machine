$(V).SILENT:
.ONESHELL:

all: clear assert compile

compile: compile.sh
	echo "Compiling files."
	sh compile.sh

assert: test.sh
	echo "Executing tests."
	sh test.sh

clear:
	echo "Deleting previous temporary files."
	rm -rf *_tmp

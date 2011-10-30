#!/bin/sh

RELATIVE_DIR=`dirname $0`
cd $RELATIVE_DIR

SCRIPT_DIR=`pwd`
PDF_FILE_NAME=masters_thesis_igor_botyan

if [ -e "$SCRIPT_DIR/$PDF_FILE_NAME.pdf" ]; then
	xdg-open "$SCRIPT_DIR/$PDF_FILE_NAME.pdf"
fi

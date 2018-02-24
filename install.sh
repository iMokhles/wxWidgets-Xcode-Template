#!/bin/sh

# Install wxmWidgets template into /Library/Developer/Xcode/Templates/

XCODE_TMPLTS_FOLDER="/Library/Developer/Xcode/Templates"
sudo mkdir -p $XCODE_TMPLTS_FOLDER
sudo cp -R "$(dirname $0)/wxm" $XCODE_TMPLTS_FOLDER
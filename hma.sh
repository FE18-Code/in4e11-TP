#!/bin/bash

DIR="CodesGeneres/"
TRIGGER="Login"
SED_PATTERN="/$TRIGGER/d"

find $DIR -name  "*" ! -path "./hma.sh" ! -path "./git/*" -type f | xargs sed -i -e $SED_PATTERN
grep -nR $TRIGGER --color=auto $DIR


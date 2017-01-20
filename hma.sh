#!/bin/bash

find CodesGeneres/ -name  "*" ! -path "./hma.sh" ! -path "./git/*" -type f | xargs sed -i -e '/Login/d'


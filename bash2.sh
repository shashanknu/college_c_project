#!/bin/bash

read  user_vers
cat udata.csv | grep -w "$user_vers" | sed s/"$user_vers"// | sed 's/,//g' | sed 's/,//g' | sed 's/ //g' > output2.txt
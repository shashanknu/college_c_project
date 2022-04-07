#!/bin/bash
  
read -sp "" pass_var  
echo $pass_var | sha256sum > output.txt
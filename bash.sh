#!/bin/bash
  
read -sp "" pass_var  
echo $pass_var | base64 > output.txt
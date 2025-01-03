#!/bin/bash

piv=`pio --version`
echo "Using ${piv}"
echo
echo "Target: /dev/knomi"
echo

pio run -e knomiv1_rpi

#pio run -e knomiv1_rpi -t upload


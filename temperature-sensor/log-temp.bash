#!/usr/bin/env bash
#
#   log-temp.bash - Read and log temperature
#

if ! modinfo w1-gpio &> /dev/null; then
    modprobe w1-gpio
fi

if ! modinfo w1-therm &> /dev/null; then
    modprobe w1-therm
fi

while true
do
    TIME=$(date +%s)
    TEMP=$(cut -d "=" -f 2 <<< $(tail -n 1 /sys/bus/w1/devices/28-000006042b94/w1_slave))
    echo "$TIME $TEMP" >> /tmp/temp
    sleep 1m
done

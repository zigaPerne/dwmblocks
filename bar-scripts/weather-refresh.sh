#!/bin/sh
#Updates weather info every 30 min
while :; do
	curl wttr.in > /home/ziga/.local/share/weather-report.txt 2>/dev/null
	sleep 30m
done

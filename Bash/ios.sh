#!/bin/bash

if [ -z $1 ]
then
	echo No Command For iOS Host
	exit
fi

sshpass -p alpine ssh root@127.0.0.1 -p 2222 $1 $2 $3 $4 $5
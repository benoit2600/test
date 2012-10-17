#!/bin/bash
    cd /home/ben/kernel/test
    git branch
    read -n 1 -p "Correct branch? [Y/N]: " 
    if [[ ! $REPLY =~ ^[Yy]$ ]]
    then
	echo -e "\n build canceled"
        exit 1
    fi
    echo -e "\nSTARTING...\n"
    export PATH=$PATH:/opt/toolchain/bin/
    export ARCH=arm
    export SUBARCH=arm
    export CROSS_COMPILE=arm-none-eabi-
	make -j3

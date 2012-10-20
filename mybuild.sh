#!/bin/bash

dir=/home/ben/kernel/test

    cd $dir

function usage ()
{
       echo -e "Usage: (order of parameters are important !)"
       echo -e "        myprog.sh [--compile|--fastboot|--zip] "
       echo -e "\n--compile (-c) : Compile the kernel."
       echo -e "\n--fastboot (-f) : flash the zImage and reboot the device."
       echo -e "\n--zip (-z) : Create a flashable zip file.\n"
}

function makeKernel ()
{
	export PATH=$PATH:/opt/toolchain/bin/
	export ARCH=arm
	export SUBARCH=arm
	export CROSS_COMPILE=arm-none-eabi-
	git branch
	read -n 1 -p "Correct branch? [Y/N]: " 
	if [[ ! $REPLY =~ ^[Yy]$ ]]
	then
		echo -e "\nbuild canceled"
	exit 1
	 fi
	echo -e "\nCompiling the kernel :\n"

	make -j2
	cp $dir/arch/arm/boot/zImage $dir/zipfile/mkboot/
	echo -e ""
	ls -l $dir/zipfile/mkboot/zImage

}
    

function makeZip ()
{
	echo -e "Make the Zip file :"
	rm $dir/zipfile/zipcreate/boot.img

	$dir/zipfile/mkboot/mkbootimg --kernel $dir/zipfile/mkboot/zImage --ramdisk $dir/zipfile/mkboot/ramdisk.cpio.gz --cmdline 'no_console_suspend=1 console=bull's --base 0x30000000 --pagesize 4096 -o $dir/zipfile/zipcreate/boot.img

	cp $dir/drivers/scsi/scsi_wait_scan.ko $dir/zipfile/zipcreate/system/modules/;
			
	zip -r -q $dir/zipfile/ben.zip $dir/zipfile/zipcreate/*

	echo -e ""
	ls -l $dir/zipfile/ben.zip


}

function fastbootFunction ()
{

	echo -e "\n \n Flash the zImage ..." 
	fastboot flash zimage ${dir}/zipfile/mkboot/zImage
	echo -e "Reboot." 
	fastboot reboot
}

while test "$1" != "" ; do
        case $1 in
                -fastboot|-f)
			fastbootFunction;
                      
                ;;
                --compile|-c)
			makeKernel;
                        
 		;;
                --zip|-z)
			makeZip;
                   
                ;;
                --help|-h)
                        usage;
                       exit 0
               
                ;;
                -*)
                        echo "Error: no such option $1"
                        usage
                        exit 1
                ;;
        esac
	echo -e ""
        shift

done

exit 0


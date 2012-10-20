#!/sbin/sh
# mount /system and /data partitions
mount -o rw /dev/block/platform/s3c-sdhci.0/by-name/system /system
mount -o rw /dev/block/platform/s3c-sdhci.0/by-name/userdata /data

# clean modules
rm -f /system/modules/*

# clean boot sound
rm -f /system/media/audio/poweron/PowerOn.*
rm -f /system/media/audio/poweron/poweron.*

# clean init.d scripts
INITD_DIR=/system/etc/init.d
# GLaDOS and Netarchy
rm -f $INITD_DIR/98touchscreen
rm -f $INITD_DIR/99nexusinit
rm -f $INITD_DIR/placeholder
# Trinity
rm -f $INITD_DIR/95dimmers
rm -f $INITD_DIR/98tweak
rm -f $INITD_DIR/99complete
# SG-11UV
rm -f $INITD_DIR/98_startup_script
rm -f $INITD_DIR/99_startup_complete

# wipe Dalvik-cache
# rm -rf /data/dalvik-cache
# rm -rf /cache/dalvik-cache

# unmount /system and /data partitions
umount /system
umount /data


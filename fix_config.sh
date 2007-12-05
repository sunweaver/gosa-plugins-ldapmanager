#!/bin/sh

CONF=/etc/gosa/gosa.conf
cat << EOF

This script will take your current $CONF and will update the menu and tab tags. It
will not touch the parts you have touched between the main tabs.  A backup copy is
created.

EOF
read -n1 -sp "Do you want to continue? (y/n)" answer
echo

if [ "$answer" != "y" -a "$answer" != "Y" ]; then
	echo "Aborted."
	echo
	exit 1
fi

if [ ! -f $CONF ]; then
	echo "Can't find $CONF Aborted."
	echo
	exit 1
fi

cp $CONF $CONF.orig

sed '/<main/,/\/main>/d;/<\/conf>/d' gosa.conf > $CONF
sed -n '/<main/,/\/main>/p' $CONF.orig >> $CONF
echo '</conf>' >> $CONF
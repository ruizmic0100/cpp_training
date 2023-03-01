#!/bin/bash

# sysinfo_page - A script to produce a html file

##### Constants

title="My System Information"
RIGHT_NOW="$(date +"%x %r %Z")"
TIME_STAMP="Update on $right_now by $USER"

##### Functions

system_info()
{
	echo "<h2>System release info</h2>"
	echo "<p>Funciton not yet implemented</p>"
}

show_uptime()
{
	echo "<h2>System uptime</h2>"
	echo "<pre>"
	uptime
	echo "</pre>"
}

drive_space()
{
	echo "<h2>Filesystem space</h2>"
	echo "<pre>"
	df
	echo "</pre>"
}

home_space()
{
	echo "<h2>Home directory space by user</h2>"
	echo "<pre>"
	echo "Bytes Directory"
	du -s /home/* | sort -nr
	echo "</pre>"
}

##### Main

cat <<- _EOF_
	<html>
	<head>
		<title>
		$title $HOSTNAME
		</title>
	</head>
	
	<body>
	<h1>$title $HOSTNAME</h1>
	<p>$TIME_STAMP</p>
	$(system_info)
	$(show_uptime)
	$(drive_space)
	$(home_space)
	</body>
	</html>
_EOF_

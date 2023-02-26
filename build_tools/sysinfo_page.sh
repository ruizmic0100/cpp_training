#!/bin/bash

# sysinfo_page - A script to produce a html file

title="My System Information"
RIGHT_NOW="$(date +"%x %r %Z")"
TIME_STAMP="Update on $right_now by $USER"

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
	</body>
	</html>
_EOF_

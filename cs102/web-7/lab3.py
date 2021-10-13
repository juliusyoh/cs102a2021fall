#!/usr/bin/python
print( "Content-type: text/html\n\n" )

print( """
<html>
<head>
<title>Lab7</title>
</head>
<body>
<table>
""" )

i = 1
while (i < 101):
        print("<tr><td>%s</td></tr>" % (i)) 
        i = i + 1

print( """
</table>
</body>
</html>
""" )

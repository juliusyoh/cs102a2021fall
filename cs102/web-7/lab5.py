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
j = 100

print("<tr><th>N</th> <th>100xN</th> <tr>")
while (i < 101):
        print("<tr><td>%s</td> <td>%s</td></tr>" % (i,j))
        i = i + 1
        j = j + 100

print( """
</table>
</body>
</html>
""" )


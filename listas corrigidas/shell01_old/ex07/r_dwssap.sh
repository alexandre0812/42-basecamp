#cat /etc/passwd |cut -f1 -d ":" | sed 1d | awk NR%2==0 | rev | sort -r | sed -n $(echo "$FT_LINE1,$FT_LINE2")p | sed ':a;N;$!ba;s/\n/, /g'| sed 's/.$/./'

cat /etc/passwd |cut -f1 -d ":" | sed 1d | awk NR%2==0 | rev | sort -r | sed -n $(echo "$FT_LINE1,$FT_LINE2")p | sed ':a;N;$!ba;s/\n/, /g'| sed 's/$/./'| tr -d '\n'
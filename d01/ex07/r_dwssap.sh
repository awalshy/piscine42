cat /etc/passwd | cut -d : -f 1 | grep -v "#" | sed -n "n;p" | rev | sort -r | sed -n ''$FT_LINE1','$FT_LINE2'p' | tr "\n" "," | sed -e "s/,/, /g"  | sed -e "s/..$/./g" | tr -d "\n"

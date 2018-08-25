grep -i "bauer" phonebook | grep -i "nicolas" | head -n 3 | grep -v "San" | cut -c15- | cut -d 'b' -f1 | cut -d 'a' -f 1 | tr -d '\t'

ldapsearch -LLL uid="z*" cn | grep -i cn | sort -r | cut -d " " -f 2,3,4

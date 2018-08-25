touch -r bomb.txt -A '-01' bomb.txt | ls -l -T bomb.txt | cut -d ' ' -f 11

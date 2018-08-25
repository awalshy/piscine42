ifconfig | grep "inet" | grep -v "inet6" | cut -d " " -f 2 | if [ -t 1 ] ; then cat; else echo "Je suis perdu!"; fi

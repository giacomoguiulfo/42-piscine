cat contacts_easy.txt | grep -i Bomber | grep -i Nicolas | awk '{print $(NF-1)}'

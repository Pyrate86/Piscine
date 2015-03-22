ldapsearch -Q objectClass="apple-user" | grep uid: | cut -c6- | sort -bfr

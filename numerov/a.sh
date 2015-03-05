gcc -c numerov.c
gcc -lm numerov.o ../librerie/funzioni.o -lm -o numerov1.out
./numerov1.out>../grafici/Numerov/dati_numerov.csv	
cd ../grafici/Numerov
python3 numerov.py

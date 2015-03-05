gcc -c energia.c
gcc -lm energia.o ../librerie/funzioni.o -lm -o energia.out
./energia.out>../grafici/oscillatore/dati.csv
cd ../grafici/oscillatore
python3 oscillatore.py

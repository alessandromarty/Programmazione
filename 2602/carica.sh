gcc -c carica.c
gcc -c potenziale.c
gcc -lm carica.o ../librerie/funzioni.o -lm -o carica.out
gcc -lm potenziale.o ../librerie/funzioni.o -lm -o potenziale.out
./carica.out>../grafici/Carica/dati_carica.csv	
./potenziale.out>../grafici/Carica/dati_potenziale.csv	
cd ../grafici/Carica
python3 carica.py & python3 campo.py & python3 potenziale.py

gcc -c coeff.c
gcc -lm coeff.o ../librerie/funzioni.o -lm -o coeff.out
./coeff.out>../grafici/Coeff_viriale/dati_coeff.csv	
cd ../grafici/Coeff_viriale 
python3 coeff.py

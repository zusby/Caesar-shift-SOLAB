/**
 * @authors Denise Falcone 110191,
 *          Kacper Henryk Osicki 109598
 */
#include <stdio.h>

#ifndef SOLABPROJECT_DENISE_FALCONE_KACPER_OSICKI_SIMPLEFILECRYPTER_H
#define SOLABPROJECT_DENISE_FALCONE_KACPER_OSICKI_SIMPLEFILECRYPTER_H

#endif //SOLABPROJECT_DENISE_FALCONE_KACPER_OSICKI_SIMPLEFILECRYPTER_H


/**
 * It reads the file, generates a random key, and then encrypts the file in a new file.
 *
 * @param readFile the file to be encrypted
 */
void Encrypt(FILE *readFile);

/**
 * It reads a crypted file, takes the associated key and decrypts it.
 *
 * @param readFile The file we want to read from.
 * @param keyBuffer The key used to previously encrypt the file.
 *
 */
void Decrypt(FILE *readFile, int *keyBuffer);

/**
 * It generates a random key made of 5 digits and saves each one of them
 * in a file (separated by a comma).
 */
void generateRandomKey();

/**
 * This function reads the key file and stores the key values in an array
 *
 * @param keyFile The file that contains the key.
 *
 * @return The keyArray is being returned.
 */
int * getKey(FILE *keyFile);

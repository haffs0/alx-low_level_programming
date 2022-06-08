#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - write character to stdout
 * @c: the character to print
 * Return: Always 0 (success)
 */

int _putchar(char c);


/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);


/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 */

void print_alphabet_x10(void);

/**
 *_islower - print 1 if is lowercase else 0
 */

int _islower(int c);

/**
 * _isalpha - print 1 if it is alphabet else 0
 */

int _isalpha(int c);

/**
 * print_sign - print + if number > 0, 0 if number = 0 and - number < 0
 */

int print_sign(int n);


/**
 * _abs - print positive integer
 */

int _abs(int);

/**
 * print_last_digit - print remainder of a number
 */

int print_last_digit(int);


/**
 * jack_bauer - print minute 00:00 to 23:59
 */

void jack_bauer(void);


/**
 * times_table - print times table
 */

void times_table(void);

#endif


/*
 * Julius Yoh
 * CS102 Fall 2021
 * Homework 5 - Functions.h - Final Version: 12 x 12 Matrix      
 * October 4, 2021
 */

/* These fill the matrices through functions */


void fill12x8 (int matrix1[12][8] );
void fill8x12 (int matrix2[8][12] );

/* This cross multiply the matrices */

void multiply(int matrix1[12][8], int matrix2[8][12], int matrix3[12][12] );

/* These print the matrices through functions */

void print12x8 (int matrix1[12][8] );
void print8x12 (int matrix2[8][12] );
void print12x12 (int matrix3[12][12] );


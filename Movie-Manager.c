#include <stdio.h>


typedef struct date
{
    int day, month, year;
} date;

typedef struct director_info
{
    char* director_surname, director_name;
} director_info;

typedef struct movie
{
    int id;
    char* title;
    director_info* director;
    date* release_date;
} movie;

void insert_movie();
movie * delete_movie(movie *movie_collection, int id);

/* Utility functions */

//Binary search and bubble sort go here

/* Utility functions */

void main(int argc, char* argv[])
{
    movie movie_collection[1];
}

void insert_movie()
{
    //if the array is full reallocate it's size
    //take input from user
    //calculate movie id
    //add it to the array
}

movie * delete_movie(movie *movie_collection, int id)
{
    //use binary search to get the movie by id
    //delete the movie
    //return array
}

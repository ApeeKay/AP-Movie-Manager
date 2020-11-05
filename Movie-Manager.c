#include <stdio.h>
#include <stdlib.h>


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

void insert_movie(movie *movie_collection);
movie * delete_movie(movie *movie_collection, int id);

/* Utility functions */

//Binary search and bubble sort go here

/* Utility functions */

int array_size = 1;
void main(int argc, char* argv[])
{
    movie movie_collection[array_size];
}

void insert_movie(movie *movie_collection)
{
    //if the array is full reallocate it's size
    //take input from user
    //calculate movie id
    //add it to the array
    
    director_info df;
    date dmy;
    movie nam;
    char* director_nam;
    char* director_sur;
    int id += 1;
    int day, month, year;


    printf("Enter the director's name: ");
    scanf("%c", &director_nam);

    printf("Enter the director's surname: ");
    scanf("%c", &director_sur);

    printf("Enter the title of the movie: ");
    scanf("%c", &nam);

    printf("Enter the ID of the movie: ");
    scanf("%d", &id);

    printf("Enter the day, month and year of the release of the movie: ");
    scanf("%d, %d, %d", &day, &month, &year);


    df->director_name = director_nam;
    df->director_surname = director_sur;
    dmy-> day = day;
    dmy-> month = month;
    dmy-> year = year;
    movie->director_info = df;
    movie->title = nam;
    movie->id = id;
    movie->date = dmy; 


    if (sizeof (&movie_collection) == array_size )
    {
        &movie_collection = realloc(&movie_collection, 2*array_size);
        array_size = 2*array_size;
    }
    &movie_collection[id] = movie; 

}

movie * delete_movie(movie *movie_collection, int id)
{
    //use binary search to get the movie by id
    //delete the movie
    //return array
}

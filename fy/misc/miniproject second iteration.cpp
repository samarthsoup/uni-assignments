#include <bits/stdc++.h>
using namespace std;

//assumptions made: there is only one screen, the user will only have to go through the booking process once

const int NUM_MOVIES = 3;

struct Movie {
    string title;
    string showtime;
    float duration;
    int available_seats;
};

Movie movies[NUM_MOVIES];

void initialize_movies() {
    movies[0].title = "mario";
    movies[0].showtime = "0800 hours";
    movies[0].duration = 1.36;
    movies[0].available_seats = 50;
    
    movies[1].title = "mario 2";
    movies[1].showtime = "1500 hours";
    movies[1].duration = 1.72;
    movies[1].available_seats = 65;
    
    movies[2].title = "mario 3";
    movies[2].showtime = "2100 hours";
    movies[2].duration = 2.16;
    movies[2].available_seats = 50;
}

void show_movies() {
    cout << "Available movies:\n";
    for (int i = 0; i < NUM_MOVIES; i++) {
        cout << i+1 << "." << movies[i].title << "\n" << setw(4);
        cout << "timing: " << movies[i].showtime << "\n" << setw(4);
        cout << "duration: " << movies[i].duration << "\n\n";
    }
}

void book_ticket(int movie_index) {
    int num_tickets;
    cout << "how many tickets would you like to book? ";
    cin >> num_tickets;

    if (movies[movie_index].available_seats < num_tickets) {
        cout << "sorry, there are not enough seats available for that movie.\n";
        return;
    }

    movies[movie_index].available_seats -= num_tickets;
    cout << "you have successfully booked " << num_tickets << " ticket(s) for " << movies[movie_index].title << " (showtime " << movies[movie_index].showtime << ").\n";
}

int main() {
    initialize_movies();
    
    show_movies();
    
    int movie_choice;
    cout << "enter the number of the movie you would like to book: ";
    cin >> movie_choice;
    
    if (movie_choice < 1 or movie_choice > NUM_MOVIES) {
        cout << "invalid input.\n";
        return 0;
    }
    
    book_ticket(movie_choice - 1);
    
    return 0;
}
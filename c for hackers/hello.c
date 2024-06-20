#include<stdio.h>
#include<unistd.h>
#include<time.h>
double printcall(long int last_time);
double get_epoch_time();

int main(){
    double last_time = get_epoch_time();
    printf("Waiting for first sleep...\n");
    sleep(1);
    printf("First sleep done, looping printcall...\n");
    while (1){
        last_time = printcall(last_time);
        sleep(1);
    }
    
}

double printcall(long int last_time){
    double curr_time = get_epoch_time();
    printf("Hello World %f \n", (curr_time - last_time));
    return curr_time;
}

double get_epoch_time() {
    struct timespec ts;

    // Get the current time with nanosecond precision
    clock_gettime(CLOCK_REALTIME, &ts);

    // Combine the seconds and nanoseconds to get the time in epoch format with floating nanoseconds
    double epoch_time = ts.tv_sec + ts.tv_nsec / 1.0e9;

    return epoch_time;
}

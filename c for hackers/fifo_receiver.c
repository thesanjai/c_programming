#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define FIFO_SEND "/tmp/fifo_send"
#define FIFO_RECEIVE "/tmp/fifo_receive"
#define BUFFER_SIZE 128

int main() {
    int fd_send, fd_receive;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;

    // Open FIFOs
    fd_send = open(FIFO_SEND, O_RDONLY);
    if (fd_send == -1) {
        perror("open send fifo");
        exit(EXIT_FAILURE);
    }

    fd_receive = open(FIFO_RECEIVE, O_WRONLY);
    if (fd_receive == -1) {
        perror("open receive fifo");
        close(fd_send);
        exit(EXIT_FAILURE);
    }

    printf("Chat started. Waiting for messages...\n");

    while (1) {
        // Read message from FIFO
        bytes_read = read(fd_send, buffer, BUFFER_SIZE - 1);
        if (bytes_read == -1) {
            perror("read");
            close(fd_send);
            close(fd_receive);
            exit(EXIT_FAILURE);
        }

        // Null-terminate the string
        buffer[bytes_read] = '\0';

        // Print received message
        printf("Friend: %s", buffer);

        // Read user input
        printf("You: ");
        fgets(buffer, BUFFER_SIZE, stdin);

        // Write message to FIFO
        if (write(fd_receive, buffer, strlen(buffer)) == -1) {
            perror("write");
            close(fd_send);
            close(fd_receive);
            exit(EXIT_FAILURE);
        }
    }

    // Close FIFOs
    close(fd_send);
    close(fd_receive);
    return 0;
}

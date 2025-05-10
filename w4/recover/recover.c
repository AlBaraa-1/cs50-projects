#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the memory card
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    unsigned char buffer[512];
    FILE *img = NULL;
    int fileCount = 0;
    char filename[8];

    size_t bytesRead;
    while ((bytesRead = fread(buffer, sizeof(unsigned char), 512, file)) == 512)
    {
        // Check if buffer contains the start of a JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            // If a file is already open, close it
            if (img != NULL)
            {
                fclose(img);
            }

            // Create a new filename for the new JPEG
            sprintf(filename, "%03d.jpg", fileCount++);

            // Open a new file for writing
            img = fopen(filename, "w");
            if (img == NULL)
            {
                printf("Could not create output file.\n");
                fclose(file);
                return 1;
            }
        }

        // If a JPEG file is currently open, write the data to it
        if (img != NULL)
        {
            fwrite(buffer, sizeof(unsigned char), 512, img);
        }
    }

    // Handle the last partially read block, if any
    if (bytesRead > 0 && img != NULL)
    {
        fwrite(buffer, sizeof(unsigned char), bytesRead, img);
    }

    // Close any remaining open files
    if (img != NULL)
    {
        fclose(img);
    }

    fclose(file);
    return 0;
}

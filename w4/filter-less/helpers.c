#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            int avg = round(
                (float) (image[j][i].rgbtBlue + image[j][i].rgbtRed + image[j][i].rgbtGreen) / 3);

            image[j][i].rgbtBlue = avg;
            image[j][i].rgbtRed = avg;
            image[j][i].rgbtGreen = avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {

            double sepiaRed = round((float) 0.393 * image[j][i].rgbtRed +
                                    0.769 * image[j][i].rgbtGreen + 0.189 * image[j][i].rgbtBlue);
            double sepiaGreen = round((float) 0.349 * image[j][i].rgbtRed +
                                      0.686 * image[j][i].rgbtGreen + 0.168 * image[j][i].rgbtBlue);
            double sepiaBlue = round((float) 0.272 * image[j][i].rgbtRed +
                                     0.534 * image[j][i].rgbtGreen + 0.131 * image[j][i].rgbtBlue);
            if (sepiaRed > 255)
                sepiaRed = 255;
            if (sepiaGreen > 255)
                sepiaGreen = 255;
            if (sepiaBlue > 255)
                sepiaBlue = 255;

            image[j][i].rgbtRed = sepiaRed;
            image[j][i].rgbtGreen = sepiaGreen;
            image[j][i].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < (int) width / 2; j++)
        {
            RGBTRIPLE tmp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = tmp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a temporary image to store the blurred pixels
    RGBTRIPLE temp_image[height][width];

    // Loop over each pixel in the original image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sumRed = 0, sumGreen = 0, sumBlue = 0;
            int count = 0;

            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int ni = i + di;
                    int nj = j + dj;

                    // Check if the neighboring pixel is within the image boundaries
                    if (ni >= 0 && ni < height && nj >= 0 && nj < width)
                    {
                        sumRed += image[ni][nj].rgbtRed;
                        sumGreen += image[ni][nj].rgbtGreen;
                        sumBlue += image[ni][nj].rgbtBlue;
                        count++;
                    }
                }
            }

            // Calculate the average color values
            temp_image[i][j].rgbtRed = round((float) sumRed / count);
            temp_image[i][j].rgbtGreen = round((float) sumGreen / count);
            temp_image[i][j].rgbtBlue = round((float) sumBlue / count);
        }
    }

    // Copy the temporary image back to the original image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp_image[i][j];
        }
    }

    return;
}

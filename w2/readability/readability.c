#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int countLetters(string text);
int countWords(string text);
int countSentence(string text);
int calcIndex(int letters, int words, int sentences);

int main(void)
{
    string text = get_string("Text: ");

    int letters = countLetters(text);
    int words = countWords(text);
    int sentence = countSentence(text);

    float index = calcIndex(letters, words, sentence);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) index);
    }
}

int countLetters(string text)
{
    int letters = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int countWords(string text)
{
    int wordCount = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (!isspace(text[i]) && (isspace(text[i + 1]) || text[i + 1] == '\0'))
        {
            wordCount++;
        }
    }
    return wordCount;
}

int countSentence(string text)
{
    int sentences = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}

int calcIndex(int letters, int words, int sentences)
{
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;
    return round(0.0588 * L - 0.296 * S - 15.8);
}

from cs50 import get_string


def main():
    text = get_string("Text: ")
    letters = countLetters(text)
    words = countWords(text)
    sentences = countSentences(text)
    index = calcIndex(letters, words, sentences)

    if index < 1:
        print("Before Grade 1")
    elif index > 16:
        print("Grade 16+")
    else:
        print(f"Grade {index}")


def countLetters(text):
    letters = 0
    for char in text:
        if char.isalpha():
            letters += 1
    return letters


def countWords(text):
    words = 0
    length = len(text)
    for i in range(length):
        if not text[i].isspace() and (i + 1 == length or text[i + 1].isspace()):
            words += 1
    return words


def countSentences(text):
    sentences = 0
    for char in text:
        if char in {".", "!", "?"}:
            sentences += 1
    return sentences


def calcIndex(letters, words, sentences):
    L = letters / words * 100
    S = sentences / words * 100
    index = round(0.0588 * L - 0.296 * S - 15.8)
    return index


main()

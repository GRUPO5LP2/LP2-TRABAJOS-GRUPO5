def print_list(words):
    print(" ".join(words))

def main():
    words = []
    print("Ingrese palabras (ingrese 'fin' para terminar):")
    while True:
        word = input()
        if word.lower() == "fin":
            break
        words.append(word)

    print("Lista original:")
    print_list(words)

    words.sort()
    print("Lista ordenada alfabeticamente:")
    print_list(words)

    word_to_count = input("Ingrese la palabra a contar: ")
    count = words.count(word_to_count)
    print(f"La palabra '{word_to_count}' aparece {count} veces en la lista.")

    words = [word.upper() for word in words]
    print("Lista en mayúsculas:")
    print_list(words)

if __name__ == "__main__":
    main()

def messagereverse(message):
    """
    message: string message
    """
    if not (message and message.strip()):
        return message
    return messagereverse(message[1:])+message[0]


if __name__ == "__main__":
    message=input("Ingrese un message: ")    
    print(f'Su mensaje inverso es: {messagereverse(message)}')
    
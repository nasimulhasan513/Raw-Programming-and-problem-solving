def capitalize(str):
    # words = []
    # for word in str.split(" "):
    #     words.append(word[0].upper()+word[1:])
    # return " ".join(words)

    result = str[0].upper()
    for i in range(1,len(str)):
        if str[i-1]==" ":
            result+= str[i].upper()
        else:
            result+=str[i]
    return result


sentence = "this is nasimul hasan deep"

print(capitalize(sentence))

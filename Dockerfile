FROM gcc:4.9
WORKDIR /usr/src/
COPY . .

RUN apt-get update
RUN apt-get install -y zsh
RUN wget https://github.com/robbyrussell/oh-my-zsh/raw/master/tools/install.sh -O - | zsh || true

RUN echo 'grun() { \n\
    basename="$(basename -- $1)" \n\
    dirname="$(dirname -- $1)" \n\
    filename="${basename%.*}" \n\
    g++ $1 -o $dirname/$filename \n\
    if [[ $? = 0 ]]; then \n\
        ./$dirname/$filename \n\
    fi \n\
}' >> ~/.zshrc

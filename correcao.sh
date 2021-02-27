# CLONE YOUR PROJECT
cd ~
git clone cole o link do seu repositorio aqui libft
cd libft
norminette *.c *.h

# CLONE ALL GITHUB TESTERS
cd ..
git clone https://github.com/jtoty/Libftest.git
git clone https://github.com/alelievr/libft-unit-test.git
git clone https://github.com/ska42/libft-war-machine.git
git clone https://github.com/Tripouille/libftTester.git

# RUN libftTester
mv libftTester/  libft
cd libft/libftTester && make
cd

# RUN Libftest
cd Libftest
./grademe.sh
./grademe.sh
cd ..


# RUN libft-war-machine
cd libft-war-machine
./grademe.sh
sed -i '' "s/PATH_LIBFT=../PATH_LIBFT=..\/libft/" my_config.sh
./grademe.sh
cd ..

# RUN libft-unit-test
cd libft-unit-test
make f
cd ..

# Go home
cd

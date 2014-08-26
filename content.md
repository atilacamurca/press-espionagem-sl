# Introdução

### Introdução

\begin{figure}
	\includegraphics[scale=0.5]{img/Espionagem-por-Cazo.jpg}
	\caption{Nicolás Maduro e Dilma Rousseff}
\end{figure}

---

\slidetitle{SSL}
\slidesubtitle{Secure Socket Layer}

# Acesso seguro através da internet

### Acesso seguro através da internet

Para acessar a internet com segurança usamos o protocolo SSL junto com o HTTP.

\begin{figure}
	\includegraphics[scale=0.4]{img/gmail-ssl.png}
	\caption{SSL do Gmail}
\end{figure}

### Acesso seguro através da internet

SSL é uma nova camada de protocolo que opera em cima do protocolo TCP.

Permite ambas as máquina, cliente e servidor, estabelecer uma conexão criptografada.

---

### Acesso seguro através da internet

Entretanto isso é uma especificação, ou seja, alguém tem que implementar.
Algumas empresas que o implementam:

* OpenSSL ([http://www.openssl.org/](openssl.org)) - Implementação livre e gratuita do SSL.
* Apache-SSL ([http://www.apache-ssl.org/](apache-ssl.org)) - um servidor web seguro,
	baseado no OpenSSL.
* SSLeay (<ftp://ftp.uni-mainz.de/pub/internet/security/ssl/SSL/>) - uma implementação
	gratuita do Netscape's Secure Socket Layer.
* Planet SSL (<http://www.rsasecurity.com/standards/ssl/developers.html>) - provê SSL para
	programas em C e Java.

### Acesso seguro através da internet

Exemplo de mesma implementação para problemas diferentes:

multiplicação de 2 números:

~~~
2 * 3
~~~

ou

~~~
2 + 2 + 2
~~~

---

\slidetitle{Software Livre é seguro?}

---

### Software Livre é seguro?

\begin{figure}
	\includegraphics[scale=0.35]{img/codigos-compilados.png}
	\caption{Códigos Compilados}
\end{figure}

---

### Software Livre é seguro?

\begin{figure}
	\includegraphics[scale=0.36]{img/codigos-interpretados.png}
	\caption{Códigos Interpretados}
\end{figure}

---

\slidetitle{O quão é seguro uma criptografia usando SSL?}

---

\slidesubtitle{Levaria um tempo significativamente maior que a idade do universo para quebrar uma chave de 128-bits.}

Estima-se um pouco mais de 13 bilhões de anos.

Fonte: <http://www.inet2000.com/public/encryption.htm>

<http://www.digicert.com/TimeTravel/math.htm>

---

\slidetitle{Hackers e Crackers}

# Hackers e Crackers

### Hackers e Crackers

Crackers são pessoas que invadem computadores com propósitos criminais ou ganho pessoal.

Enquanto Hackers podem ser especialistas em segurança contratados por empresas, com o
objetivo de conhecer as vulnerabilidades e saná-las.

## Hackeando Google e Duck Duck Go

### Hackeando Google

Se hackear é uma coisa boa, então alguns sites permitem que isso seja feito de forma
a otimizar processos, como uma busca. Vejamos um exemplo com o Google quando fazemos a busca:

~~~
comsolid filetype:pdf
~~~

Além de buscar a palavra *comsolid*, ele busca apenas arquivos pdf.

---

### Hackeando Google

Ou ainda podemos fazer buscas em determinados sites somente. Basta fazer uma busca na forma:

~~~
inkscape site:comsolid.org
~~~

Essa busca pesquisa a palavra *inkscape* no site comsolid.org

### Hackeando Duck Duck Go

Duck Duck Go é um motor de busca preocupado com a pesquisa em si e a privacidade.

<https://duckduckgo.com/>

Possui parte de seu código livre, isso inclui plugins, add-ons, etc. Página do github

<https://github.com/duckduckgo/>

### Hackeando Duck Duck Go

Duck Duck Go permite *hacks* mais engenhosos. Vamos a eles:

* !google comsolid
* expand http://va.mu/dIwg
* hello world python
* ip address
* github latexila
* @comsolid
* 61900
* age of linus torvalds
* define free software
* reverse dilosmoc

### Hackeando Duck Duck Go

Temos ainda o <http://duckduckhack.com/>

\begin{figure}
	\includegraphics[scale=0.25]{img/duckduckhack.png}
	\caption{Duck Duck Hack}
\end{figure}

## Técnicas para quebrar senhas

### Técnicas para quebrar senhas

A técnica mais conhecida e natural é a força bruta, ou seja, tentar todas
as combinações possíveis até encontrar. Isso funciona até certo ponto, quando
a entrada é pequena.

Num artigo escrito por Dan Goodin no site <http://arstechnica.com> em que descreve como
Kevin Young, um pesquisador de segurança de senhas, procedeu para descriptografar
senhas vazadas pelo Antisec de uma empresa chamada Stratfor.

---

### Técnicas para quebrar senhas

Após quebrar 60% das senhas usando listas de senhas disponíveis em:

* Hashcat - <http://hashcat.net/oclhashcat-plus/>
* John the Ripper  - <http://www.openwall.com/john/>

Para os outros 40% ele ficou "sem palavras", então onde encontrá-las?

Que tal Wikipedia, Youtube, Bíblia, Projeto Gutenberg?

---

### Técnicas para quebrar senhas

Uma das senhas era "crotalus atrox", nome científico de uma cobra. Tal senha foi quebrada
graças a esta página da Wikipedia: <https://en.wikipedia.org/wiki/Crotalus_atrox>

Em seguida outras senhas fortes por serem grandes foram encontradas como:

* "from genesis to revelations" (26)
* "I cant remember anything" (24)
* "thereisnofatebutwhatwemake" (26)
* "givemelibertyorgivemedeath" (26)

## Vazamento de senhas ao Linkedin

### Vazamento de senhas ao Linkedin

Em Junho de 2012 um usuário anônimo postou no site <http://insidepro.com/>
uma lista com 6.5 milhões de hashs únicos referentes a senhas pedindo ajuda
para recuperá-las.

Após quebrar muitas das senhas descobriu-se que se tratava de um banco de senhas
do site Linkedin. Essa descoberta foi possível pelo número de senhas com a palavra
*linkedin*.

---

### Vazamento de senhas ao Linkedin

Na lista existiam:

* 1 - linkedin (4408)
* 2 - link (2638)
* 3 - linked (2135)

Outras senhas encontradas:

* 8  - love (1018)
* 11 - password (856)
* 16 - abc (750)

Mais informações em: <http://www.ma.rhul.ac.uk/static/techrep/2013/MA-2013-07.pdf>

## Engenharia reversa em firmware D-Link

### Engenharia reversa em firmware D-Link

Todos sabemos que a D-Link é especializada em fazer roteadores, e eles são um bom
local para *backdoors*. E isso foi exatamente que Craig Heffner autor no blog
<http://www.devttys0.com> encontrou.

Ele encontrou a partir de uma engenharia reversa no firmware de uma dos roteadores.

---

### Engenharia reversa em firmware D-Link

Após notar que certa função chamada `alpha_auth_check` soava suspeita, ele foi
saber o que exatamente ela fazia. Após um tempo ele chegou no seguinte trecho de
código:

\inputccodefile{ src/d-link.c }

---

### Engenharia reversa em firmware D-Link

Baseado no código fonte das páginas HTML e outros detalhes é sensato concluir que
os seguintes modelos são afetados:

* DIR-100
* DIR-120
* DI-624S
* DI-524UP
* DI-604S
* DI-604UP
* DI-604+
* TM-G5240

---

### Engenharia reversa em firmware D-Link

Quem quiser fazer um teste real existe um código em Python escrito pelo próprio
Craig e pode ser encontrado em:

<http://pastebin.com/vbiG42VD>

\inputpycodefile{ src/trecho-backdoor.py }

---

\slidetitle{Ataque ao Kernel}

## Ataque ao Kernel

### Ataque ao Kernel

<http://linux.slashdot.org/story/13/10/09/1551240/the-linux-backdoor-attempt-of-2003>

Em 2003, houve uma tentativa de backdoor no Kernel do Linux.

\inputccodefile{ src/backdoor.c }

Bastava chamar a função `wait4` e você viraria *root*.

---

### Ataque ao Kernel

Comparemos os códigos original e o backdoor, e vejam se encontram a diferença.

\inputccodefile{ src/original.c }

\inputccodefile{ src/backdoor.c }

# Marco Civil da Internet no Brasil

### Marco Civil da Internet no Brasil

**O que é Marco Civil?**

É um projeto de Lei que visa estabelecer direitos e deveres na utilização da Internet no Brasil.
É a constituição da Internet no país.

---

### Quais são os direitos e deveres?

* **Neutralidade**: proíbe que provedores de internet discriminem certos serviços
	em detrimento de outros.
* **Armazenamento de dados**: Operação de coleta de dados no Brasil deve respeitar
	a privacidade, proteção dos dados e sigilo das comunicações privadas.
* **Retirada de conteúdo**: entidades que oferecem conteúdo e aplicações só serão
	responsabilizadas por danos gerados por terceiros se não acatarem ordem
    judicial exigindo a retirada dessas publicações.

---

### Quais são os direitos e deveres?

* **Fim do marketing dirigido**: as empresas de acesso não poderão "espiar" o conteúdo
	das informações trocadas pelos usuários na rede. Há interesse em fazer isso com
    fins comerciais, como para publicidade.
* **Sigilo e privacidade**: Provedores de acesso à internet serão obrigados a guardar
	os registros das horas de acesso e do fim da conexão dos usuários pelo prazo de
    seis meses, mas isso deve ser feito em ambiente controlado.

Para mais detalhes: <http://www.molon1313.com.br/marco-civil-da-internet/>

---

### Onde encontrar essa palestra?

\begin{center}
Você pode baixar essa palestra e ainda outras em:

\bigskip

\large{\url{http://sige.comsolid.org/u/atilacamurca}}
\end{center}

---

\slidetitle{Dúvidas?}

---

### Conecte-se

\begin{center}
E-mail:\\
\texttt{camurca.home@gmail.com}

\medskip

Twitter:\\
\url{http://twitter.com/\#!/atilacamurca}

\medskip

Blog MAD3 Linux:\\
\url{http://www.mad3linux.org}

\medskip

COMSOLiD:\\
\url{http://comsolid.org/}\\
\url{http://twitter.com/\#!/comsolid}\\
\url{https://www.facebook.com/comsolid}

\medskip

Github:\\
\url{https://www.github.com/atilacamurca}
\end{center}

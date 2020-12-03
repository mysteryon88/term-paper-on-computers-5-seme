Y_int = [0.115 0.172; 0.123 0.123; 0.129 0.1; 0.138 0.12];
Y_short = [0.15 0.116; 0.173 0.133; 0.132 0.142; 0.127 0.12];
Y_double = [0.501 0.128; 0.49 0.127; 0.619 0.448; 0.506 0.431];
Y_float = [0.291 0.143; 0.304 0.147; 0.301 0.306; 0.276 0.321];
Y_char = [0.116 0.097; 0.107 0.102; 0.108 0.111; 0.148 0.107];
X = categorical({'Сложение','Вычитание','Умножение','Деление'});
figure('Name', 'Int в регистрах и памяти', 'NumberTitle', 'off');
bar(X, Y_int)
legend({ 'В регистрах', 'В памяти' });
figure('Name', 'Short в регистрах и памяти', 'NumberTitle', 'off');
bar(X, Y_short)
legend({ 'В регистрах', 'В памяти' });
figure('Name', 'Double в регистрах и памяти', 'NumberTitle', 'off');
bar(X, Y_double)
legend({ 'В регистрах', 'В памяти' });
figure('Name', 'Float в регистрах и памяти', 'NumberTitle', 'off');
bar(X, Y_float)
legend({ 'В регистрах', 'В памяти' });
figure('Name', 'Char в регистрах и памяти', 'NumberTitle', 'off');
bar(X, Y_char)
legend({ 'В регистрах', 'В памяти' });

var correctAnswersCount = 0;
	function askQuestion(textBoxId, answer) {
			var userAnswer = document.getElementById(textBoxId).value;
			userAnswer = userAnswer.toLowerCase();
			if (userAnswer == answer) {
			correctAnswersCount++;	 
		}
	}
	function playPuzzles() {
		askQuestion("userAnswer1", "бычок");
		askQuestion("userAnswer2", "кошечка");
		askQuestion("userAnswer3", "зайка");
		alert ("Вы угадали " + correctAnswersCount + " загадок")
}

function playGuess() {
	var min = 1;
	var max = 100;
	var guessNumber = Math.floor( Math . random () * ( max - min + 1 )) + min; // Загадываем случайное число
		alert( "Компьютер загадал число от " + min + " до " + max + ".\nУгадай его за 7 попыток." );
			var tryCount = 0; // Номер попытки
			var userAnswer;
			
			do
			{
			tryCount = tryCount + 1; // Увеличиваем количество попыток на единицу
			userAnswer = +prompt( tryCount + " попытка. Твой вариант:" );
				if ( userAnswer > guessNumber )
					alert( "Много!" );
				if ( userAnswer < guessNumber )
					alert( "Мало!" );
				}
				while (userAnswer != guessNumber && tryCount < 7 );
					if (userAnswer == guessNumber )
						alert( "Поздравляем! Ты угадал!" );
					else
						alert( "Ты проиграл! Попробуй еще разок!" );
}

function playGuess_mp() {
	//Дописать игру “Угадай число” (по желанию). Сделать игру с двумя игроками.

	//Ввод переменных
	var answer = parseInt(Math.random() * 100);
	var userAnswer = null;
	var userSwitch = 1
	
	//Начало цикла
	while (true) {		

		//Алгоритм игры
		userAnswer = prompt("Игрок № " + userSwitch + ", ваш ход!\nВведите число от 0 до 100.\nДля выхода нажмите q.");
		if (userAnswer == "q") {
			break;
		}
		userAnswer = parseInt(userAnswer);
		if (userAnswer > answer) {
			alert("Игрок № " + userSwitch + "!\nВаш ответ слишком большой");
		} else if (userAnswer < answer) {
			alert("Игрок № " + userSwitch + "!\nВаш ответ слишком маленький");
		} else if (userAnswer == answer) {
			alert("Игрок № " + userSwitch + "!\nВы угадали и выиграли!");
			break;
		} else {
			alert("Игрок № " + userSwitch + "! Внимательней! Необходимо вводить числа!");
		}

		//Смена игроков
		if (userSwitch == 1) {
			userSwitch = 2;
		} else {
			userSwitch = 1;
		}
	}
	//Конец цикла
}
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<link rel="stylesheet" href="style.css">
	<title>Личный сайт студента GeekBrains</title>
	</head>
<body>
	<div id="header">
		<a href="index.html">Главная</a> <span>/<span>
		<a href="puzzles.php">Загадки</a> <span>/<span>
		<a href="guess.html">Угадайка</a> <span>/<span>
		<a href="guess_mp.html">Угадайка (Мультиплеер)</a>
		</div>

		<div id="contentWrap">
			<div id="content">
				<div id="center">
					<h1>Загадки</h1>
					<div id="box">

						<form action="puzzles.php" method="GET">
							<p>Идёт, мычит, качается...</p>
							<input type="text" name="userAnswer1">

							<p>Мягкие лапки, а в лапках царапки.</p>
							<input type="text" name="userAnswer2">

							<p>Прыг да скок, длинные уши, белый бок.</p>
							<input type="text" name="userAnswer3">
							<br><br>
							<a>
							<input type="submit" value="Отправить для проверки на сервер">
							</a>
						</form>
						
					<?php
						$userAnswer1 = $_GET ["userAnswer1"];
						$userAnswer2 = $_GET ["userAnswer2"];
						$userAnswer3 = $_GET ["userAnswer3"];
							/*
							$userAnswer1 = strtolower(string $userAnswer1);
							$userAnswer2 = strtolower(string $userAnswer2);
							$userAnswer3 = strtolower(string $userAnswer3);
							*/

						if ( !empty($userAnswer1) && !empty($userAnswer2) && !empty($userAnswer3) ) {
							$score = 0;

							if ($userAnswer1 == "бычок") {
								echo "1 - Правильно";
								$score++;
							} else {
								echo "1 - НЕ правильно";
							}

							echo "<br>";

							if ($userAnswer2 == "кошечка") {
								echo "2 - Правильно";
								$score++;
							} else {
								echo "2 - НЕ правильно";
							}

							echo "<br>";

							if ($userAnswer3 == "зайка") {
								echo "3 - Правильно";
								$score++;
							} else {
								echo "3 - НЕ правильно";
							}

							echo "<br><br>";
							echo "Вы отгадали " . $score . " загадок";							
						}
					?>
						
					</div>
				</div>
			</div>
		</div>
			<div id="footer">
				Copyrights &copy; 2016 <a href= "https://geekbrains.ru" target=”_blank”>GeekBrains</a>
			</div>
			
		<script src="script.js"></script>
</body>
</html>
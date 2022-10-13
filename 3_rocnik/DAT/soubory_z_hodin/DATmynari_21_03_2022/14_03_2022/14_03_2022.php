<html>
<head>
<title>14_03_2021</title>
</head>
<body>
<h1>Formulář - vložení/výpis</h1>
<h3>14.03.2021</h3>

<form action="14_03_2022_skript.php" method="post">
<fieldset>
  <legend>Osobní údaje:</legend>
  <label></label><input type="text" name="jmeno" placeholder="Jméno" required><br>
  <label></label><input type="text" name="prijmeni" placeholder="Příjmení" required><br>
  <label></label><input type="text" name="email" placeholder="email@email.cz" required><br>
  <label>Pohlaví </label><input type="radio" name="pohlavi" value="1" checked="checked">muž
  <label></label><input type="radio" name="pohlavi" value="2">žena<br>
  <label>Souhlasím se zpracováním osobních údajů: </label><input type="checkbox" name="souhlas" value="0"><br><br>
  <input type="submit" name="submit" value="Odeslat">
</body>
</html>
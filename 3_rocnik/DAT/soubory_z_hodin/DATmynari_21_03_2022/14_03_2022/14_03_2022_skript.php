<?php
if ($_POST){
  if (isset($_POST["submit"])){
  
  $jmeno = $_POST["jmeno"];
  $prijmeni = $_POST["prijmeni"];
  $email = $_POST["email"];
  $pohlavi = $_POST["pohlavi"];
  $souhlas = $_POST["souhlas"];
  
  if(isset ($_POST["souhlas"]))
  {

    echo "<br>-------------------------------------------<br>";
    echo "Údaje z formuláře byly odeslány do databáze!<br>";
    echo "-------------------------------------------<br>";
    
    if (is_numeric($jmeno))
    {
      echo "Jméno: nebyl vložen textový údaj!<br>";
      }else echo "Jméno: ". ucfirst($jmeno) . "<br>";
      
    if (is_numeric($prijmeni))
    {
      echo "Příjmení: nebyl vložen textový údaj!<br>";
      }else echo "Příjmení: ". ucfirst($prijmeni). "<br>";
      
    echo "Email: ".$email."<br>";
    
    switch($pohlavi)
    {
      case 1: $pohlavi="muž";break;
      case 2: $pohlavi="žena";break;
      default: "Nebylo zvoleno pohlaví!";
    }
      echo "Pohlaví: ".$pohlavi;
      
  }else echo "Nesouhlasil jste s odesláním dat!";
  }
  }
  


?>
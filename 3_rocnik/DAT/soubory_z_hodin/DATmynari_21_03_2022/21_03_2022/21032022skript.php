<?php

  

if ($_POST){
  if (isset($_POST["submit"])){
  
  $jmeno = $_POST["jmeno"];
  $prijmeni = $_POST["prijmeni"];
  $email = $_POST["email"];
  
    echo "-------------------------------------------<br>";
    echo "Údaje z formuláře byly uloženy do souboru!<br>";
    echo "-------------------------------------------<br>";
    
    $file = fopen("data.txt","a");
    
    if($file == NULL){
      echo "Chyba při otevření souboru!";
      exit;
    }
    
    fputs($file,"$jmeno|$prijmeni|$email\n");
    fclose($file);
    
    
    /*if (isset($_POST["submit2"])) {
    echo "-------------------------------------------<br>";
    echo "Výpis dat ze souboru<br>";
    echo "-------------------------------------------<br>";   */
    
  }
  
  }

  
  
  
  
?>
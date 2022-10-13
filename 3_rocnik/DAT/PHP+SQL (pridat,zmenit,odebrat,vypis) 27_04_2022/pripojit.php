<?php
  /* vytvoření připojení s DB serverem s případnou hláškou */
  $spojeni = mysqli_connect("localhost","root","","mynari_3b")
  or die("Problém s připojením k serveru nebo databázi");
  
  /* nastavení kódování */
  mysqli_set_charset($spojeni,"utf8");
?>
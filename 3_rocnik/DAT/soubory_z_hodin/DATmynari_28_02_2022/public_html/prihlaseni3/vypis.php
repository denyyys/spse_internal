<!DOCTYPE html>
<html lang='cs'>
  <head>
    <meta charset='utf-8'>  
    <title>Formulář v PHP</title>
    <!-- <meta http-equiv='X-UA-Compatible' content='IE=edge'> -->
    <link href='/favicon.png' rel='shortcut icon' type='image/png'>
    <link href='style.css' rel='stylesheet' type='text/css'>    
  </head>
  
  <body>
  <h1>Výpis údajů</h1>  

    <table class="vypis">
     <tr>
      <td>
      <?php
        if (isset($_GET["username"]) && isset($_GET["password"])) {       
            $username = $_GET["username"];
            $password = $_GET["password"];       
            echo "<div class='nadpis'>Metoda GET</div><br>";
            echo "<div class='vlevo'>Uživatelské jméno: <b>" . $username . "</b></div><br>";
            echo "<div class='vlevo'>Heslo: <b>" . $password . "</b></div><br>";  
            echo "<div class='vlevo'>Výpis asociativního pole: </div><br>";
            print_r($_GET);          
                    
        }  else if (isset($_POST["username"]) && isset($_POST["password"])) {       
              $username = $_POST["username"];
              $password = $_POST["password"];      
              echo "<div class='nadpis'>Metoda POST</div><br>"; 
              echo "<div class='vlevo'>Uživatelské jméno: <b>" . $username . "</b></div><br>";
              echo "<div class='vlevo'>Heslo: <b>" . $password . "</b></div><br>";
              echo "<div class='vlevo'>Výpis asociativního pole: </div><br>";
              print_r($_POST);                                  
            } 
        ?>
        </td>   
      </tr>     
    </table> 
    <p><a href="prihlaseni.php">Zpět na úvodní formulář</a></p>
     
  </body>
</html>





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

  <h1>Formulář - zpracování údajů</h1>  
    <table class="metoda">
      <tr>
        <td class="stred"><span class="nadpis">Metoda GET<span>
          <form enctype="multipart/form-data" action="prihlaseni.php" method="get"><br>
            <input type="text" maxlength="10" name="username" placeholder="uživatelské jméno" required><br><br>
            <input type="password" maxlength="5" name="password" placeholder="heslo" required><br><br>
            <input type="submit" name="reset" value="Resetovat"> <input type="submit" name="submit" value="Odeslat">    
          </form>   
        </td>   
      </tr>  
    </table>     

    <table class="metoda">
      <tr>
        <td><span class="nadpis">Metoda POST<span>
          <form enctype="multipart/form-data" action="prihlaseni.php" method="post"><br>
            <input type="text" maxlength="10" name="username" placeholder="uživatelské jméno" required><br><br>
            <input type="password" maxlength="5" name="password" placeholder="heslo" required><br><br>
            <input type="submit" name="reset" value="Resetovat"> <input type="submit" name="submit" value="Odeslat">    
          </form>   
        </td>   
      </tr>  
    </table>    
  
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
  </body>
</html>



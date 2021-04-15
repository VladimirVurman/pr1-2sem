/ 1. Исходные данные /

SELECT `author`.*, `client`.*, `film`.*, `usluga`.*
FROM `author`
    LEFT JOIN `film` ON `film`.`Author of Film` = `author`.`AuthorID`
    LEFT JOIN `usluga` ON `usluga`.`FilmID` = `film`.`FilmID`
    LEFT JOIN `client` ON `usluga`.`ClientID` = `client`.`UniqueID`

/ 2. Список фильм по цене /
SELECT `film`.`Price`, `film`.`FilmID`
FROM `film`
WHERE `film`.`Price` < '500';


/ 3. Список клиентов по определенному адресу/
SELECT `client`.`Address`, `client`.`UniqueID`
FROM `client`
WHERE `client`.`Address` = 'Ришельевская 4';

/ 4.Алфавитный список клиентов /
SELECT `client`.`F`, `client`.`UniqueID`
FROM `client`
WHERE `client`.`F` BETWEEN 'П' AND 'Т' ;

/ 5. Запрос с расчетами /
   UPDATE `film` SET `price`=`price`* (1.3);
SELECT `client`.`F`, `client`.`I`, `client`.`O`, `film`.`Film`, `film`.`Price`
FROM `client`
    LEFT JOIN `usluga` ON `usluga`.`ClientID` = `client`.`UniqueID`
    LEFT JOIN `film` ON `usluga`.`FilmID` = `film`.`FilmID`
ORDER BY `client`.`F` ASC

    
/ 6. Запрос с параметрами /






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


    

SELECT DISTINCT name
FROM people
WHERE id IN (
    SELECT s2.person_id
    FROM stars s1
    JOIN stars s2 ON s1.movie_id = s2.movie_id
    WHERE s1.person_id = (SELECT id FROM people WHERE name = 'Kevin Bacon' AND birth = '1958')
    AND s2.person_id <> (SELECT id FROM people WHERE name = 'Kevin Bacon' AND birth = '1958')
);

-- 코드를 입력하세요
SELECT DR_NAME, DR_ID, MCDP_CD, DATE_FORMAT(HIRE_YMD,'%Y-%m-%d') AS HIRE_YMD
FROM DOCTOR
WHERE MCDP_CD = 'CS' OR MCDP_CD = 'GS'
ORDER BY HIRE_YMD DESC, DR_NAME


# olumn name	Type	Nullable
# DR_NAME	VARCHAR(20)	FALSE
# DR_ID	VARCHAR(10)	FALSE
# LCNS_NO	VARCHAR(30)	FALSE
# HIRE_YMD	DATE	FALSE
# MCDP_CD	VARCHAR(6)	TRUE
# TLNO	VARCHAR(50)	TRUE
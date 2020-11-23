import requests
headers = {
    'cookie': '_ga=GA1.2.1976496781.1511868474; geeksforgeeks_consent_status=dismiss; __utmc=245605906; __utma=245605906.1976496781.1511868474.1551590114.1551763565.147; __utmz=245605906.1551763565.147.130.utmcsr=google|utmccn=(organic)|utmcmd=organic|utmctr=(not%20provided); _gid=GA1.2.1624225676.1551765473; __utmb=245605906.4.10.1551763565',
    'origin': 'https://ide.geeksforgeeks.org',
    'accept-encoding': 'gzip, deflate, br',
    'accept-language': 'en-IN,en-GB;q=0.9,en-US;q=0.8,en;q=0.7',
    'user-agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36',
    'content-type': 'application/x-www-form-urlencoded; charset=UTF-8',
    'accept': 'application/json, text/javascript, */*; q=0.01',
    'referer': 'https://ide.geeksforgeeks.org/CsRQ97RJ5K',
    'authority': 'ide.geeksforgeeks.org',
    'x-requested-with': 'XMLHttpRequest',
}

data = {
    'lang': 'C',
    'code': '#include <stdio.h>\n\nint main() {\n\t//code\n\treturn 0;\n}',
    'input': 'ffkdgnke',
    'save': 'false'
}

response = requests.post(
    'https://ide.geeksforgeeks.org/main.php', headers=headers, data=data)
response.json()
print(response)

# This is for generating the README file

import typing as t
import os
import datetime

now = datetime.datetime.now()
last_updated = now.strftime("%d %b'%y")

base = f"""# 🍵 Some basic C programs

### These are some programs I make while I learn C.
`Last Updated: {last_updated}`

> List of all programs:
"""

def get_list() -> t.List[t.Tuple[str, str]]:
    """Returns back with the list of folder names in ascending order."""
    folders = []
    for folder in os.listdir():
        if not os.path.isdir(folder):
            continue

        if folder == ".git":
            continue

        filepath: str = ""

        for file in os.listdir(folder):
            if file.endswith(".c"):
                filepath = os.path.join(folder, file)
        
        if filepath == "":
            print(f"ERROR! Folder {folder} does not contain any C file.")
            continue

        filename = " ".join([x.capitalize() for x in folder.split("_")[1:]])

        folders.append((filename, filepath))
    
    folders = sorted(folders, key=lambda x: x[1])
    return folders
    
if __name__ == "__main__":
    folder_list = get_list()

    markup = ""
    for data in folder_list:
        markup += f"> - [{data[0]}]({data[1]})\n"
    
    with open("README.md", "w", encoding="utf-8") as f:
        f.write(base + markup)

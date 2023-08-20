# This is for generating the README file

import typing as t
import os
import datetime

now = datetime.datetime.now()
last_updated = now.strftime("%d %b'%y")

base = f"""# 🍵 Some basic C programs

### These are some programs I make while I learn C.
`Last Updated: {last_updated}`

### List of all programs:
"""

markup = ""
done_levels = [0]

def get_filename(folder: str) -> str:
    return " ".join([x.capitalize() for x in folder.split("_")[1:]])

def get_sorted_files(folder: t.Optional[str]):
    """This sorts the inner files in ascending order"""
    files = os.listdir(folder)
    if folder is not None and all(x.split("_")[0].isdigit() for x in files):
        files = sorted(files, key=lambda x: int(x.split("_")[0]))

    return files

def get_name_and_path(folder: t.Optional[str] = None, level: int = 0) -> None:
    global markup
    
    for file in get_sorted_files(folder):
        if file in [".git", "README.md", "readme_generator.py", ".gitignore"]:
            continue
        
        if folder is None:
            filepath = file
        else:
            filepath = os.path.join(folder, file)

        if folder and "\\" in folder:
            folder = folder.split("\\")[-1]

        filename = get_filename(folder or file)

        if file.endswith(".c"):
            filepath = filepath.replace("\\", "/")
            markup += f"{level * '  '}- [{filename}]({filepath})\n"
    
        if os.path.isdir(filepath):
            if level not in done_levels:
                markup += f"{level * '  '}- {filename}\n"
                done_levels.append(level)
            get_name_and_path(filepath, level + 1)
            continue


if __name__ == "__main__":
    get_name_and_path()
    
    with open("README.md", "w", encoding="utf-8") as f:
        f.write(base + markup)

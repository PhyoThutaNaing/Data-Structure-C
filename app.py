import ctypes
import tkinter as tk
from tkinter import messagebox

# Load C library
lib = ctypes.CDLL('./linkedlist.so')

# Set return type
lib.display.restype = ctypes.c_char_p

# Functions
def insert_begin():
    try:
        val = int(entry.get())
        lib.insert_begin(val)
        update_display()
    except:
        messagebox.showerror("Error", "Enter valid number")

def insert_end():
    try:
        val = int(entry.get())
        lib.insert_end(val)
        update_display()
    except:
        messagebox.showerror("Error", "Enter valid number")

def delete_begin():
    lib.delete_begin()
    update_display()

def update_display():
    result = lib.display().decode()
    output_label.config(text=result)

# UI
root = tk.Tk()
root.title("Linked List (Python + C)")
root.geometry("400x300")

tk.Label(root, text="Enter Value").pack()
entry = tk.Entry(root)
entry.pack()

tk.Button(root, text="Insert Begin", command=insert_begin).pack(pady=5)
tk.Button(root, text="Insert End", command=insert_end).pack(pady=5)
tk.Button(root, text="Delete Begin", command=delete_begin).pack(pady=5)

output_label = tk.Label(root, text="List will appear here")
output_label.pack(pady=20)

tk.Button(root, text="Refresh", command=update_display).pack()

root.mainloop()
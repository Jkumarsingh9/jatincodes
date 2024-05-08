# Input from the user
withdrawal_amount = int(input("Enter the amount to withdraw: "))

# Denominations of Indian currency notes
denominations = [2000, 500, 200, 100]

# Calculate and display the minimum number of notes
print("Minimum number of notes required:")
for denomination in denominations:
    count = withdrawal_amount // denomination
    withdrawal_amount %= denomination

    if count > 0:
        print(f"{denomination} rupees notes: {count}")

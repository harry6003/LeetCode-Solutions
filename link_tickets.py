import re

def extract_ticket_ids(pr_description):
    # Regular expression pattern to find Jira ticket IDs
    pattern = r'\b[A-Z]+-\d+\b'
    return re.findall(pattern, pr_description)

def generate_hyperlink(ticket_id):
    return f'[Jira Ticket {ticket_id}](https://mobilerndhub.com/BHP/{ticket_id})'

if __name__ == "__main__":
    pr_description = input()  # Read PR description from standard input
    ticket_ids = extract_ticket_ids(pr_description)
    for ticket_id in ticket_ids:
        hyperlink = generate_hyperlink(ticket_id)
        print(hyperlink)

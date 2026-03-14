#include <iostream>
#include <limits>
#include "ProjectManagementSystem.hpp"

using namespace std;

void showMainMenu() {
    cout << "\n====== Project Management System ======\n";
    cout << "1. Manage Projects\n";
    cout << "2. Manage Tasks\n";
    cout << "3. Manage Team Members\n";
    cout << "4. Manage Vendors\n";
    cout << "5. Manage Clients\n";
    cout << "6. Assign Task to Team Member\n";
    cout << "7. Update Task Status\n";
    cout << "8. Display Information\n";
    cout << "0. Exit\n";
    cout << "Select an option: ";
}

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    ProjectManagementSystem pms;
    pms.loadAll(); // Load data from text files
    int choice;

    do {
        showMainMenu();
        cin >> choice;
        clearInput();

        switch (choice) {
            case 1: { // Manage Projects
                int subChoice;
                do {
                    cout << "\n--- Project Management ---\n";
                    cout << "1. Add Project\n";
                    cout << "2. Update Project\n";
                    cout << "3. Delete Project\n";
                    cout << "4. Back to Main Menu\n";
                    cout << "Select an option: ";
                    cin >> subChoice;
                    clearInput();

                    if (subChoice == 1) {
                        string name, desc, start, end, status;
                        cout << "Project Name: "; getline(cin, name);
                        cout << "Description: "; getline(cin, desc);
                        cout << "Start Date: "; getline(cin, start);
                        cout << "End Date: "; getline(cin, end);
                        ProjectManagementSystem::showStatusOptions();
                        cout << "Status: "; getline(cin, status);
                        pms.addProject(Project(name, desc, start, end, status));
                        cout << "Project Added!\n";
                    }
                    else if (subChoice == 2) {
                        string name, desc, start, end, status;
                        cout << "Project to Update: "; getline(cin, name);
                        cout << "New Description: "; getline(cin, desc);
                        cout << "New Start Date: "; getline(cin, start);
                        cout << "New End Date: "; getline(cin, end);
                        ProjectManagementSystem::showStatusOptions();
                        cout << "New Status: "; getline(cin, status);
                        pms.updateProject(name, Project(name, desc, start, end, status));
                        cout << "Project Updated.\n";
                    }
                    else if (subChoice == 3) {
                        string name;
                        cout << "Project to Delete: "; getline(cin, name);
                        pms.deleteProject(name);
                        cout << "Project Deleted.\n";
                    }

                } while (subChoice != 4);
                break;
            }

            case 2: { // Manage Tasks
                int subChoice;
                do {
                    cout << "\n--- Task Management ---\n";
                    cout << "1. Add Task\n";
                    cout << "2. Update Task\n";
                    cout << "3. Delete Task\n";
                    cout << "4. Back to Main Menu\n";
                    cout << "Select an option: ";
                    cin >> subChoice;
                    clearInput();

                    if (subChoice == 1) {
                        string name, desc, start, end, status, project;
                        cout << "Task Name: "; getline(cin, name);
                        cout << "Description: "; getline(cin, desc);
                        cout << "Start Date: "; getline(cin, start);
                        cout << "End Date: "; getline(cin, end);
                        ProjectManagementSystem::showStatusOptions();
                        cout << "Status: "; getline(cin, status);
                        cout << "Associated Project: "; getline(cin, project);
                        pms.addTask(Task(name, desc, start, end, status, project));
                        cout << "Task Added!\n";
                    }
                    else if (subChoice == 2) {
                        string name, desc, start, end, status, project;
                        cout << "Task to Update: "; getline(cin, name);
                        cout << "New Description: "; getline(cin, desc);
                        cout << "New Start Date: "; getline(cin, start);
                        cout << "New End Date: "; getline(cin, end);
                        ProjectManagementSystem::showStatusOptions();
                        cout << "New Status: "; getline(cin, status);
                        cout << "Associated Project: "; getline(cin, project);
                        pms.updateTask(name, Task(name, desc, start, end, status, project));
                        cout << "Task Updated.\n";
                    }
                    else if (subChoice == 3) {
                        string name;
                        cout << "Task to Delete: "; getline(cin, name);
                        pms.deleteTask(name);
                        cout << "Task Deleted (if found).\n";
                    }

                } while (subChoice != 4);
                break;
            }

            case 3: { // Manage Team Members
                int subChoice;
                do {
                    cout << "\n--- Team Member Management ---\n";
                    cout << "1. Add Team Member\n";
                    cout << "2. Update Team Member\n";
                    cout << "3. Delete Team Member\n";
                    cout << "4. Back to Main Menu\n";
                    cout << "Select an option: ";
                    cin >> subChoice;
                    clearInput();

                    if (subChoice == 1) {
                        string name, role, contact, project;
                        cout << "Team Member Name: "; getline(cin, name);
                        cout << "Role: "; getline(cin, role);
                        cout << "Contact: "; getline(cin, contact);
                        cout << "Associated Project: "; getline(cin, project);
                        pms.addTeamMember(TeamMember(name, role, contact, project));
                        cout << "Team Member Added!\n";
                    }
                    else if (subChoice == 2) {
                        string name, role, contact, project;
                        cout << "Team Member to Update: "; getline(cin, name);
                        cout << "New Role: "; getline(cin, role);
                        cout << "New Contact: "; getline(cin, contact);
                        cout << "Associated Project: "; getline(cin, project);
                        pms.updateTeamMember(name, TeamMember(name, role, contact, project));
                        cout << "Team Member Updated.\n";
                    }
                    else if (subChoice == 3) {
                        string name;
                        cout << "Team Member to Delete: "; getline(cin, name);
                        pms.deleteTeamMember(name);
                        cout << "Team Member Deleted (if found).\n";
                    }

                } while (subChoice != 4);
                break;
            }

            case 4: { // Manage Vendors
                int subChoice;
                do {
                    cout << "\n--- Vendor Management ---\n";
                    cout << "1. Add Vendor\n";
                    cout << "2. Update Vendor\n";
                    cout << "3. Delete Vendor\n";
                    cout << "4. Back to Main Menu\n";
                    cout << "Select an option: ";
                    cin >> subChoice;
                    clearInput();

                    if (subChoice == 1) {
                        string companyName, companyType, contactPerson;
                        cout << "Vendor Company Name: "; getline(cin, companyName);
                        cout << "Company Type (e.g., IT services): "; getline(cin, companyType);
                        cout << "Contact Person: "; getline(cin, contactPerson);
                        pms.addVendor(Vendor(companyName, companyType, contactPerson));
                        cout << "Vendor Added!\n";
                    }
                    else if (subChoice == 2) {
                        string companyName, newType, newContact;
                        cout << "Vendor to Update (Company Name): "; getline(cin, companyName);
                        cout << "New Company Type: "; getline(cin, newType);
                        cout << "New Contact Person: "; getline(cin, newContact);
                        pms.updateVendor(companyName, Vendor(companyName, newType, newContact));
                        cout << "Vendor Updated.\n";
                    }
                    else if (subChoice == 3) {
                        string companyName;
                        cout << "Vendor to Delete (Company Name): "; getline(cin, companyName);
                        pms.deleteVendor(companyName);
                        cout << "Vendor Deleted (if found).\n";
                    }

                } while (subChoice != 4);
                break;
            }

            case 5: { // Manage Clients
                int subChoice;
                do {
                    cout << "\n--- Client Management ---\n";
                    cout << "1. Add Client\n";
                    cout << "2. Update Client\n";
                    cout << "3. Delete Client\n";
                    cout << "4. Back to Main Menu\n";
                    cout << "Select an option: ";
                    cin >> subChoice;
                    clearInput();

                    if (subChoice == 1) {
                        string company, industry, contact;
                        cout << "Client Company Name: "; getline(cin, company);
                        cout << "Industry (e.g., Finance, IT, Construction): "; getline(cin, industry);
                        cout << "Contact Person: "; getline(cin, contact);
                        pms.addClient(Client(company, industry, contact));
                        cout << "Client Added!\n";
                    }
                    else if (subChoice == 2) {
                        string company, industry, contact;
                        cout << "Client to Update: "; getline(cin, company);
                        cout << "New Industry: "; getline(cin, industry);
                        cout << "New Contact Person: "; getline(cin, contact);
                        pms.updateClient(company, Client(company, industry, contact));
                        cout << "Client Updated.\n";
                    }
                    else if (subChoice == 3) {
                        string company;
                        cout << "Client to Delete: "; getline(cin, company);
                        pms.deleteClient(company);
                        cout << "Client Deleted (if found).\n";
                    }

                } while (subChoice != 4);
                break;
            }

            case 6: { // Assign Task to Team Member.
                string taskName, memberName;
                cout << "\n--- Assign Task to Team Member ---\n";
                cout << "Enter Task Name: ";
                getline(cin, taskName);
                cout << "Enter Team Member Name: ";
                getline(cin, memberName);
                pms.assignTaskToMember(taskName, memberName);
                break;
            }

            case 7: { // Update Task Status
                cout << "\n--- Update Task Status ---\n";
                string taskName, newStatus;
                cout << "Enter Task Name: ";
                getline(cin, taskName);
                ProjectManagementSystem::showStatusOptions();
                cout << "Enter New Status: ";
                getline(cin, newStatus);
                pms.updateTaskStatus(taskName, newStatus);
                break;
            }
            case 8: { // Display project details, task details, and team member details
                int subChoice;
                do {
                    cout << "\n--- Display Information ---\n";
                    cout << "1. View All Projects\n";
                    cout << "2. View All Tasks\n";
                    cout << "3. View All Team Members\n";
                    cout << "4. View All Vendors\n";
                    cout << "5. View All Clients\n";
                    cout << "6. View Tasks by Status\n";
                    cout << "7. View Tasks by Project\n";
                    cout << "8. Back to Main Menu\n";
                    cout << "Select an option: ";
                    cin >> subChoice;
                    clearInput();

                    switch (subChoice) {
                        case 1:
                            pms.displayAllProjects();
                            break;
                        case 2:
                            pms.displayAllTasks();
                            break;
                        case 3:
                            pms.displayAllTeamMembers();
                            break;
                        case 4:
                            // Assuming you add this function
                            pms.displayAllVendors();
                            break;
                        case 5:
                            // Assuming you add this function
                            pms.displayAllClients();
                            break;
                        case 6: {
                            string status;
                            ProjectManagementSystem::showStatusOptions();
                            cout << "Enter status to filter by: ";
                            getline(cin, status);
                            pms.searchTasksByStatus(status);
                            break;
                        }
                        case 7: {
                            string project;
                            cout << "Enter project name: ";
                            getline(cin, project);
                            pms.displayTasksForProject(project);
                            break;
                        }
                    }

                } while (subChoice != 8);
                break;
            }

            case 0:
                pms.saveAll();  // Save data to text files
                cout << "Data saved. Goodbye!\n";
                break;

            default:
                cout << "Invalid option. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}


# Carbon Crunch Backend

This repository contains the backend code for the Carbon Crunch application. The backend is built using FastAPI and MongoDB. Below is a comprehensive overview of the key files and their contents to help developers understand the modularized code structure.

## File Structure

### `main.py`
- **Purpose**: The main entry point for the FastAPI application.
- **Contents**:
  - FastAPI instance creation and configuration.
  - Middleware setup for CORS.
  - API endpoint definitions for various functionalities such as user authentication, question management, answer submission, and more.
  - WebSocket endpoint for real-time notifications.

### `config.py`
- **Purpose**: Configuration settings for the application.
- **Contents**:
  - Loading environment variables using `dotenv`.
  - Database URI configuration.
  - Email and Twilio configuration settings.
  - JWT secret key.

### `database_utils.py`
- **Purpose**: Database utility functions.
- **Contents**:
  - Function to get the MongoDB database instance.
  - Function to ensure necessary indexes are created in the database.

### `email_utils.py`
- **Purpose**: Utility functions for sending emails.
- **Contents**:
  - Function to send an email using SMTP with the provided recipient, subject, and body.

### `helper.py`
- **Purpose**: Helper functions for various tasks.
- **Contents**:
  - Function to log actions to the database.
  - Function to convert MongoDB ObjectId to string recursively.

### `log_utils.py`
- **Purpose**: Utility functions for handling logs.
- **Contents**:
  - Function to fetch logs from the database, ensuring only admins can access them.

### `models.py`
- **Purpose**: Pydantic models for request and response validation.
- **Contents**:
  - Various models such as `EmailSchema`, `UserLogin`, `UserCreate`, `PasswordChange`, `QuestionRequest`, `Answer`, `QuestionAssignRequest`, `EmailRequest`, `UpdateStatus`, `ChangePasswordRequest`, `SendOtpRequest`, `VerifyOtpRequest`, and `UpdateUserModel`.

### `otp_utils.py`
- **Purpose**: Utility functions for handling OTP (One-Time Password) operations.
- **Contents**:
  - Function to send OTP using Twilio.
  - Function to verify OTP.

### `question_utils.py`
- **Purpose**: Utility functions for handling questions and answers.
- **Contents**:
  - Functions to load questions from JSON files.
  - Functions to get, save, delete, and list questions and answers.
  - Functions to assign and unassign questions to users.
  - Functions to update the status of questions and view reports.

### `auth_utils.py`
- **Purpose**: Utility functions for authentication and authorization.
- **Contents**:
  - Function to verify JWT tokens.
  - Function to handle user login.
  - Function to create new users (admin only).
  - Function to change user passwords.
  - Function to fetch user roles.
  - Function to update and delete user details.

## Additional Files

### `.env`
- **Purpose**: Environment variables for sensitive configurations.
- **Contents**:
  - Database password, secret key, email credentials, and Twilio credentials.

### `Carbon-crunch.BRSRquestions.json`
- **Purpose**: JSON file containing BRSR questions.
- **Contents**:
  - List of questions with details such as question number, heading number, subheading number, and other metadata.

### `roles.json`
- **Purpose**: JSON file containing role-based questions.
- **Contents**:
  - List of questions assigned to different roles such as HR, Finance, Legal, Environment, QC, RnD, Sales, Logistics, Safety, Production, Purchase, and IT.

## Summary

This documentation provides a high-level overview of the key files in the Carbon Crunch backend codebase. Each file has a specific purpose and contains functions and configurations to support the overall functionality of the application. By understanding the modularized structure, developers can easily navigate and extend the codebase as needed.

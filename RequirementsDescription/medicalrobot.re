As a Patient, I want to regist, so that I can login
{
	Basic Flow {
		(User) 1. the Patient shall input username and password and repeat password.
		(User) 2. the Patient shall click regist button.
		(System) 3. the Server shall check database duplication of registy info.
		(System) 3. the Server shall add registy info to database.
		(System) 3. the Server shall give response to user.
	}
	Alternative Flow {
		A. At any time, Registy succeed :
			1. System give a success message.
			2. Redirect to login page.
		B. At any time, Registy failed :
			1. System give a failed message.
				1. duplication of username.
				2. username does not match rule.
	}
}

As a Patient, I want to login
{
	Basic Flow {
		(User) 1. the Patient shall input username and password.
		(User) 2. the Patient shall click login button.
		(System) 3. the Server shall check existence in database.
		(System) 3. the Server shall give response to user.
	}
	Alternative Flow {
		A. At any time,Login succeed :
			1. System give a success message.
			2. Redirect to chat page.
		B. At any time, Login failed :
			1. System give a failed message.
				a1. username does not exist.
				a2. other error or connection error.
	}
}

As a Patient, I want to create a chat
{
	Basic Flow {
		(User) 1. the Patient shall click create chat button.
		(System) 2. the Page shall show a new chat page.
	}
	
}
As a Patient, I want to rename chat
{
	Basic Flow {
		(User) 1. the Patient shall click rename button on one chat.
		(User) 2. the Patient shall input new name.
		(User) 3. the Patient shall click save button.
		(System) 3. the Server shall rename chat in database.
	}
	Alternative Flow {
		A. At any time, Rename failed :
			1. System give a failed message.
				a1. other error or connection error.
	}
}
As a Patient, I want to delete chat
{
	Basic Flow {
		(User) 1. the Patient shall click delete button on one chat.
		(User) 2. the Patient shall click confirm button.
		(System) 3. the Server shall delete chat in database.
	}
	
	Alternative Flow {
		A. At any time,Delete succeed :
			1. System give a success message.
		B. At any time, Delete failed :
			1. System give a failed message.
				a1. other error or connection error.
	}
}
As a Patient, I want to send my question
{
	Basic Flow {
		(User) 1. the Patient shall click chat panel.
		(User) 2. the Patient shall input message.
		(User) 3. the Patient shall click send message.
		(System) 3. the Server shall generate answer from gpt model and save to database.
	}
	
	Alternative Flow {
		A. At any time, Delete failed :
			1. System give a failed message.
				a1. other error or connection error.
	}
}
As a Admin, I want to create user
As a Admin, I want to edit user
As a Admin, I want to delete user
As a Admin, I want to find user by name


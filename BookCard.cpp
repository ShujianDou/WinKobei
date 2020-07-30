#pragma once

#include "Book.h"

ref class BookCard : System::Windows::Forms::Panel {
private:
	property bool openFlag2;
public:

	property bool openFlag {
		void set(bool value) {
			openFire(this, System::EventArgs::Empty, 0);
		}
	};

	property bool updateNFlag {
		void set(bool value) {
			openFire(this, System::EventArgs::Empty, 1);
		}
	};

	property bool deleteFlag {
		void set(bool value) {
			openFire(this, System::EventArgs::Empty, 2);
		}
	};

	property bool updateCLFlag {
		void set(bool value) {
			openFire(this, System::EventArgs::Empty, 3);
		}
	};

	property bool SendCardClickEvent {
		void set(bool value) {
			CardClick();
		}
	};

	void DeleteBook(System::Object^ sender, System::EventArgs^ e);
	void UpdateFromNetBook(System::Object^ sender, System::EventArgs^ e);
	void UpdateChapterListBook(System::Object^ sender, System::EventArgs^ e);

	virtual void openFire(System::Object^ sender, System::EventArgs^ e, unsigned int i);

	virtual void CardClick() {
		OnCardClick(this);
	}
	void OnClick(System::Object^ sender, System::EventArgs^ e);
};

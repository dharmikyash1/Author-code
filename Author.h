class Author{
	private:
		int authorid;
		string authorname;
		string bookname;
		int no_book_published;
	public:	
	Author(){
		this.authorid=814;
		this.authorname="yash";
		this.bookname="Games of thrones";
		this.no_book_published=80;
	}
	Author(int authorid,int authorname,bookname,int no_book_published){
		this.authorid=authorid;
		this.authorname=authorname;
		this.bookname=bookname;
		this.no_book_published=no_book_published;
	}
	void Available(){
		cout<<no_book_published;
	}
};

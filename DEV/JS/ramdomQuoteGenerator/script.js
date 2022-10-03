// getting HTML elements
const quoteContainer = document.getElementById("quote-container");
const quoteText = document.getElementById("quote");
const authorText = document.getElementById("author");
const twitterBtn = document.getElementById("twitter");
const newQuoteBtn = document.getElementById("new-quote");
const loader = document.getElementById("loader");

// arry to store fetched quotes
let apiQuotes = [];

// show loading state
const showLoadingSpinner = () => {
	loader.hidden = false;
	quoteContainer.hidden = true;
};

// hide loading state
const hideLoadingSpinner = () => {
	quoteContainer.hidden = false;
	loader.hidden = true;
};

// show new quote on page
const newQuote = () => {
	showLoadingSpinner();
	const randomQuoteIndex = Math.floor(Math.random() * apiQuotes.length);
	const randomQuote = apiQuotes[randomQuoteIndex];
	const { text, author, tag } = randomQuote;

	author
		? (authorText.textContent = author)
		: (authorText.textContent = "Unknown");
	quoteText.textContent = text;
	text.length > 100
		? quoteText.classList.add("long-quote")
		: quoteText.classList.remove("long-quote");

	// hide loader
	hideLoadingSpinner();
};

// get quotes from API
const getQuotes = async () => {
	showLoadingSpinner();
	const API_URL = "https://jacintodesign.github.io/quotes-api/data/quotes.json";
	try {
		const response = await fetch(API_URL);
		apiQuotes = await response.json();
		newQuote();
	} catch (error) {
		// catch error here
		console.log("some error occured");
		console.log(error);
	}
};

// tweet quote
const tweetQuote = () => {
	// get quote and author from DOM
	const quote = quoteText.textContent;
	const author = authorText.textContent;

	const tweetUrl = `https://twitter.com/intent/tweet?text=${quote} - ${author}`;

	// open new window with the text for tweet
	window.open(tweetUrl, "_blank");
};

// Event listeners
newQuoteBtn.addEventListener("click", newQuote);
twitterBtn.addEventListener("click", tweetQuote);

getQuotes();

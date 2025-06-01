let playGame = confirm("Let's play rock, paper and scissors");

if (playGame) {
    let playerChoice = prompt("Please enter rock, paper or scissors");
    if (playerChoice) {
        playerOne = playerChoice.trim().toLowerCase();
        if (playerOne === "rock" || playerOne === "paper" || playerOne === "scissors") {
            computerChoice = Math.floor(Math.random() * 3 + 1);
            computer = computerChoice === 1 ? "rock" :
            computerChoice === 2 ? "paper" :
            "scissors";

            let result = 
            computer === "rock" && playerOne === "paper" ? "Computer wins!"
            :
            computer === "scissors" && playerOne === "paper" ? "Computer wins!"
            :
            computer === "paper" && playerOne === "rock" ? "Computer wins!"
            :
            computer === playerOne ? "Tie!"
            :
            "You win!";

            alert(`Computer: ${computer} \nYou: ${playerOne} \nResult: ${result}`)
        }
        else {
            alert("You didn't enter a valid choice :)");
        }
    }
    else {
        alert("Looks like you changed your mind, next time!");
    }
}
else {
    alert("Ok, let's play next time.");
}
extern crate rand;

use std::io;
use std::io::prelude::*;
use std::str::FromStr;
use rand::{thread_rng, Rng};

fn main() {
    println!("Worksheet 0");
    let mut buffer = String::new();
    let problem_num = read_input("Choose a problem: ", &mut buffer);
    println!("Problem {}", problem_num);
    match problem_num {
        "1" => problem1(),
        "2" => problem2(),
        "3" => problem3(),
        "4" => problem4(),
        "5" => problem5(),
        "6" => problem6(),
        _ => println!("Not a valid problem."),
    }
    println!("Done!");
}

// 3.1 Write a Hello World program and run it.
fn problem1() {
    println!("Hello, World!");
}

// 3.2 Write a program to prompt the user for a name, and then print Hello <name> (replace <name> with
// the name that the user entered).
fn problem2() {
    let mut input_buffer = String::new();
    let input_text = read_input("Enter your name: ", &mut input_buffer);
    println!("Hello, {}!", input_text.trim());
}

// 3.3 Write a program to prompt the user for the height and width of a rectangle, and then calculate
// and print the area of the rectangle.
fn problem3() {
    let mut input_buffer = String::new();
    let height = f32::from_str(read_input("Height: ", &mut input_buffer)).unwrap();
    input_buffer = String::new();
    let width = f32::from_str(read_input("Width: ", &mut input_buffer)).unwrap();
    println!("{} x {} = {}", height, width, height * width);
}

// 3.4 Write a program to prompt the user for a password. If the user enters Rosebud, print Pass friend.
// If the user enters some other string with length greater than or equal to 10 characters, print Way
// too long. Otherwise, print Go away.
fn problem4() {
    let mut input_buffer = String::new();
    let password = read_input("Enter password: ", &mut input_buffer);
    if password == "Rosebud" {
        println!("Pass friend")
    } else if password.len() > 10  {
        println!("Way too long")
    } else {
        println!("Go away");
    }
}

// Make a list / array containing 10 or more numbers and store it in a variable data. Write code
// to calculate the sum of all the numbers in data and then print it out. You should calculate the
// result once with a while loop, then again with a for loop. The code should work even if the
// numbers stored in data are changed.
fn problem5() {
    let size = 10;
    let rands = generate_rand(size);
    let mut i = 0;
    let mut sum = 0f64;
    while i < rands.len() {
        sum = sum + rands[i].0;
        i += 1;
    }
    println!("While loop sum: {}", sum);
    sum = 0f64;
    for t in rands {
        sum += t.0;
    }
    println!("For loop sum: {}", sum);
}

fn generate_rand(size: usize) -> Vec<(f64, bool)> {
    let mut rng = thread_rng();
    return rng.gen_iter::<(f64, bool)>().take(size).collect::<Vec<(f64, bool)>>();
}

// Make a string containing The rain in Spain falls mainly on the plain and store it in a variable
// data. Write code to print out each word on a separate line, i.e., iterate through the characters
//  in data, and print each one out directly except spaces; for spaces print a newline instead.
fn problem6(){
    let val = "The rain in Spain falls mainly on the plain";
    for c in val.chars() {
        match c {
            ' ' => print!("{}", "\n"),
            _ => print!("{}", c),
        }
    }
    print!("{}", "\n");
    io::stdout().flush().ok();
}



fn read_input<'a>(prompt: &'static str, mut input_buffer: &'a mut String) -> (&'a str) {
    print!("{}", prompt);
    io::stdout().flush().ok().expect("Unable to flush stdout.");
    io::stdin().read_line(&mut input_buffer).ok().expect("Failed to read from stdin.");
    return input_buffer.trim();
}

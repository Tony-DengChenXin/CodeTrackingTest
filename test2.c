#include <stdio.h>
#include <stdbool.h> // 添加布尔类型支持

// 完全改变方法签名和方法体，但保持方法名不变
bool calculate(char* input, int* result, int max_attempts) {
    // 方法体完全改变：现在是一个简单的数字猜测游戏
    int secret_number = 42; // 预设的秘密数字
    int attempts = 0;
    
    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    
    while (attempts < max_attempts) {
        attempts++;
        printf("\nAttempt %d/%d: %s", attempts, max_attempts, input);
        
        int guess;
        if (sscanf(input, "%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            continue;
        }
        
        if (guess < secret_number) {
            printf("Too low! Try a higher number.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try a lower number.\n");
        } else {
            *result = attempts;
            return true; // 猜对了
        }
    }
    
    return false; // 猜错次数达到上限
}

int main() {
    char user_input[50];
    int attempts_taken;
    int max_guesses = 5;
    
    printf("Enter your guesses (one per line):\n");
    
    // 模拟多次猜测
    for (int i = 0; i < max_guesses; i++) {
        fgets(user_input, sizeof(user_input), stdin);
        
        if (calculate(user_input, &attempts_taken, max_guesses)) {
            printf("\nCongratulations! You guessed the number in %d attempts!\n", attempts_taken);
            return 0;
        }
    }
    
    printf("\nGame over! You didn't guess the number in %d attempts.\n", max_guesses);
    return 0;
}
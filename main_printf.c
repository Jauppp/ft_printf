/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:52:14 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/12/01 14:52:14 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> // for printf - to remove

# define TOLKIEN "There was Eru, the One, who in Arda is called Ilúvatar; and he made first the Ainur, the Holy Ones, that were the offspring of his thought, and they were with him before aught else was made. And he spoke to them, propounding to them themes of music; and they sang before him, and he was glad. But for a long while they sang only each alone, or but few together, while the rest hearkened; for each comprehended only that part of the mind of Ilúvatar from which he came, and in the understanding of their brethren they grew but slowly. Yet ever as they listened they came to deeper understanding, and increased in unison and harmony. And it came to pass that Ilúvatar called together all the Ainur and declared to them a mighty theme, unfolding to them things greater and more wonderful than he had yet revealed; and the glory of its beginning and the splendour of its end amazed the Ainur, so that they bowed before Ilúvatar and were silent. Then Ilúvatar said to them: ‘Of the theme that I have declared to you, I will now that ye make in harmony together a Great Music. And since I have kindled you with the Flame Imperishable, ye shall show forth your powers in adorning this theme, each with his own thoughts and devices, if he will. But I will sit and hearken, and be glad that through you great beauty has been wakened into song.’ Then the  voices of the Ainur, like unto harps and lutes, and pipes and trumpets, and viols and organs, and like unto countless choirs singing with words, began to fashion the theme of Ilúvatar to a great music; and a sound arose of endless interchanging melodies woven in harmony that passed beyond hearing into the depths and into the heights, and the places of the dwelling of Ilúvatar were filled to overflowing, and the music and the echo of the music went out into the Void, and it was not void. Never since have the Ainur made any music like to this music, though it has been said that a greater still shall be made before Ilúvatar by the choirs of the Ainur and the Children of Ilúvatar after the end of days. Then the themes of Ilúvatar shall be played aright, and take Being in the moment of their utterance, for all shall then understand fully his intent in their part, and each shall know the comprehension of each, and Ilúvatar shall give to their thoughts the secret fire, being well pleased."
# define MELKLOR "Thus began the first battle of the Valar with Melkor for the dominion of Arda; and of those tumults the Elves know but little"

void test_strc(void)
{
    printf("\n");
    printf("*＊✿❀ s ❀✿＊* ✦\n");
    printf("== 1 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("%s\n", ""), ft_printf("%s\n", ""));
    printf("== 2 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf(" %s\n", ""), ft_printf(" %s\n", ""));
    printf("== 3 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("%s \n", ""), ft_printf("%s \n", ""));
    printf("== 4 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf(" %s \n", ""), ft_printf(" %s \n", ""));
    printf("== 5 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf(" %s %s \n", " - ", ""), ft_printf(" %s %s \n", " - ", ""));
    printf("== 6 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf(" %s %s %s %s %s\n\n", " - ", "", "4", "", TOLKIEN), ft_printf(" %s %s %s %s %s\n", " - ", "", "4", "", TOLKIEN));
    printf("*＊✿❀ c ❀✿＊* ✦\n");
    printf("== 1 ==\n");
    printf("1. return value of printf = %d || %d return value of ft_printf\n\n", printf("pr %c\n", 'a'), ft_printf("ft %c\n", 'a'));
    printf("== 2 ==\n");
    printf("2. return value of printf = %d || %d return value of ft_printf\n\n", printf("pr %c\n", 'e' - 256), ft_printf("ft %c\n", 'e' - 256));
    printf("== 3 ==\n");
    printf("3. return value of printf = %d || %d return value of ft_printf\n\n", printf("pr %c %c   %c %c\n", 'a', '9', 256, 125), ft_printf("ft %c %c   %c %c\n", 'a', '9', 256, 125));
    printf("== 4 ==\n");
    printf("4. return value of printf = %d || %d return value of ft_printf\n\n", printf("pr %c%c%c%c\n", 'h', 'e', 'c', 'c'), ft_printf("ft %c%c%c%c\n", 'h', 'e', 'c', 'c'));
}

void test_digits(void)
{
    printf("\n");
    printf("*＊✿❀ d ❀✿＊* ✦\n");
    printf("== 1 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr %d + %d = %d\n", 5, 237, 5 + 237),ft_printf("ft %d + %d = %d\n", 5, 237, 5 + 237));
    printf("== 2 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr d = %d\n", INT_MAX),ft_printf("ft d = %d\n", INT_MAX));
    printf("== 3 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr d = %d\n", INT_MIN),ft_printf("ft d = %d\n", INT_MIN));
    printf("*＊✿❀ i ❀✿＊* ✦\n");
    printf("== 1 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr i = %i\n", 0x95), ft_printf("ft i = %i\n", 0x95));
    printf("== 2 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr i = %i\n", INT_MAX),ft_printf("ft i = %i\n", INT_MAX));
    printf("== 3 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr i = %i\n", -616),ft_printf("ft i = %i\n", -616));
    printf("== 4 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr i = %i\n", INT_MIN),ft_printf("ft i = %i\n", INT_MIN));
    printf("*＊✿❀ u ❀✿＊* ✦\n");
    printf("== 1 ==\n");    
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr u = %u\n", -205899960), ft_printf("ft u = %u\n", -205899960));
    printf("== 2 ==\n");    
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr u = %u\n", INT_MAX), ft_printf("ft u = %u\n", INT_MAX));
    printf("== 3 ==\n");    
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr u = %u\n", INT_MIN), ft_printf("ft u = %u\n", INT_MIN));
}
void test_hexas(void)
{
    void    *void_ptr1;
    int     n = 0;
    void_ptr1 = &n;
    void    *void_ptr2;
    int     i = 526;
    void_ptr2 = &i;

    printf("\n");
    printf("*＊✿❀ x ❀✿＊* ✦\n");
    printf("== 1 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr x = %x\n", 95), ft_printf("ft x = %X\n", 95));
    printf("== 2 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr x = %x\n", INT_MAX), ft_printf("ft x = %x\n", INT_MAX));
    printf("== 3 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr x = %x\n", INT_MIN), ft_printf("ft x = %x\n", INT_MIN));
    printf("*＊✿❀ x ❀✿＊* ✦\n");
    printf("== 1 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr X = %X\n", -95), ft_printf("ft X = %X\n", -95));
    printf("== 2 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr X = %X %X %X\n", INT_MAX, INT_MIN, -42), ft_printf("ft X = %X %X %X\n", INT_MAX, INT_MIN, -42));
    printf("== 3 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr x = %X\n", INT_MAX), ft_printf("ft x = %X\n", INT_MAX));

    printf("*＊✿❀ p ❀✿＊* ✦\n"); 
    printf("== 1 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr p = %p\n", void_ptr1), ft_printf("ft p = %p\n", void_ptr1));
    printf("== 2 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr p = %p\n", void_ptr2), ft_printf("ft p = %p\n", void_ptr2));
    printf("== 3 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr p = %p\n", ((void *)0)), ft_printf("ft p = %p\n", ((void *)0)));
}

void test_edgecases(void)
{
    printf("\n");
    printf("*＊✿❀ %% ❀✿＊* ✦\n");
    printf("== 1 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr percent sign = %% Manwë and Melkor were brethren in the thought of Ilúvatar\n"), ft_printf("ft percent sign = %% Manwë and Melkor were brethren in the thought of Ilúvatar\n"));
    printf("== 2 ==\n");
    printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("%% pr percent sign = %% Thus began the first battle of the Valar with Melkor for the dominion of Arda%%\n"), ft_printf("%% ft percent sign = %% Thus began the first battle of the Valar with Melkor for the dominion of Arda%%\n"));

    // printf("*＊✿❀ stray %% without known flag ❀✿＊* ✦\n");
    // // nb : will not compile with flags;
    // printf("== 1 ==\n");
    // printf("return value of printf = %d || %d return value of ft_printf\n\n", printf("pr percent sign = Man%wë and %Melkor were brethren in the thought of Ilúvatar\n"), ft_printf("ft percent sign = Man%wë and %Melkor were brethren in the thought of Ilúvatar\n"));
}

int main(void)
{
    printf("\n");
    printf("✦ . 　⁺ 　 . ✦ . 　⁺ 　 . ✦\n");
    printf("\tft_printf tests\n");
    printf("✦ . 　⁺ 　 . ✦ . 　⁺ 　 . ✦\n\n");

    test_strc();
    test_digits();
    test_hexas();
    test_edgecases();
}

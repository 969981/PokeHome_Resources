/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00200724; name: FUN_.text__00200724
 */


void FUN__text__00200724(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0xe0) == -1) {
    uVar1 = *param_2;
    FUN__text__0013e21c(*(undefined8 *)(lVar2 + 0xd0));
    FUN__text__001fc7b0(lVar2,uVar1);
    return;
  }
  FUN__text__0013dca8();
  return;
}



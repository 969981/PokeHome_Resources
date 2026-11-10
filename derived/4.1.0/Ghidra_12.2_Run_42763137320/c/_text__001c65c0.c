/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c65c0; name: FUN_.text__001c65c0
 */


void FUN__text__001c65c0(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    if ((((*(int *)(lVar1 + 0x24) == *param_2) && (*(int *)(lVar1 + 0x28) == param_2[1])) &&
        (*(int *)(lVar1 + 0x2c) == param_2[2])) && (*(int *)(lVar1 + 0x30) == param_2[3])) {
      FUN__text__00196350(lVar1 + 0x20);
    }
    lVar2 = lVar2 + 0x14;
  } while (lVar2 != 600);
  return;
}



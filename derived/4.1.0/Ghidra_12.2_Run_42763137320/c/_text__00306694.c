/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00306694; name: FUN_.text__00306694
 */


void FUN__text__00306694(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 == 2) {
    lVar1 = FUN__text__00321ac0();
    if (*(int *)(lVar1 + 0x9a20) == 1) {
      FUN__text__006347b0(*(undefined8 *)(param_1 + 0x58),param_2);
      return;
    }
    iVar2 = *(int *)(param_1 + 0x90);
  }
  if (iVar2 == 5) {
    lVar1 = FUN__text__00321ac0();
    if (*(int *)(lVar1 + 0x9a20) == 4) {
      FUN__text__0063541c(*(undefined8 *)(param_1 + 0x58),param_2);
      return;
    }
  }
  FUN__text__00632654(*(undefined8 *)(param_1 + 0x58),param_2);
  return;
}



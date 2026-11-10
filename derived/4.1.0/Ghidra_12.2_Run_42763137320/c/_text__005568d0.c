/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005568d0; name: FUN_.text__005568d0
 */


void FUN__text__005568d0(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        FUN__text__00555650(*(long *)(param_1 + 0x38) + lVar1,param_2);
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x20;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
      lVar1 = *(long *)(param_1 + 0x38);
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN__text__0054f92c(param_1,param_2);
  return;
}



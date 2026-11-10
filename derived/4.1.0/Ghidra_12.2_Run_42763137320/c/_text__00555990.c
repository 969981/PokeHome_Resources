/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00555990; name: FUN_.text__00555990
 */


void FUN__text__00555990(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  FUN__text__005568d0();
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x40) + lVar2;
        FUN__text__0054fa20(lVar1,param_2);
        FUN__text__00556b94(lVar1 + 0x30,param_2);
        FUN__text__00556b94(lVar1 + 0x40,param_2);
        FUN__text__00556b94(lVar1 + 0x50,param_2);
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x60;
      } while (uVar3 < *(uint *)(param_1 + 0x20));
      lVar2 = *(long *)(param_1 + 0x40);
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar2);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



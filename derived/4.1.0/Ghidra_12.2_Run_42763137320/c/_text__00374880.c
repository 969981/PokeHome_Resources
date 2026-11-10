/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00374880; name: FUN_.text__00374880
 */


void FUN__text__00374880(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0xa8) != 0) && ((*(byte *)(*(long *)(param_1 + 0xa8) + 0x25a) & 1) == 0))
  {
    return;
  }
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x3d0,0x10);
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__0037b4fc(lVar1,param_1,param_3);
  *(long **)(lVar1 + 8) = param_2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x3d0;
  *(undefined8 *)(lVar1 + 0x20) = 0x10;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xa8) = lVar1;
  FUN__text__005e896c(lVar1,0x712917,0xffffffff,0x10);
  return;
}



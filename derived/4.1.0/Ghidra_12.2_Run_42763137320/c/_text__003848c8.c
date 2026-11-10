/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003848c8; name: FUN_.text__003848c8
 */


void FUN__text__003848c8(long *param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined8 local_28;
  
  if ((0x20 < param_3) || (0x1d < param_4)) {
    *param_1 = 0;
    return;
  }
  local_28 = *(undefined8 *)(param_2 + 8);
  FUN__text__0020bb18(param_1,local_28,&local_28);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN__text__005fc564(lVar1,*(long *)(param_2 + 0x9f0) + (ulong)param_3 * 0x2850 +
                            (ulong)param_4 * 0x158);
  FUN__text__00633bc0(lVar1);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  FUN__text__00631174(*param_1);
  return;
}



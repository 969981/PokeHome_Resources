/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a31d4; name: FUN_.text__002a31d4
 */


void FUN__text__002a31d4(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_5;
  FUN__text__002a32ac(&local_40,param_5,&local_38);
  FUN__text__002a33c8(param_1,local_38,&local_40);
  lVar1 = *param_1;
  if (lVar1 == 0) {
    if ((0x27 < param_3) || (0x1d < param_4)) goto LAB__text__002a3284;
LAB__text__002a3258:
    FUN__text__005fc3e8(*(undefined8 *)(lVar1 + 0x58),
                        param_2 + (ulong)param_3 * 0x2850 + (ulong)param_4 * 0x158 + 0x54);
  }
  else {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    if ((param_3 < 0x28) && (param_4 < 0x1e)) goto LAB__text__002a3258;
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
LAB__text__002a3284:
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}



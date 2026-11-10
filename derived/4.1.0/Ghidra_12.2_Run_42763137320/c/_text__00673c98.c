/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00673c98; name: FUN_.text__00673c98
 */


undefined8 FUN__text__00673c98(long *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_1[0x98] + param_1[0x9c] != 0) {
    return 0;
  }
  if (*param_1 == 0) {
    if (*(long *)(param_1[0x84] + 0x70) == 0) {
      uVar1 = FUN__text__00666b6c((int)param_1[0x4b],0xffffffff,0xffffffff,0);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    else {
      *param_1 = param_2;
      uVar2 = (**(code **)(param_1[0x84] + 0x70))(param_1,1);
      *param_1 = 0;
      if ((uVar2 & 1) == 0) goto LAB__text__00673cc0;
    }
    FUN__text__00666f74(param_2,0x70b3ed,param_1[0xc]);
    FUN__text__006511e0(param_2,param_1,0);
    uVar1 = 1;
  }
  else {
LAB__text__00673cc0:
    uVar1 = 0;
  }
  return uVar1;
}



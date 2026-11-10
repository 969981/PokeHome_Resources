/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00558334; name: FUN_.text__00558334
 */


ulong FUN__text__00558334(long param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  param_3 = param_3 & 0xffffffff;
  uVar1 = FUN__text__0054f9a0();
  if (((((int)uVar1 == 1) &&
       (uVar1 = FUN__text__00559ffc(param_1 + 0x30,param_2,param_3), (int)uVar1 == 1)) &&
      (uVar1 = FUN__text__00559ffc(param_1 + 0x40,param_2,param_3), (int)uVar1 == 1)) &&
     ((uVar1 = FUN__text__00559ffc(param_1 + 0x50,param_2,param_3), (int)uVar1 == 1 &&
      (uVar1 = FUN__text__0055aa20(param_1 + 0x60,param_2,param_3,param_4), (int)uVar1 == 1)))) {
    lVar2 = (**(code **)(*param_2 + 0x10))
                      (param_2,(ulong)((int)(param_3 >> 1) + 1) << 2,0x70f033,0x87);
    *(long *)(param_1 + 0xa8) = lVar2;
    uVar3 = 0x34;
    if (lVar2 != 0) {
      uVar3 = 1;
    }
    uVar1 = (ulong)uVar3;
  }
  return uVar1;
}



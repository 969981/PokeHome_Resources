/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433bc0; name: FUN_.text__00433bc0
 */


undefined8 FUN__text__00433bc0(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 local_24;
  
  uVar3 = FUN__text__00433c90(param_1,0x301);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN__text__00433c90((long *)(param_1 + 0x18),0x35);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN__text__00433c90(param_1 + 0x30,0xc1), (uVar3 & 1) != 0))
    {
      uVar1 = *(uint *)(param_1 + 0x20);
      if (uVar1 == 0) {
LAB__text__00433c38:
        plVar4 = (long *)FUN__text__00434fac(param_1,0x100000083);
        if (plVar4 == (long *)0x0) {
          return 0x34;
        }
      }
      else {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = 0x83 / uVar1;
        }
        plVar4 = (long *)(*(long *)(param_1 + 0x18) + (ulong)(0x83 - uVar2 * uVar1) * 8);
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB__text__00433c38;
        } while (*(int *)(plVar4 + 1) != 0x83);
      }
      local_24 = 0x42800000;
      FUN__text__00436f70(plVar4,&local_24);
      return 1;
    }
  }
  return 0x34;
}



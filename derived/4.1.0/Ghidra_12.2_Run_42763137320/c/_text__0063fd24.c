/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063fd24; name: FUN_.text__0063fd24
 */


undefined1 FUN__text__0063fd24(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)FUN__text__00640b68(param_2,param_3);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x17) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb], uVar2 == 0)) {
    return 0;
  }
  return *(undefined1 *)((long)piVar1 + uVar2);
}



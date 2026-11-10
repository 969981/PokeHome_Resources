/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063e8e0; name: FUN_.text__0063e8e0
 */


undefined1 FUN__text__0063e8e0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)FUN__text__0063f468(param_2,param_3);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x25) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x12], uVar2 == 0)) {
    return 0;
  }
  return *(undefined1 *)((long)piVar1 + uVar2);
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00321ad0; name: FUN_.text__00321ad0
 */


ulong FUN__text__00321ad0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(*(int *)(*param_3 + 0x94) == 1);
  uVar1 = uVar2 << 1;
  if (*(char *)(*param_3 + 0x9c) != '\0') {
    uVar1 = uVar2 << 1 | 0x80;
  }
  return uVar1;
}



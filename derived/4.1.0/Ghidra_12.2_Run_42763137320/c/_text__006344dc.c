/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006344dc; name: FUN_.text__006344dc
 */


ulong FUN__text__006344dc(long param_1,undefined2 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ushort local_24 [2];
  
  uVar1 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar2 = FUN__text__00638e70(uVar1,param_2,local_24);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
    return uVar2;
  }
  return (ulong)local_24[0];
}



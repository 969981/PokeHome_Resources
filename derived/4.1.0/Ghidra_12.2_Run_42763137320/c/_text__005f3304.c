/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3304; name: FUN_.text__005f3304
 */


short FUN__text__005f3304(long param_1,long param_2)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return 0;
  }
  sVar1 = FUN__text__005f3460(*(long *)(param_1 + 0x58) + (ulong)*(ushort *)(param_1 + 0x7a) * 2,
                              *(undefined8 *)(param_2 + 0x58),
                              (uint)*(ushort *)(param_1 + 0x78) - (uint)*(ushort *)(param_1 + 0x7a))
  ;
  sVar1 = *(short *)(param_1 + 0x7a) + sVar1;
  *(short *)(param_1 + 0x7a) = sVar1;
  return sVar1;
}



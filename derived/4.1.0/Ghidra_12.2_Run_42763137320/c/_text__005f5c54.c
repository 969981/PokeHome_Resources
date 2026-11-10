/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5c54; name: FUN_.text__005f5c54
 */


void FUN__text__005f5c54(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x18) = lVar1;
  *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 0x10;
  *(long *)(lVar1 + 0x10) = param_2;
  *(long *)(param_1 + 0x18) = param_2;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x10;
  *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0xf7;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004697fc; name: FUN_.text__004697fc
 */


uint FUN__text__004697fc(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = FUN__text__00464cf0();
  lVar2 = *(long *)(param_1 + 0x70);
  if ((lVar2 != 0) && (*(short *)(lVar2 + 0xc4) = *(short *)(lVar2 + 0xc4) + 1, (param_2 & 1) != 0))
  {
    *(short *)(lVar2 + 0xc6) = *(short *)(lVar2 + 0xc6) + 1;
  }
  return uVar1 & 1;
}



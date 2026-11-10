/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027cac8; name: FUN_.text__0027cac8
 */


bool FUN__text__0027cac8(undefined8 param_1,uint param_2,short param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = *(ulong *)((ulong)param_2 * 8 + 0x72d3f0) & 1L << ((ulong)param_4 & 0x3f);
  bVar2 = uVar1 != 0;
  if (param_4 == 0x12) {
    bVar2 = param_3 == 1 && uVar1 != 0;
  }
  bVar3 = param_3 == 2 && uVar1 != 0;
  if (param_4 != 0x13) {
    bVar3 = bVar2;
  }
  bVar2 = uVar1 != 0;
  if (param_2 == 0x182) {
    bVar2 = bVar3;
  }
  return bVar2;
}



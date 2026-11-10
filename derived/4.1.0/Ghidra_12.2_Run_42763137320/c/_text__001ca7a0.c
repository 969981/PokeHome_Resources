/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ca7a0; name: FUN_.text__001ca7a0
 */


void FUN__text__001ca7a0(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  FUN__text__0012c898(lVar1,param_1 + 0x458);
  FUN__text__0012c898(lVar1,param_1 + 0x460);
  FUN__text__0012c898(lVar1,param_1 + 0x468);
  FUN__text__0012c898(lVar1,param_1 + 0x470);
  FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,param_1 + 0x458 + (long)(int)param_2 * 8);
  *(bool *)(param_1 + 0x4ca) = (param_2 & 0xfffffffd) == 0;
  return;
}



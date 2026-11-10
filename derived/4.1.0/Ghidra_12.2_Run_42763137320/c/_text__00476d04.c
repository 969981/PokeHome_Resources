/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00476d04; name: FUN_.text__00476d04
 */


void FUN__text__00476d04(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 local_18;
  
  uVar1 = *(uint *)(param_1 + 0x313);
  if ((uVar1 >> 0x10 & 1) == 0) {
    *(uint *)(param_1 + 0x313) =
         uVar1 & 0xfff00000 | uVar1 & 0xffff | (param_2 & 7) << 0x11 | 0x10000;
  }
  local_18 = 0x400000000;
  FUN__text__00474488(param_1,&local_18,1);
  return;
}



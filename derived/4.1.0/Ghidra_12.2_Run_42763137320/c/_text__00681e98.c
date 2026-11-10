/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00681e98; name: FUN_.text__00681e98
 */


void FUN__text__00681e98(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x100040 >> (ulong)((param_3 & 3) << 3);
  if (2 < param_3) {
    uVar1 = 0;
  }
  iVar2 = FUN__text__00683614(param_1,uVar1);
  if ((iVar2 == 0) && (iVar2 = FUN__text__00682f54(param_1,*param_2,param_2[2]), iVar2 == 0)) {
    FUN__text__00682f54(param_1,param_2[1],param_2[3]);
    return;
  }
  return;
}



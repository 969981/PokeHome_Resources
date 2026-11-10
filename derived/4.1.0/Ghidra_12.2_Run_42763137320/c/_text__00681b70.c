/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00681b70; name: FUN_.text__00681b70
 */


void FUN__text__00681b70(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0xb8);
  bVar1 = uVar3 <= (ulong)(param_4 - param_3);
  lVar2 = param_3 + uVar3;
  if (!bVar1) {
    lVar2 = param_4;
  }
  lVar2 = FUN__text__00683afc(param_1 + 0x40,param_2,param_3,lVar2 - param_3,bVar1);
  if (-1 < lVar2) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) - lVar2;
  }
  return;
}



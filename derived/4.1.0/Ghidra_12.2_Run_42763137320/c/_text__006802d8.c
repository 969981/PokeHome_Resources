/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006802d8; name: FUN_.text__006802d8
 */


void FUN__text__006802d8(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_2 + 0x100;
  if (0x3fff < uVar1) {
    uVar1 = 0x4000;
  }
  lVar3 = FUN__text__0067fcc0(param_1,param_2,uVar1);
  if (-0x385 < (int)lVar3) {
    lVar4 = *param_2;
    iVar2 = FUN__text__00684bd0(param_1 + 0x158,param_2,lVar3 - lVar4,0);
    if (iVar2 == 0) {
      param_2[2] = lVar3 - lVar4;
    }
  }
  return;
}



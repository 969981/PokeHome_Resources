/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00429284; name: FUN_.text__00429284
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00429284(long param_1)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  uVar2 = *(uint *)(lVar5 + 0x2b0);
  uVar4 = *(uint *)(lVar5 + 0x313);
  if ((uVar4 >> 0x17 & 1) == 0) {
    uVar3 = 0;
    if ((ulong)_DAT_008ab030 != 0) {
      uVar3 = ((ulong)*(uint *)(lVar5 + 0x30c) * (ulong)uVar2) / (ulong)_DAT_008ab030;
    }
  }
  else {
    fVar6 = (float)(**(code **)(**(long **)(param_1 + 0xf0) + 0x40))();
    pfVar1 = (float *)(lVar5 + 0x30c);
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = *(uint *)(lVar5 + 0x313);
    uVar3 = (ulong)(uint)(int)((float)uVar2 * fVar6 * 0.001 * *pfVar1);
  }
  *(undefined4 *)(lVar5 + 0x30c) = 0;
  *(uint *)(lVar5 + 0x313) = uVar4 & 0xfe3fffff;
                    /* WARNING: Could not recover jumptable at 0x00429330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x58))(*(long **)(param_1 + 0xf0),uVar3);
  return;
}



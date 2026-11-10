/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00519e80; name: FUN_.text__00519e80
 */


undefined8 FUN__text__00519e80(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) || (fVar4 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar4 / (float)uVar3)) {
    FUN__text__0051c0c0(param_1);
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 == 0) {
      return 0;
    }
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_2 + 0x50) / uVar3;
  }
  lVar1 = (ulong)(*(uint *)(param_2 + 0x50) - uVar2 * uVar3) * 8;
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*param_1 + lVar1);
  *(long *)(*param_1 + lVar1) = param_2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return 1;
}



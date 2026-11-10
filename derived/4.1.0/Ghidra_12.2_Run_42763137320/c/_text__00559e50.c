/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00559e50; name: FUN_.text__00559e50
 */


undefined8 FUN__text__00559e50(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = (ulong)(((uint)(param_3 >> 1) & 0x7fffffff) + 1) << 3;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,lVar2,0x71971e,0x1e);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,lVar2,0x71971e,0x22);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      uVar3 = 0;
      lVar2 = 0;
      do {
        fVar5 = (float)(int)((float)(param_3 & 0xffffffff) * 0.5) * 6.2831855 * (float)uVar3 *
                (1.0 / (float)(param_3 & 0xffffffff));
        fVar4 = sinf(fVar5);
        fVar5 = cosf(fVar5);
        uVar3 = uVar3 + 1;
        *(float *)(*param_1 + lVar2 + 4) = fVar4;
        *(float *)(*param_1 + lVar2) = fVar5;
        *(float *)(param_1[1] + lVar2 + 4) = -fVar4;
        *(float *)(param_1[1] + lVar2) = fVar5;
        lVar2 = lVar2 + 8;
      } while ((param_3 & 0xfffffffe) * 4 + 8 != lVar2);
      return 1;
    }
  }
  return 0x34;
}



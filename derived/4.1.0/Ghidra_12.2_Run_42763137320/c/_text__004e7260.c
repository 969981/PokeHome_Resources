/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e7260; name: FUN_.text__004e7260
 */


void FUN__text__004e7260(float param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)(param_2 + 8);
  local_40 = 0;
  local_38 = 0;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)(lVar1 + 8);
      FUN__text__004e6030(lVar1,&local_40,param_3);
      lVar1 = lVar2;
    } while (lVar2 != 0);
    if (local_38 != 0) {
      lVar1 = local_38;
      do {
        fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x14));
        fVar3 = fVar3 * (1.0 / param_1);
        fVar4 = 0.5;
        if (fVar3 <= 0.0) {
          fVar4 = -0.5;
        }
        *(int *)(lVar1 + 0x14) = (int)(fVar4 + fVar3);
        lVar1 = *(long *)(lVar1 + 0x20);
      } while (lVar1 != 0);
    }
  }
  FUN__text__004c2010(param_2,&local_40,param_3);
  return;
}



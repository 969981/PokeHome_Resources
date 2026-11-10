/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005427e8; name: FUN_.text__005427e8
 */


undefined8
FUN__text__005427e8(long param_1,undefined8 param_2,undefined8 param_3,float *param_4,float *param_5
                   )

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    uVar1 = FUN__text__005170c0(*(undefined8 *)(param_1 + 0x18),param_3,param_2,param_5);
    return uVar1;
  }
  fVar3 = *(float *)(lVar2 + 4);
  fVar4 = *(float *)(lVar2 + 8);
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar5 = *(float *)(lVar2 + 0xc);
  fVar6 = *(float *)(lVar2 + 0x10);
  fVar6 = (fVar6 * fVar3 - *param_4) * fVar3 + fVar4 * (fVar6 * fVar4 - fVar7) +
          fVar5 * (fVar6 * fVar5 - fVar8);
  fVar6 = fVar6 + fVar6;
  *param_5 = *param_4 + fVar3 * fVar6;
  param_5[1] = fVar7 + fVar4 * fVar6;
  param_5[2] = fVar8 + fVar5 * fVar6;
  return 1;
}



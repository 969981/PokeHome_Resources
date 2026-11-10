/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057d354; name: FUN_.text__0057d354
 */


undefined8
FUN__text__0057d354(float param_1,float param_2,long param_3,undefined8 param_4,uint *param_5,
                   uint param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = 1.0 - (double)param_2 * (double)param_2;
  dVar2 = (double)NEON_ucvtf((ulong)param_5[3]);
  dVar2 = (dVar2 * -1.7269388197455346) / ((double)param_6 * (double)param_1);
  if (1.0 < dVar2 * dVar4) {
    dVar4 = 1.0 / dVar2;
  }
  uVar1 = FUN__text__0057c744(param_3,param_4,*param_5);
  if (((((int)uVar1 == 1) &&
       (uVar1 = FUN__text__0057c744(param_3 + 0x18,param_4,param_5[1]), (int)uVar1 == 1)) &&
      (uVar1 = FUN__text__0057c744(param_3 + 0x30,param_4,param_5[2]), (int)uVar1 == 1)) &&
     (uVar1 = FUN__text__0057c744(param_3 + 0x48,param_4,param_5[3]), (int)uVar1 == 1)) {
    dVar3 = 1.0 / ((double)param_6 * (double)param_1);
    dVar2 = (double)NEON_ucvtf((ulong)*param_5);
    dVar2 = dVar2 * -3.0 * dVar3;
    dVar4 = 0.5756462732485116 -
            (double)(float)SQRT(1.0 - dVar4) * (double)(float)SQRT(1.0 - dVar4) * 0.5756462732485116
    ;
    dVar5 = (double)NEON_fminnm(dVar2 * dVar4,0x3feff7ced916872b);
    dVar2 = exp2(dVar2 * 3.321928094887362);
    *(float *)(param_3 + 100) = (float)(dVar2 - dVar2 * dVar5);
    *(float *)(param_3 + 0x68) = -(float)dVar5;
    dVar2 = (double)NEON_ucvtf((ulong)param_5[1]);
    dVar2 = dVar2 * -3.0 * dVar3;
    dVar5 = (double)NEON_fminnm(dVar2 * dVar4,0x3feff7ced916872b);
    dVar2 = exp2(dVar2 * 3.321928094887362);
    *(float *)(param_3 + 0x70) = (float)(dVar2 - dVar2 * dVar5);
    *(float *)(param_3 + 0x74) = -(float)dVar5;
    dVar2 = (double)NEON_ucvtf((ulong)param_5[2]);
    dVar2 = dVar2 * -3.0 * dVar3;
    dVar5 = (double)NEON_fminnm(dVar2 * dVar4,0x3feff7ced916872b);
    dVar2 = exp2(dVar2 * 3.321928094887362);
    *(float *)(param_3 + 0x7c) = (float)(dVar2 - dVar2 * dVar5);
    *(float *)(param_3 + 0x80) = -(float)dVar5;
    dVar2 = (double)NEON_ucvtf((ulong)param_5[3]);
    dVar3 = dVar2 * -3.0 * dVar3;
    dVar4 = (double)NEON_fminnm(dVar3 * dVar4,0x3feff7ced916872b);
    dVar2 = exp2(dVar3 * 3.321928094887362);
    uVar1 = 1;
    *(float *)(param_3 + 0x88) = (float)(dVar2 - dVar2 * dVar4);
    *(float *)(param_3 + 0x8c) = -(float)dVar4;
  }
  return uVar1;
}



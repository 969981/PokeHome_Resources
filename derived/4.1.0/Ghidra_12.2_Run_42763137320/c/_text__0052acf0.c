/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052acf0; name: FUN_.text__0052acf0
 */


undefined1  [16]
FUN__text__0052acf0(uint *param_1,double *param_2,undefined8 param_3,undefined8 param_4,long param_5
                   )

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  
  local_58 = 0.0;
  local_50 = 0.0;
  local_48 = 0.0;
  FUN__text__00520ce4(param_5,param_2,param_3,&local_58);
  uVar4 = *(undefined8 *)(param_5 + 0x70);
  fVar13 = (float)param_1[0x40];
  uVar2 = 0x50c5d1f;
  if (*param_1 != 0) {
    uVar2 = *param_1 * 0x1000193;
  }
  uVar3 = (uint)uVar4;
  uVar6 = (uint)((ulong)uVar4 >> 0x20);
  *param_1 = (((((((uVar2 ^ uVar3 & 0xff) * 0x1000193 ^ uVar3 >> 8 & 0xff) * 0x1000193 ^
                 uVar3 >> 0x10 & 0xff) * 0x1000193 ^ uVar3 >> 0x18) * 0x1000193 ^ uVar6 & 0xff) *
               0x1000193 ^ uVar6 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)uVar4 >> 0x30) & 0xff) *
             0x1000193 ^ (uint)(byte)((ulong)uVar4 >> 0x38);
  uVar2 = param_1[0x3e];
  pdVar1 = (double *)(param_1 + 2);
  if (uVar2 != 0) {
    pdVar1 = (double *)(param_1 + (ulong)(uVar2 - 1) * 6 + 8);
  }
  dVar9 = pdVar1[1] - local_50;
  dVar10 = *pdVar1 - local_58;
  dVar8 = pdVar1[2] - local_48;
  fVar11 = (float)SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8);
  if (fVar11 <= 0.0) {
    param_1[0x44] = 0x42480000;
  }
  else {
    dVar12 = (double)(fVar13 + fVar11) / (double)fVar11;
    local_70 = local_58 + dVar10 * dVar12;
    dStack_68 = local_50 + dVar9 * dVar12;
    local_60 = local_48 + dVar8 * dVar12;
    fVar5 = (float)FUN__text__00521144(param_5,&local_70);
    uVar2 = param_1[0x3e];
    uVar6 = NEON_fminnm(fVar5 * 15.915494,param_1[0x44]);
    param_1[0x44] = uVar6;
  }
  if (uVar2 < 8) {
    param_1[0x40] = (uint)(fVar13 + fVar11);
    param_2 = &local_58;
    *(double *)(param_1 + (ulong)uVar2 * 6 + 8) = local_58;
    *(double *)(param_1 + (ulong)uVar2 * 6 + 10) = local_50;
    *(double *)(param_1 + (ulong)uVar2 * 6 + 0xc) = local_48;
    uVar2 = param_1[0x3e];
    *(undefined8 *)(param_1 + (ulong)uVar2 * 2 + 0x4e) = param_4;
    uVar4 = *(undefined8 *)(param_5 + 0x70);
    param_1[0x3e] = uVar2 + 1;
    *(undefined8 *)(param_1 + (ulong)uVar2 * 2 + 0x5e) = uVar4;
  }
  auVar7._0_8_ = *param_2;
  auVar7._8_8_ = 0;
  return auVar7;
}



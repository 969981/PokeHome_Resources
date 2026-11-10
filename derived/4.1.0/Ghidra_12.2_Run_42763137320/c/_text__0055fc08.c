/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055fc08; name: FUN_.text__0055fc08
 */


void FUN__text__0055fc08(float param_1,float *param_2,long param_3,long *param_4,ulong *param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  
  *(long **)(param_2 + 0xe8) = param_4;
  cVar2 = *(char *)(param_3 + 0x24);
  *(char *)(param_2 + 5) = cVar2;
  *param_2 = param_1;
  param_2[1] = 1.0 / param_1;
  fVar6 = 1.0;
  if (cVar2 != '\0') {
    fVar6 = 4.0;
  }
  param_2[2] = fVar6 * param_1;
  param_2[3] = 1.0 / (fVar6 * param_1);
  fVar6 = (float)NEON_fminnm(param_1 * 0.5,0x469c4000);
  param_2[4] = fVar6;
  uVar5 = *param_5;
  fVar6 = *(float *)(param_5 + 1);
  *(ulong *)(param_2 + 0xe5) = uVar5;
  uVar1 = (uint)uVar5 & 0xff;
  param_2[0xe7] = fVar6;
  if (((uVar5 & 0xff) == 0) ||
     ((((uVar1 != 0x90 || (*(char *)((long)param_2 + 0x399) == '\0')) && (uVar1 != 0x80)) &&
      ((uVar1 != 0x90 || (*(char *)((long)param_2 + 0x399) != '\0')))))) {
    *(undefined1 *)(param_2 + 0xe5) = 0x80;
    *(undefined2 *)(param_2 + 0xe6) = 0x30;
  }
  fVar6 = *(float *)(param_3 + 0x18);
  param_2[0x9c] = fVar6;
  if (2 < (int)fVar6 - 1U) {
    fVar6 = 0.0;
  }
  plVar4 = (long *)(**(code **)(*param_4 + 0x10))(param_4);
  uVar3 = (**(code **)(*plVar4 + 0xe0))();
  FUN__text__00561608(param_2 + 0xa0,fVar6,(int)param_1,uVar3);
  FUN__text__0057bf1c(param_2[2],*param_2 * 0.375,0,0x3f800000,param_2 + 0x34,3);
  FUN__text__0057bf1c(param_2[2],*param_2 * 0.375,0,0x3f800000,param_2 + 0x58,3);
  FUN__text__0057bf1c(param_2[2],*param_2 * 0.375,0,0x3f800000,param_2 + 0x7c,3);
  return;
}



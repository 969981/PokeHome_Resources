/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532f00; name: FUN_.text__00532f00
 */


bool FUN__text__00532f00(undefined1 param_1 [16],double param_2,double param_3,long param_4,
                        long param_5,long param_6,long param_7)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  uVar7 = *(undefined8 *)(param_4 + 0xe8);
  uVar8 = *(undefined8 *)(param_4 + 0xf0);
  uVar9 = *(undefined8 *)(param_4 + 0xf8);
  local_98 = uVar7;
  uStack_90 = uVar8;
  local_88 = uVar9;
  local_b0 = (double)FUN__text__0047da2c(*(undefined8 *)(*(long *)(param_4 + 8) + 0x20));
  dStack_a8 = param_2;
  local_a0 = param_3;
  uVar1 = FUN__text__0052163c(param_7,param_5);
  uVar4 = FUN__text__00521904(param_7,uVar1);
  dVar10 = param_2;
  dVar11 = param_3;
  local_c8 = uVar4;
  dStack_c0 = param_2;
  local_b8 = param_3;
  dVar5 = (double)FUN__text__00520f94(param_7,&local_b0);
  lVar3 = param_6 + 8;
  fVar6 = *(float *)(param_6 + 0x128);
  *(float *)(param_6 + 0x2c) = fVar6;
  dVar10 = (dVar5 - local_b0) * (dVar5 - local_b0) + (dVar10 - dStack_a8) * (dVar10 - dStack_a8) +
           (dVar11 - local_a0) * (dVar11 - local_a0);
  dVar11 = (double)(fVar6 * fVar6);
  if (*(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58) == *(long *)(param_7 + 0x70)) {
    uVar2 = FUN__text__00521c6c(uVar7,uVar8,uVar9,param_7);
    if (dVar10 < dVar11) {
      if ((uVar2 & 1) == 0) goto LAB__text__00533010;
LAB__text__00533058:
      FUN__text__0052b1ac(lVar3,&local_98,&local_c8);
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58);
      goto joined_r0x005330f8;
    }
  }
  else if (dVar10 < dVar11) {
LAB__text__00533010:
    uVar2 = FUN__text__00521b44(uVar7,uVar8,uVar9,param_7,uVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = FUN__text__00533100(uVar7,uVar8,uVar9,uVar4,param_2,param_3,
                                    *(undefined8 *)(param_5 + 0xb0),0,lVar3), (uVar2 & 1) == 0)) {
      FUN__text__0052b23c(lVar3);
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58);
      goto joined_r0x005330f8;
    }
    goto LAB__text__00533058;
  }
  (**(code **)(*(long *)(param_6 + 8) + 0x10))(lVar3);
  *(undefined2 *)(param_6 + 0x31) = 0x100;
  lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58);
joined_r0x005330f8:
  if (lVar3 != -1) {
    *(undefined1 *)(param_6 + 0x33) = 0;
  }
  return dVar10 < dVar11;
}



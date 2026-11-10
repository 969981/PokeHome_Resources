/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00533ab0; name: FUN_.text__00533ab0
 */


bool FUN__text__00533ab0(long param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  
  lVar8 = *(long *)(*(long *)(param_3 + 8) + 0x38);
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x38);
  lVar1 = FUN__text__0050c2a0(param_4,*(undefined8 *)(lVar8 + 0x68));
  uVar5 = *(undefined8 *)(param_4 + 0x78);
  lVar2 = FUN__text__0050c2a0(param_4,*(undefined8 *)(lVar7 + 0x68));
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0xb0);
  }
  if (*(long *)(lVar7 + 0x58) != -1) {
    FUN__text__0050c2a0(param_4,*(undefined8 *)(lVar7 + 0x80));
  }
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    pdVar4 = (double *)(*(long *)(param_1 + 0x78) + (ulong)param_2 * 0x18);
  }
  else {
    pdVar4 = (double *)
             (*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x20) + (ulong)param_2 * 0x38 + 0x18
             );
  }
  local_78 = *pdVar4;
  dVar11 = pdVar4[1];
  dVar12 = pdVar4[2];
  local_90 = *(undefined8 *)(param_3 + 0xe8);
  uStack_88 = *(undefined8 *)(param_3 + 0xf0);
  local_80 = *(undefined8 *)(param_3 + 0xf8);
  dStack_70 = dVar11;
  local_68 = dVar12;
  fVar9 = (float)FUN__text__00509290(param_1);
  plVar6 = (long *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x118);
  *(float *)((long)plVar6 + 0x24) = fVar9;
  dVar10 = (double)FUN__text__0047da2c(*(undefined8 *)(*(long *)(param_3 + 8) + 0x20));
  dVar10 = (dVar10 - local_78) * (dVar10 - local_78) + (dVar11 - dStack_70) * (dVar11 - dStack_70) +
           (dVar12 - local_68) * (dVar12 - local_68);
  if ((double)(fVar9 * fVar9) <= dVar10) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    *(undefined2 *)((long)plVar6 + 0x29) = 0x100;
    lVar1 = *(long *)(lVar8 + 0x58);
  }
  else {
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0xb0);
    }
    FUN__text__00533100(uVar5,uVar3,plVar6);
    FUN__text__0052b1ac(plVar6,&local_78,&local_90);
    lVar1 = *(long *)(lVar8 + 0x58);
  }
  if ((lVar1 != -1) || (*(long *)(lVar7 + 0x58) != -1)) {
    *(undefined1 *)((long)plVar6 + 0x2b) = 0;
  }
  return dVar10 < (double)(fVar9 * fVar9);
}



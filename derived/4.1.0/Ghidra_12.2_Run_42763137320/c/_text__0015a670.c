/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015a670; name: FUN_.text__0015a670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0015a670(long *param_1,undefined8 param_2,long param_3,int param_4,
                        undefined4 param_5)

{
  ushort uVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  ushort uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float local_58;
  float fStack_54;
  
  plVar2 = _DAT_0089f4f0;
  lVar15 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  FUN__text__005f32c4(*(undefined8 *)(lVar15 + 0x70),param_2);
  FUN__text__00163fb4(*(undefined8 *)(lVar15 + 0x68),*(undefined8 *)(lVar15 + 0x78),
                      *(undefined8 *)(lVar15 + 0x70));
  lVar14 = *(long *)(lVar15 + 0x78);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  uVar9 = FUN__text__005f3244(lVar14);
  plVar10 = (long *)FUN__text__006bf32c(param_1);
  if ((plVar10 == (long *)0x0) || (iVar3 = (**(code **)(*plVar10 + 0x48))(), iVar3 != 1)) {
    if ((param_4 != 0xb) && (DAT_008e1cd4 != param_4)) {
      lVar15 = *(long *)(*plVar2 + 0x80);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      FUN__text__00112f48(&local_58,lVar15,uVar9,param_4);
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      uVar9 = FUN__text__005f3244(CONCAT44(fStack_54,local_58));
      if (CONCAT44(fStack_54,local_58) != 0) {
        (**(code **)(*(long *)(CONCAT44(fStack_54,local_58) + 0x48) + 0x18))();
      }
    }
    if (param_3 == 0) {
      puVar16 = &DAT_008e1cd8;
      FUN__text__0015d468(&DAT_008e1cd8);
      DAT_008e1cf0._0_4_ = 0;
    }
    else {
      puVar16 = *(undefined8 **)(param_3 + 0x58);
      FUN__text__0015d468(puVar16);
      *(int *)(puVar16 + 3) = (int)*(float *)(param_1 + 10);
    }
    uVar1 = *(ushort *)((long)param_1 + 0x114) >> 2 & 1;
    if ((undefined8 *)param_1[0x21] != puVar16) {
      uVar1 = 1;
    }
    uVar13 = 4;
    if (uVar1 == 0) {
      uVar13 = 0;
    }
    *(ushort *)((long)param_1 + 0x114) = uVar13 | *(ushort *)((long)param_1 + 0x114) & 0xfffb;
    if ((undefined8 *)param_1[0x21] != puVar16) {
      param_1[0x21] = (long)puVar16;
    }
    iVar3 = DAT_008e1cd4;
    if (param_4 != 0xb) {
      iVar3 = param_4;
    }
    uVar4 = FUN__text__0015ab40(param_1,iVar3,1);
    *(undefined4 *)((long)puVar16 + 0x24) = uVar4;
    lVar15 = FUN__text__006b46d0(param_1,0x71679d);
    if (lVar15 == 0) {
      lVar15 = FUN__text__006b46d0(param_1,0x710d96);
    }
    puVar16 = _DAT_0089f4d0;
    uVar11 = FUN__text__0016085c(*_DAT_0089f4d0,uVar4,iVar3);
    FUN__text__006bf334(param_1,uVar11);
    if (lVar15 != 0) {
      fVar18 = *(float *)(lVar15 + (ulong)*(uint *)(lVar15 + 4));
      lVar15 = FUN__text__006b46d0(param_1,0x719e06);
      if (lVar15 == 0) {
        FUN__text__006b46d0(param_1,0x719e0b);
      }
      uVar11 = FUN__text__006bf32c(param_1);
      iVar5 = FUN__text__0015aca0(fVar18,uVar9,uVar11,0);
      fStack_54 = (float)iVar5;
      if (*(float *)(param_1 + 10) < fStack_54) {
        fVar17 = *(float *)(param_1 + 10) / fStack_54;
        fStack_54 = -0.05;
        fVar18 = fVar18 * fVar17 + -0.05;
      }
      FUN__text__001613d8(uVar4,0xb);
      local_58 = fVar18;
      FUN__text__006bf4c8(param_1,&local_58);
    }
    uVar6 = FUN__text__005f3410(uVar9);
    uVar7 = FUN__text__006bd81c(param_1);
    if ((uVar7 & 0xffff) < uVar6) {
      uVar9 = 0x72461e;
      pcVar12 = *(code **)(*param_1 + 0x158);
      uVar4 = 0;
      goto LAB__text__0015a9a0;
    }
    uVar11 = *puVar16;
    uVar8 = FUN__text__005f3410(uVar9);
    FUN__text__00160b20(uVar11,uVar9,param_1,uVar8,iVar3,uVar4,param_5);
  }
  uVar4 = FUN__text__005f3410(uVar9);
  pcVar12 = *(code **)(*param_1 + 0x158);
LAB__text__0015a9a0:
  (*pcVar12)(param_1,uVar9,0,uVar4);
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  return;
}



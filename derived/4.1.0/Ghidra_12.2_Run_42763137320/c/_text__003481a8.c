/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003481a8; name: FUN_.text__003481a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003481a8(long param_1)

{
  undefined2 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined1 local_1a0 [8];
  undefined1 auStack_198 [256];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar7 = *(int *)(param_1 + 0x14);
  if (iVar7 == 2) {
    iVar7 = *(int *)(param_1 + 0x3941470);
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0x3941478) != 0) {
        iVar7 = FUN__text__00348194();
        if (iVar7 != 2) {
          *(undefined4 *)(param_1 + 0x3941478) = 0;
          lVar10 = FUN__text__00321ac0();
          *(int *)(lVar10 + 0x19352c) = *(int *)(lVar10 + 0x19352c) + -1;
LAB__text__00348450:
          puVar15 = (undefined8 *)0x0;
          if (*(long *)(param_1 + 0x18) != 0) {
            puVar15 = (undefined8 *)0x0;
            if (*(long *)(param_1 + 0x18) != 0) {
              puVar15 = (undefined8 *)0x0;
              if (*(int *)(*(long *)(param_1 + 0x18) + 0x54) != 0) {
                puVar15 = *(undefined8 **)(param_1 + 0x20);
              }
            }
          }
          puVar3 = (undefined8 *)(param_1 + 0x30);
          if (puVar15 != (undefined8 *)0x0) {
            puVar3 = puVar15;
          }
          (**(code **)*puVar3)();
          return 1;
        }
        iVar7 = *(int *)(param_1 + 0x3941470);
        if (iVar7 != 0) goto LAB__text__00348308;
      }
      if (*(int *)(param_1 + 0x3941474) == 0) {
        FUN__text__003330e0(*(undefined4 *)(param_1 + 0x3941478),
                            *(undefined4 *)(param_1 + 0x31270b8));
      }
      else {
        FUN__text__003333b0();
      }
    }
    else {
LAB__text__00348308:
      FUN__text__00333080(iVar7);
    }
    *(undefined4 *)(param_1 + 0x3941478) = 0;
    plVar14 = (long *)0x0;
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar14 = (long *)0x0;
      if (*(long *)(param_1 + 0x18) != 0) {
        plVar14 = (long *)0x0;
        if (*(int *)(*(long *)(param_1 + 0x18) + 0x54) != 0) {
          plVar14 = *(long **)(param_1 + 0x20);
        }
      }
    }
    local_1a0[0] = 0;
    plVar2 = (long *)(param_1 + 0x30);
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14;
    }
    (**(code **)(*plVar2 + 8))(plVar2,local_1a0);
    return 1;
  }
  if (iVar7 == 1) {
    lVar10 = param_1 + 0x2ff2420;
    uVar11 = FUN__text__0064ba4c(lVar10);
    if ((uVar11 & 1) != 0) {
      return 0;
    }
    uVar11 = FUN__text__0064bab8(lVar10);
    if ((uVar11 & 1) == 0) {
      puVar12 = (uint *)FUN__text__0064bae4(lVar10);
      uVar4 = *puVar12;
      uVar8 = 0x71338b;
LAB__text__003484ac:
      uVar5 = *(undefined4 *)(param_1 + 0x2ff2428);
      goto LAB__text__003484b8;
    }
    lVar13 = FUN__text__0064bad0(lVar10);
    if (lVar13 == 0) {
      puVar12 = (uint *)FUN__text__0064bae4(lVar10);
      uVar4 = *puVar12;
      uVar8 = 0x718b17;
      goto LAB__text__003484ac;
    }
    iVar7 = FUN__text__00348500(param_1);
    *(int *)(param_1 + 0x3941478) = iVar7;
    if ((iVar7 == 0) && (*(int *)(param_1 + 0x3941474) == 0)) {
      iVar6 = *(int *)(param_1 + 0x394147c);
      iVar7 = iVar6 + 1;
      *(int *)(param_1 + 0x394147c) = iVar7;
      if (iVar6 == 0) goto LAB__text__00348450;
      goto LAB__text__003484c0;
    }
  }
  else {
    if (iVar7 != 0) {
      return 0;
    }
    FUN__text__003279dc(auStack_198,0x71accd);
    uVar8 = FUN__text__00327a38(auStack_198);
    puVar1 = (undefined2 *)(param_1 + 0x3941480);
    *(undefined1 *)(param_1 + 0x3941482) = 0;
    *puVar1 = 0x7d7b;
    FUN__text__003154a0(param_1,puVar1,5000000);
    uVar9 = FUN__text__00321ac0();
    lVar10 = FUN__text__0030d5f0();
    snprintf((char *)(param_1 + 0x3e05fc0),5000000,(char *)0x717e0e,uVar9,lVar10 + 0x12a1,puVar1);
    local_98[0] = 5;
    local_60 = 0;
    uStack_58 = 0;
    local_90 = *_DAT_008a2a40;
    uStack_88 = _DAT_008a2a40[1];
    local_80 = _DAT_008a2a40[2];
    uStack_78 = _DAT_008a2a40[3];
    local_70 = _DAT_008a2a40[4];
    uStack_68 = 0;
    FUN__text__0031b870(param_1,(char *)(param_1 + 0x3e05fc0));
    lVar10 = FUN__text__00321ac0();
    *(int *)(lVar10 + 0x19352c) = *(int *)(lVar10 + 0x19352c) + 1;
    uVar11 = FUN__text__0064b5b0(param_1 + 0x2ff2420,uVar8,&DAT_009cca20 + param_1,local_98);
    if ((uVar11 & 1) != 0) {
      iVar7 = 1;
      goto LAB__text__003484c0;
    }
    puVar12 = (uint *)FUN__text__0064bae4(param_1 + 0x2ff2420);
    uVar4 = *puVar12;
    uVar8 = 0x71acb2;
    uVar5 = *(undefined4 *)(param_1 + 0x2ff2428);
LAB__text__003484b8:
    FUN__text__003200a0(uVar8,uVar4 & 0x3fffff,uVar5,0);
  }
  iVar7 = 2;
LAB__text__003484c0:
  *(int *)(param_1 + 0x14) = iVar7;
  return 0;
}



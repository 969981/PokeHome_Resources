/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0034a510; name: FUN_.text__0034a510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0034a510(long param_1)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
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
  undefined8 *puVar14;
  long *plVar15;
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
    uVar11 = FUN__text__0034ad30(param_1,*(undefined4 *)(param_1 + 0x3941474));
    if ((uVar11 & 1) != 0) {
      lVar10 = FUN__text__00321ac0();
      if (0 < *(int *)(lVar10 + 0x19352c)) {
        lVar10 = FUN__text__00321ac0();
        *(int *)(lVar10 + 0x19352c) = *(int *)(lVar10 + 0x19352c) + -1;
      }
      puVar14 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x18) != 0) {
        puVar14 = (undefined8 *)0x0;
        if (*(long *)(param_1 + 0x18) != 0) {
          puVar14 = (undefined8 *)0x0;
          if (*(int *)(*(long *)(param_1 + 0x18) + 0x54) != 0) {
            puVar14 = *(undefined8 **)(param_1 + 0x20);
          }
        }
      }
      puVar2 = (undefined8 *)(param_1 + 0x30);
      if (puVar14 != (undefined8 *)0x0) {
        puVar2 = puVar14;
      }
      (**(code **)*puVar2)();
      return 1;
    }
    if (*(int *)(param_1 + 0x3941470) == 0) {
      FUN__text__003330e0(*(undefined4 *)(param_1 + 0x3941474),*(undefined4 *)(param_1 + 0x31270b8))
      ;
      *(undefined4 *)(param_1 + 0x3941474) = 0;
      plVar15 = (long *)0x0;
      if (*(long *)(param_1 + 0x18) == 0) goto LAB__text__0034a844;
    }
    else {
      FUN__text__00333080();
      *(undefined4 *)(param_1 + 0x3941474) = 0;
      if (*(long *)(param_1 + 0x18) == 0) {
        plVar15 = (long *)0x0;
        goto LAB__text__0034a844;
      }
    }
    plVar15 = (long *)0x0;
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar15 = (long *)0x0;
      if (*(int *)(*(long *)(param_1 + 0x18) + 0x54) != 0) {
        plVar15 = *(long **)(param_1 + 0x20);
      }
    }
LAB__text__0034a844:
    local_1a0[0] = 0;
    plVar3 = (long *)(param_1 + 0x30);
    if (plVar15 != (long *)0x0) {
      plVar3 = plVar15;
    }
    (**(code **)(*plVar3 + 8))(plVar3,local_1a0);
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
      uVar8 = 0x71954a;
LAB__text__0034a880:
      uVar5 = *(undefined4 *)(param_1 + 0x2ff2428);
      goto LAB__text__0034a88c;
    }
    lVar13 = FUN__text__0064bad0(lVar10);
    if (lVar13 == 0) {
      puVar12 = (uint *)FUN__text__0064bae4(lVar10);
      uVar4 = *puVar12;
      uVar8 = 0x71e7c1;
      goto LAB__text__0034a880;
    }
    iVar7 = FUN__text__0034a8b8(param_1);
    *(int *)(param_1 + 0x3941474) = iVar7;
    if (iVar7 == 0) {
      iVar6 = *(int *)(param_1 + 0x3941478);
      iVar7 = iVar6 + 1;
      *(int *)(param_1 + 0x3941478) = iVar7;
      if (iVar6 == 0) {
        puVar14 = (undefined8 *)0x0;
        if (*(long *)(param_1 + 0x18) != 0) {
          puVar14 = (undefined8 *)0x0;
          if (*(long *)(param_1 + 0x18) != 0) {
            puVar14 = (undefined8 *)0x0;
            if (*(int *)(*(long *)(param_1 + 0x18) + 0x54) != 0) {
              puVar14 = *(undefined8 **)(param_1 + 0x20);
            }
          }
        }
        puVar2 = (undefined8 *)(param_1 + 0x30);
        if (puVar14 != (undefined8 *)0x0) {
          puVar2 = puVar14;
        }
        (**(code **)*puVar2)();
        lVar10 = FUN__text__00321ac0();
        *(undefined4 *)(lVar10 + 0x934d0) = 1;
        return 1;
      }
      goto LAB__text__0034a894;
    }
  }
  else {
    if (iVar7 != 0) {
      return 0;
    }
    FUN__text__003279dc(auStack_198,0x712a10);
    uVar8 = FUN__text__00327a38(auStack_198);
    puVar1 = (undefined2 *)(param_1 + 0x394147c);
    *(undefined1 *)(param_1 + 0x394147e) = 0;
    *puVar1 = 0x7d7b;
    FUN__text__003154a0(param_1,puVar1,500000);
    uVar9 = FUN__text__00321ac0();
    lVar10 = FUN__text__0030d5f0();
    snprintf((char *)(param_1 + 0x39bb59c),500000,(char *)0x717e0e,uVar9,lVar10 + 0x12a1,puVar1);
    local_98[0] = 5;
    local_60 = 0;
    uStack_58 = 0;
    local_90 = *_DAT_008a2a40;
    uStack_88 = _DAT_008a2a40[1];
    local_80 = _DAT_008a2a40[2];
    uStack_78 = _DAT_008a2a40[3];
    local_70 = _DAT_008a2a40[4];
    uStack_68 = 0;
    FUN__text__0031b870(param_1,(char *)(param_1 + 0x39bb59c));
    lVar10 = FUN__text__00321ac0();
    *(int *)(lVar10 + 0x19352c) = *(int *)(lVar10 + 0x19352c) + 1;
    uVar11 = FUN__text__0064b5b0(param_1 + 0x2ff2420,uVar8,&DAT_009cca20 + param_1,local_98);
    if ((uVar11 & 1) != 0) {
      iVar7 = 1;
      goto LAB__text__0034a894;
    }
    puVar12 = (uint *)FUN__text__0064bae4(param_1 + 0x2ff2420);
    uVar4 = *puVar12;
    uVar8 = 0x710ff3;
    uVar5 = *(undefined4 *)(param_1 + 0x2ff2428);
LAB__text__0034a88c:
    FUN__text__003200a0(uVar8,uVar4 & 0x3fffff,uVar5,0);
  }
  iVar7 = 2;
LAB__text__0034a894:
  *(int *)(param_1 + 0x14) = iVar7;
  return 0;
}



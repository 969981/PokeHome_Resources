/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661ff0; name: FUN_.text__00661ff0
 */


long FUN__text__00661ff0(long *param_1,void *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *param_1;
  lVar8 = *(long *)(lVar7 + 0x1e8);
  lVar3 = FUN__text__00661e0c();
  if ((int)lVar3 != 0) {
    return lVar3;
  }
  plVar1 = param_1 + 0xaa;
  param_1[0xb7] = param_1[0x4e];
  param_1[0xb6] = param_1[0x50];
  param_1[0x4e] = (long)FUN__text__0066227c;
  param_1[0x50] = (long)&DAT__text__00662598;
  if (*(int *)(*param_1 + 0x19c) == 2) {
    *(undefined4 *)(lVar8 + 0x218) = 1;
    uVar4 = FUN__text__0067fed8(param_1[0xaa],param_1 + 0xab,param_1[0xb5],0);
    if ((int)uVar4 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = FUN__text__00679b60();
      uVar6 = 0x710969;
      goto LAB__text__00662168;
    }
    iVar2 = FUN__text__0067fd5c(*plVar1,*(undefined4 *)(lVar8 + 0x218),lVar7);
    if (iVar2 != 0) {
      FUN__text__00666f74(lVar7,0x718deb,*(undefined4 *)(lVar8 + 0x218));
    }
  }
  else {
    param_1[0xbe] = 0x6400000003;
    param_1[0xbf] = 0x4000000000000004;
    *(undefined4 *)(param_1 + 0xc0) = 2;
    *(uint *)((long)param_1 + 0x604) = (uint)(*(long *)(*(long *)(*param_1 + 0xd8) + 0x70) != 0);
    param_1[0xc1] = 3;
    *(undefined4 *)(lVar8 + 0x218) = 0xffffffff;
    uVar4 = FUN__text__006866dc(param_1[0xaa],0,param_1 + 0xbe,param_1[0xc1]);
    if ((int)uVar4 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = FUN__text__00679b60();
      uVar6 = 0x70b267;
      goto LAB__text__00662168;
    }
  }
  uVar4 = FUN__text__006866e4(*plVar1,0,0,0x40000000);
  if ((int)uVar4 == 0) {
    if (0x8000 < param_3) {
      FUN__text__0066713c(lVar7,0x718e1b,0x8000,param_3);
      return 0x10;
    }
    FUN__text__00666f74(*param_1,0x71990b,param_3);
    if (param_3 != 0) {
      memcpy((void *)param_1[0xb8],param_2,param_3);
    }
    param_1[0xb9] = param_3;
    uVar4 = FUN__text__0067d808(param_1[0xaa],param_1[0xb8],param_3);
    iVar2 = FUN__text__00679eec();
    if (iVar2 == 0) {
      if (uVar4 == param_3) {
        param_1[0xb9] = 0;
        param_1[0xba] = 0;
      }
      else {
        param_1[0xba] = param_1[0xba] + uVar4;
      }
      uVar4 = FUN__text__00662b8c(lVar7,*plVar1);
      if ((int)uVar4 == 0) {
        iVar2 = FUN__text__00662c1c(plVar1);
        return (ulong)(iVar2 != 0) << 4;
      }
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = FUN__text__00679b60();
      uVar6 = 0x70fd44;
    }
    else {
      uVar5 = FUN__text__00679b60(uVar4 & 0xffffffff);
      uVar6 = 0x72070d;
      uVar4 = uVar4 & 0xffffffff;
    }
  }
  else {
    uVar4 = uVar4 & 0xffffffff;
    uVar5 = FUN__text__00679b60();
    uVar6 = 0x717655;
  }
LAB__text__00662168:
  FUN__text__0066713c(lVar7,uVar6,uVar5,uVar4);
  return 0x10;
}



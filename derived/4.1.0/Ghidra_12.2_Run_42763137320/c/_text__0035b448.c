/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035b448; name: FUN_.text__0035b448
 */


uint FUN__text__0035b448(long param_1,long *param_2,long *param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *param_3;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((299 < param_4) || (0x1d < param_5)) goto LAB__text__0035b50c;
  }
  FUN__text__0030681c(lVar6,param_1 + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158 + 0x60);
  lVar5 = param_1 + (ulong)param_4 * 12000 + (ulong)param_5 * 400;
  uVar1 = *(undefined8 *)(lVar5 + 0x5e7cec);
  *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar5 + 0x5e7ce4);
  *(undefined8 *)(lVar6 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(lVar5 + 0x5e7cf4);
  uVar2 = *(undefined8 *)(lVar5 + 0x5e7cfc);
  uVar3 = *(undefined8 *)(lVar5 + 0x5e7d0c);
  *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(lVar5 + 0x5e7d04);
  *(undefined8 *)(lVar6 + 0x88) = uVar3;
  *(undefined8 *)(lVar6 + 0x70) = uVar1;
  *(undefined8 *)(lVar6 + 0x78) = uVar2;
  uVar1 = *(undefined8 *)(lVar5 + 0x5e7d14);
  uVar2 = *(undefined8 *)(lVar5 + 0x5e7d1c);
  uVar3 = *(undefined8 *)(&DAT__text__005e7d2c + lVar5);
  *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(lVar5 + 0x5e7d24);
  *(undefined8 *)(lVar6 + 0xa8) = uVar3;
  *(undefined8 *)(lVar6 + 0x90) = uVar1;
  *(undefined8 *)(lVar6 + 0x98) = uVar2;
LAB__text__0035b50c:
  plVar7 = (long *)(lVar6 + 0x48);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  uVar4 = FUN__text__00306588(lVar6);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  if ((uVar4 & 1) != 0) {
    FUN__text__00306814(*param_2,param_1 + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158 + 0x60);
    lVar5 = *param_2;
    lVar6 = param_1 + (ulong)param_4 * 12000 + (ulong)param_5 * 400;
    FUN__text__005fc07c(lVar6 + 0x5e7be0,*(undefined8 *)(lVar5 + 0x58));
    uVar1 = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar6 + 0x5e7ce4) = *(undefined8 *)(lVar5 + 0x60);
    *(undefined8 *)(lVar6 + 0x5e7cec) = uVar1;
    uVar2 = *(undefined8 *)(lVar5 + 0x88);
    uVar1 = *(undefined8 *)(lVar5 + 0x70);
    uVar3 = *(undefined8 *)(lVar5 + 0x78);
    *(undefined8 *)(lVar6 + 0x5e7d04) = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)(lVar6 + 0x5e7d0c) = uVar2;
    *(undefined8 *)(lVar6 + 0x5e7cf4) = uVar1;
    *(undefined8 *)(lVar6 + 0x5e7cfc) = uVar3;
    uVar2 = *(undefined8 *)(lVar5 + 0xa8);
    uVar1 = *(undefined8 *)(lVar5 + 0x90);
    uVar3 = *(undefined8 *)(lVar5 + 0x98);
    *(undefined8 *)(lVar6 + 0x5e7d24) = *(undefined8 *)(lVar5 + 0xa0);
    *(undefined8 *)(&DAT__text__005e7d2c + lVar6) = uVar2;
    *(undefined8 *)(lVar6 + 0x5e7d14) = uVar1;
    *(undefined8 *)(lVar6 + 0x5e7d1c) = uVar3;
  }
  return uVar4 & 1;
}



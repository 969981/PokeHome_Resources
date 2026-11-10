/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00301138; name: FUN_.text__00301138
 */


undefined8 FUN__text__00301138(long param_1,long *param_2,long *param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  uint local_68 [2];
  
  if (*param_3 == 0) {
    return 0;
  }
  puVar1 = local_68;
  if (param_4 != (uint *)0x0) {
    puVar1 = param_4;
  }
  local_68[0] = 0xffffffff;
  local_68[1] = 0xffffffff;
  uVar3 = FUN__text__00303fd0(param_1,param_2,puVar1);
  if ((uVar3 & 1) == 0) goto LAB__text__003012d8;
  lVar7 = *param_3;
  if (lVar7 == 0) {
    uVar10 = *puVar1;
    puVar2 = local_68;
    if (param_4 != (uint *)0x0) {
      puVar2 = param_4;
    }
    uVar11 = puVar2[1];
LAB__text__00301228:
    lVar8 = param_1 + (ulong)uVar10 * 0x5fa0 + (ulong)uVar11 * 0x330;
    FUN__text__00306b04(lVar7,lVar8 + 0x58);
    uVar4 = *(undefined8 *)(lVar8 + 0x2f8);
    *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(lVar8 + 0x2f0);
    *(undefined8 *)(lVar7 + 0x68) = uVar4;
    uVar4 = *(undefined8 *)(lVar8 + 0x300);
    uVar5 = *(undefined8 *)(lVar8 + 0x308);
    uVar6 = *(undefined8 *)(lVar8 + 0x318);
    *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)(lVar8 + 0x310);
    *(undefined8 *)(lVar7 + 0x88) = uVar6;
    *(undefined8 *)(lVar7 + 0x70) = uVar4;
    *(undefined8 *)(lVar7 + 0x78) = uVar5;
    uVar4 = *(undefined8 *)(lVar8 + 0x328);
    uVar5 = *(undefined8 *)(lVar8 + 0x330);
    uVar6 = *(undefined8 *)(lVar8 + 0x338);
    *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(lVar8 + 800);
    *(undefined8 *)(lVar7 + 0x98) = uVar4;
    *(undefined8 *)(lVar7 + 0xa0) = uVar5;
    *(undefined8 *)(lVar7 + 0xa8) = uVar6;
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
LAB__text__00301290:
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  else {
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    puVar2 = local_68;
    if (param_4 != (uint *)0x0) {
      puVar2 = param_4;
    }
    if ((*puVar1 != 0xffffffff) && (puVar2[1] != 0xffffffff)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar10 = *puVar1;
      if ((uVar10 < 300) && (uVar11 = puVar2[1], uVar11 < 0x1e)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        goto LAB__text__00301228;
      }
      goto LAB__text__00301290;
    }
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = FUN__text__00637404(*(undefined8 *)(*param_3 + 0x58));
  if (lVar7 == *param_2) {
    return 1;
  }
  FUN__text__00306824(*param_3);
LAB__text__003012d8:
  puVar2 = local_68;
  if (param_4 != (uint *)0x0) {
    puVar2 = param_4;
  }
  *puVar1 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  return 0;
}



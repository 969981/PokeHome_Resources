/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00210b10; name: FUN_.text__00210b10
 */


void FUN__text__00210b10(long param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  byte bVar15;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 == (undefined8 *)0x0)) {
LAB__text__00210ed0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar5 = (long *)(**(code **)*puVar9)(puVar9);
  plVar6 = (long *)FUN__text__0020a9bc();
  if (plVar6 != plVar5) {
    do {
      plVar5 = (long *)*plVar5;
    } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
    if (plVar5 == (long *)0x0) goto LAB__text__00210ed0;
  }
  puVar10 = puVar9 + -10;
  bVar2 = FUN__text__0020c9f0(5);
  bVar3 = FUN__text__0020c9f0(6);
  if (*(int *)((long)puVar9 + 0x24) == 0) {
    iVar14 = 0;
    bVar15 = 0;
  }
  else {
    bVar15 = 0;
    iVar14 = 0;
    uVar11 = 0;
    do {
      pcVar7 = (char *)FUN__text__0020beec(puVar10,*(undefined4 *)((long)puVar9 + 0x6c),uVar11);
      if ((*pcVar7 != '\0') &&
         (bVar15 = pcVar7[0x11] | bVar15, (byte)(pcVar7[0x11] & (bVar3 | bVar2)) != 0)) {
        iVar14 = iVar14 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)((long)puVar9 + 0x24));
  }
  bVar2 = FUN__text__0020c9f0(1);
  if (((((bVar2 & bVar15) != 0) || (bVar2 = FUN__text__0020c9f0(4), (bVar2 & bVar15) != 0)) ||
      (bVar2 = FUN__text__0020c9f0(2), (bVar2 & bVar15) != 0)) ||
     (bVar2 = FUN__text__0020c9f0(3), (bVar2 & bVar15) != 0)) {
    local_38 = 0xeeb463a9ecd3f44a;
    FUN__text__005f2d98(*(undefined8 *)(param_1 + 0x80),&local_38,*(undefined8 *)(param_1 + 0x88));
    return;
  }
  uVar12 = 5;
  bVar2 = FUN__text__0020c9f0(5);
  if ((bVar2 & bVar15) == 0) {
    uVar12 = 6;
    bVar2 = FUN__text__0020c9f0(6);
    if ((bVar2 & bVar15) == 0) {
      bVar2 = FUN__text__0020c9f0(7);
      if ((bVar2 & bVar15) == 0) {
        return;
      }
      uVar4 = FUN__text__00210f70(param_1,7);
      lVar8 = FUN__text__0020beec(puVar10,*(undefined4 *)((long)puVar9 + 0x6c),uVar4);
      local_38 = 0xeeb161a9ecd1bb0d;
      bVar1 = *(char *)(lVar8 + 0x10) == '\0';
      uVar12 = 0xeeb160a9ecd1b95a;
      goto LAB__text__00210d80;
    }
  }
  uVar4 = FUN__text__00210f70(param_1,uVar12);
  lVar8 = FUN__text__0020beec(puVar10,*(undefined4 *)((long)puVar9 + 0x6c),uVar4);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    bVar1 = iVar14 == 1;
    uVar12 = 0xeeb15ba9ecd1b0db;
    local_38 = 0xeeb15da9ecd1b441;
  }
  else {
    bVar1 = iVar14 == 1;
    uVar12 = 0xeeb15aa9ecd1af28;
    local_38 = 0xeeb15ca9ecd1b28e;
  }
LAB__text__00210d80:
  if (!bVar1) {
    local_38 = uVar12;
  }
  uVar13 = tpidr_el0;
  uVar13 = uVar13 & 0xffffffffffffe000;
  if (*(long *)(uVar13 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar5 = *(long **)(param_1 + 8);
  uVar4 = *(undefined4 *)(lVar8 + 4);
  *(long **)(uVar13 + *(long *)(uVar13 + 0x98) * 8 + 0x18) = plVar5;
  *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + 1;
  lVar8 = (**(code **)(*plVar5 + 0x10))(plVar5,0xb0,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN__text__003062f4(lVar8,plVar5,uVar4,0,0);
  *(long **)(lVar8 + 8) = plVar5;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0xb0;
  *(undefined8 *)(lVar8 + 0x20) = 8;
  *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + -1;
  local_58 = lVar8;
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
  FUN__text__00165b34(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x648),0,&local_58);
  local_60 = *(long *)(param_1 + 0x88);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_68 = *(long *)(param_1 + 0x80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN__text__001acec4(&local_60,&local_68,&local_38);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}



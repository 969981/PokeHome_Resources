/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00286570; name: FUN_.text__00286570
 */


void FUN__text__00286570(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_88 [5];
  
  if (*(long *)(param_1 + 0x2d0) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x2d0) + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  local_88[0] = -0x589b61f52e7f4fe6;
  local_88[1] = 0x71a942;
  local_88[2] = 0x1b;
  local_88[3] = 0;
  FUN__text__00115650(local_88 + 4,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),local_88,0xb);
  lVar12 = *(long *)(local_88[4] + 0x60);
  if ((lVar12 == 0) || ((**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(), local_88[4] != 0)) {
    (**(code **)(*(long *)(local_88[4] + 0x48) + 0x18))();
    local_88[4] = 0;
  }
  if (local_88[3] != 0) {
    (**(code **)(*(long *)(local_88[3] + 0x48) + 0x18))();
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  local_88[0] = 0x4db7e89b58faa4ec;
  lVar13 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar12,local_88,lVar13);
  uVar6 = FUN__text__005f3244(lVar13);
  FUN__text__0012c9f0(param_1 + 0x110,0x730820,uVar6,0xb);
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  plVar11 = (long *)(lVar12 + 0x48);
  (**(code **)(*plVar11 + 0x18))(plVar11);
  (**(code **)(*plVar11 + 0x18))(plVar11);
  puVar7 = (undefined2 *)
           FUN__text__0027a640(*(undefined8 *)(param_1 + 0x640),*(undefined4 *)(param_1 + 0x970),
                               *(undefined4 *)(param_1 + 0x974),*(undefined1 *)(param_1 + 0x978),
                               *(undefined1 *)(param_1 + 0x979));
  uVar3 = *puVar7;
  lVar12 = 0;
  uVar2 = *(undefined1 *)(puVar7 + 1);
  lVar13 = -0x18;
  do {
    uVar9 = (ulong)((int)lVar13 + *(char *)(param_1 + 0x97a) * 0x18 + 0x18) & 0xffff;
    if (0x13 < uVar9) {
      if (0x17 < ((int)lVar13 + 0x18U & 0xff)) {
        return;
      }
      do {
        lVar13 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar12 + 0x730828);
        lVar12 = lVar12 + 8;
        *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
      } while (lVar12 != 0xc0);
      return;
    }
    iVar4 = *(int *)(uVar9 * 4 + 0x730300);
    lVar8 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar12 + 0x730828);
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
    lVar8 = *(long *)(param_1 + 0x570);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar1 = *(undefined4 *)((long)iVar4 * 4 + 0x730350);
    lVar10 = *(long *)(lVar12 + 0x7308e8);
    uVar6 = 0;
    if ((lVar10 != -0x340d631b7bddd9bb) && (lVar10 != 0)) {
      local_88[0] = lVar10;
      uVar6 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),local_88,0);
    }
    FUN__text__003d5154(lVar8,uVar1,uVar6,0,0);
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    uVar9 = FUN__text__0027cac8(*(undefined8 *)(param_1 + 0x640),uVar3,uVar2,iVar4);
    lVar8 = 0x7309a8;
    if ((uVar9 & 1) == 0) {
      lVar8 = 0x730a68;
    }
    FUN__text__0012c378(param_1 + 0x110,lVar8 + lVar12);
    lVar12 = lVar12 + 8;
    bVar5 = lVar13 != -1;
    lVar13 = lVar13 + 1;
  } while (bVar5);
  return;
}



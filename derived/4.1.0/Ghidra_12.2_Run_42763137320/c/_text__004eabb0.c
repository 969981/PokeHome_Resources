/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eabb0; name: FUN_.text__004eabb0
 */


void FUN__text__004eabb0(long param_1,int param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  int local_1ac;
  long local_1a8;
  ulong local_1a0;
  long local_198;
  undefined1 auStack_190 [264];
  long local_88;
  char local_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar5 + 0x5a) & 0xe) == 0) {
    lVar7 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(lVar5 + 0x68);
    FUN__text__004f6114(auStack_190,lVar5,0);
    if (local_88 != 0) {
      if ((param_3 & 1) == 0) {
        bVar1 = false;
LAB__text__004eac3c:
        iVar3 = 2;
LAB__text__004eac44:
        lVar4 = FUN__text__004f6178(auStack_190,&local_198);
        local_1a8 = 0;
        local_1a0 = 0;
        lVar5 = local_198;
        if (lVar4 != 0) {
          lVar5 = lVar4;
        }
        FUN__text__004f3420(lVar5,&local_1a8);
        if ((int)local_1a0 != 0) {
          lVar5 = 0;
          do {
            if (*(int *)(local_1a8 + lVar5) == param_2) {
              plVar6 = *(long **)(param_1 + 0x40);
              if (plVar6 == (long *)0x0) goto LAB__text__004ead10;
              goto LAB__text__004eace8;
            }
            lVar5 = lVar5 + 0x18;
          } while ((local_1a0 & 0xffffffff) * 0x18 != lVar5);
        }
        lVar5 = 0;
        goto joined_r0x004eadbc;
      }
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),auStack_190,0);
      if (local_88 != 0) {
        bVar1 = true;
        goto LAB__text__004eac3c;
      }
    }
LAB__text__004eae10:
    FUN__text__004f6174(auStack_190);
  }
  return;
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
LAB__text__004eace8:
    if (((int)plVar6[2] == param_2) &&
       (*(long *)(param_1 + 8) - *(long *)(*(long *)(param_1 + 0x10) + 0x68) <=
        (long)(plVar6[3] + (ulong)*(uint *)(plVar6 + 4)))) goto LAB__text__004eae00;
  }
LAB__text__004ead10:
  lVar5 = local_1a8 + lVar5;
  local_1ac = 0;
  lVar4 = FUN__text__004eae50(param_1,*(undefined4 *)(lVar5 + 4),&local_1ac);
  if ((lVar4 == 0) && (*(int *)(lVar5 + 4) != 0)) {
LAB__text__004eae00:
    if (local_1a8 != 0) {
      local_1a0 = local_1a0 & 0xffffffff00000000;
      FUN__text__00400fc0(2);
    }
    goto LAB__text__004eae10;
  }
  local_1bc = *(undefined4 *)(lVar5 + 0xc);
  iVar2 = FUN__text__004f62c0(auStack_190,(lVar7 - lVar8) + (long)local_1ac,
                              *(undefined4 *)(lVar5 + 8),&local_1bc,0,0,&local_1b8);
  if (iVar2 == 1) {
    iVar3 = FUN__text__004eb068(param_1,auStack_190,lVar4,lVar5,local_1b8,local_1ac,!bVar1);
    if (iVar3 != 1) goto LAB__text__004eae00;
  }
  else {
    if (lVar4 != 0) {
      FUN__text__004ec13c(lVar4);
    }
    if (local_68 == '\0') {
      iVar3 = 1;
      if ((*(int *)(lVar5 + 0x14) == 1) && (!bVar1)) {
        (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),auStack_190,0);
        bVar1 = true;
        iVar3 = iVar2;
      }
      goto joined_r0x004eadbc;
    }
  }
  iVar3 = 1;
joined_r0x004eadbc:
  if (local_1a8 != 0) {
    local_1a0 = local_1a0 & 0xffffffff00000000;
    FUN__text__00400fc0(2);
  }
  if (((lVar5 == 0) || (iVar3 == 1)) || (local_88 == 0)) goto LAB__text__004eae10;
  goto LAB__text__004eac44;
}



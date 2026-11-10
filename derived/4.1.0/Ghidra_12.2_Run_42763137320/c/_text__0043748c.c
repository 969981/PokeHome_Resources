/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043748c; name: FUN_.text__0043748c
 */


long FUN__text__0043748c(long *param_1,long *param_2,char *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ushort *local_28;
  
  local_28 = (ushort *)0x0;
  if ((((*param_2 == 0 && (int)param_2[1] == 0) && ((int)param_2[2] == 0)) &&
      ((char)param_2[3] == -1)) && (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
    puVar5 = (ushort *)((long)param_1 + 0x1a);
    if (*(char *)((long)param_1 + 0x1c) == '\0') {
      *puVar5 = 0;
    }
    *param_3 = *(char *)((long)param_1 + 0x1c);
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
    if (*param_3 != '\0') goto LAB__text__00437508;
LAB__text__00437594:
    if (puVar5 == (ushort *)0x0) {
LAB__text__00437650:
      lVar6 = 0;
      goto joined_r0x0043751c;
    }
    uVar3 = *(ushort *)(param_1 + 2);
    uVar7 = (ulong)uVar3;
    if (uVar7 == 0xffff) {
      uVar9 = *(uint *)(param_1 + 1);
      uVar2 = *(uint *)((long)param_1 + 0xc);
      if (uVar9 < uVar2) {
LAB__text__00437600:
        *(uint *)(param_1 + 1) = uVar9 + 1;
        if (*param_1 != 0) {
          puVar8 = (undefined8 *)(*param_1 + (ulong)uVar9 * 0x28);
          *(undefined4 *)(puVar8 + 4) = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *(undefined2 *)(puVar8 + 3) = 0;
          if ((*(uint *)(param_1 + 1) & 0xffff) != 0) {
            uVar9 = *(uint *)(param_1 + 1) - 1;
            uVar7 = (ulong)uVar9 & 0xffff;
            *puVar5 = (ushort)uVar9;
            goto LAB__text__0043750c;
          }
        }
      }
      else {
        iVar1 = uVar2 + (uVar2 >> 1);
        if (uVar2 == 0) {
          iVar1 = 1;
        }
        uVar7 = FUN__text__0043ce10(param_1,iVar1);
        if (((uVar7 & 1) != 0) && (uVar9 < *(uint *)((long)param_1 + 0xc))) {
          uVar9 = *(uint *)(param_1 + 1);
          goto LAB__text__00437600;
        }
      }
      FUN__text__0043b6c0(param_1 + 3,param_2);
      goto LAB__text__00437650;
    }
    lVar6 = *param_1 + uVar7 * 0x28;
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(lVar6 + 0x20);
    *(undefined2 *)(lVar6 + 0x20) = 0xffff;
    *puVar5 = uVar3;
  }
  else {
    if (*(char *)((long)param_1 + 0x1c) != '\0') {
      local_28 = (ushort *)((long)param_1 + 0x1a);
    }
    lVar4 = FUN__text__0043b840(param_1 + 4,*param_2,param_3);
    lVar6 = 0;
    if (lVar4 == 0) goto joined_r0x0043751c;
    puVar5 = (ushort *)FUN__text__0043ba28(lVar4,param_2 + 1,param_3,&local_28);
    if (*param_3 == '\0') goto LAB__text__00437594;
LAB__text__00437508:
    uVar7 = (ulong)*puVar5;
  }
LAB__text__0043750c:
  lVar6 = *param_1 + uVar7 * 0x28;
joined_r0x0043751c:
  if (local_28 != (ushort *)0x0) {
    *param_4 = *param_1 + (ulong)*local_28 * 0x28;
  }
  return lVar6;
}



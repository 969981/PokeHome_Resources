/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043e620; name: FUN_.text__0043e620
 */


int FUN__text__0043e620(long param_1,long param_2,long *param_3,long *param_4,long *param_5,
                       char *param_6,char *param_7)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  long *local_d0;
  char local_c4 [4];
  long local_c0;
  int local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  char local_a8;
  undefined7 uStack_a7;
  char local_a0;
  undefined7 uStack_9f;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  
  *param_6 = '\0';
  *param_7 = '\0';
  pbVar8 = *(byte **)(param_1 + 0x80);
  if (pbVar8 != (byte *)0x0) {
    bVar1 = *pbVar8;
    uVar10 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar10 = 1;
    }
    uVar7 = (ulong)uVar10;
    pbVar9 = pbVar8 + ((ulong)bVar1 & 0xfc);
    do {
      pbVar9 = pbVar9 + 4;
      pbVar8 = pbVar8 + 1;
      if (*pbVar8 == 0) {
        iVar3 = *(int *)pbVar9;
        goto LAB__text__0043e6b0;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  iVar3 = 0;
LAB__text__0043e6b0:
  iVar11 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x10) <= iVar3) {
    iVar11 = iVar3;
  }
  local_a8 = *(char *)((long)param_3 + 9);
  local_a0 = -1;
  if ((*(byte *)(param_3 + 1) - 0x80 < 0x21) &&
     ((1L << ((ulong)(*(byte *)(param_3 + 1) - 0x80) & 0x3f) & 0x100010001U) != 0)) {
    local_a0 = *(char *)((long)param_3 + 0xc);
  }
  local_c0 = *param_3;
  local_b0 = (int)param_3[4];
  local_b8 = *(int *)((long)param_3 + 0x24);
  local_98 = param_3[6];
  if (iVar11 == 0) {
    if (local_98 == 0) {
      iVar11 = 1;
      if (local_a0 != -1) goto LAB__text__0043e72c;
LAB__text__0043e78c:
      local_b0 = 0;
      local_a8 = -1;
      if (iVar11 != 1) goto LAB__text__0043e73c;
LAB__text__0043e7a4:
      local_98 = 0;
      if ((local_a0 == -1) && (local_b8 == 0)) goto joined_r0x0043e7c8;
    }
    else {
      iVar11 = 0;
    }
LAB__text__0043e7e8:
    local_d0 = (long *)0x0;
    lVar4 = local_c0;
    if (((((local_c0 != 0) || (local_b8 != 0)) || (lVar4 = 0, local_b0 != 0)) ||
        ((local_a8 != -1 || (lVar4 = 0, local_a0 != -1)))) || (local_98 != 0))
    goto LAB__text__0043e83c;
    local_c4[0] = *(char *)(param_1 + 0x68);
    plVar5 = (long *)(param_1 + 0x60);
    if (local_c4[0] == '\0') {
      *plVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  else {
    if (iVar11 < 1) goto LAB__text__0043e7e8;
    if (local_a0 == -1) goto LAB__text__0043e78c;
LAB__text__0043e72c:
    local_b8 = 0;
    if (iVar11 == 1) goto LAB__text__0043e7a4;
LAB__text__0043e73c:
    if (iVar11 != 2) {
LAB__text__0043e7d0:
      local_98 = 0;
      local_a0 = -1;
      local_a8 = -1;
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = 0;
      goto LAB__text__0043e7e8;
    }
joined_r0x0043e7c8:
    if (local_c0 == 0) {
      iVar11 = 3;
      goto LAB__text__0043e7d0;
    }
    local_98 = 0;
    local_a0 = -1;
    local_a8 = -1;
    local_b0 = 0;
    local_b8 = 0;
    iVar11 = 2;
    lVar4 = local_c0;
LAB__text__0043e83c:
    local_c4[0] = '\0';
    local_d0 = (long *)0x0;
    if (*(char *)(param_1 + 0x68) != '\0') {
      local_d0 = (long *)(param_1 + 0x60);
    }
    lVar4 = FUN__text__00441750(param_1 + 0x70,lVar4,local_c4);
    if ((lVar4 == 0) ||
       (plVar5 = (long *)FUN__text__00441958(lVar4,&local_b8,local_c4,&local_d0),
       plVar5 == (long *)0x0)) {
      FUN__text__0043ec20(param_1 + 0x58,&local_c0);
      return 0x34;
    }
  }
  lVar4 = FUN__text__0043eae8(param_1,*plVar5,param_3,param_2,iVar11,&local_c0,param_6,param_7);
  if (lVar4 == 0) {
    if (*plVar5 == 0) {
      FUN__text__0043ec20(param_1 + 0x58,&local_c0);
    }
    *param_5 = 0;
    return 2;
  }
  if (*plVar5 != lVar4) {
    *(int *)(lVar4 + 0xbc) = *(int *)(lVar4 + 0xbc) + 1;
    plVar12 = (long *)*plVar5;
    if ((plVar12 != (long *)0x0) &&
       (iVar3 = *(int *)((long)plVar12 + 0xbc) + -1, *(int *)((long)plVar12 + 0xbc) = iVar3,
       iVar3 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN__text__00400fc0(0,plVar12);
    }
    *plVar5 = lVar4;
  }
  if (param_4 == (long *)0x0) {
LAB__text__0043e944:
    iVar3 = 1;
  }
  else {
    lVar6 = *param_4;
    if (lVar6 == 0) {
      FUN__text__00458de0(param_4);
      lVar6 = *param_4;
      if (lVar6 == 0) {
        iVar3 = 2;
        *param_5 = lVar4;
        cVar2 = *param_6;
        goto joined_r0x0043e950;
      }
    }
    iVar3 = FUN__text__00458600(lVar6,lVar4,param_3,param_2);
    if (iVar3 == 1) {
      if (((int)param_4[1] != -1) && (*param_4 != 0)) {
        FUN__text__004587a0();
      }
      goto LAB__text__0043e944;
    }
  }
  *param_5 = lVar4;
  cVar2 = *param_6;
joined_r0x0043e950:
  if (cVar2 != '\0') {
    if ((local_d0 == (long *)0x0) || (*local_d0 == 0)) {
      param_1 = param_1 + 0x18;
    }
    else {
      param_1 = *local_d0 + 0x48;
    }
    local_80 = CONCAT44(uStack_ac,local_b0);
    uStack_78 = CONCAT71(uStack_a7,local_a8);
    local_70 = CONCAT71(uStack_9f,local_a0);
    uStack_88 = CONCAT44(uStack_b4,local_b8);
    local_90 = local_c0;
    lStack_68 = local_98;
    FUN__text__00438210(param_1,*plVar5 + 0x48,&local_90);
  }
  if (*param_7 != '\0') {
    FUN__text__004444e4(lVar4);
  }
  return iVar3;
}



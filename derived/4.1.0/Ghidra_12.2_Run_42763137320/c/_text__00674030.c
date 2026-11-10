/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00674030; name: FUN_.text__00674030
 */


undefined8
FUN__text__00674030(char *param_1,char *param_2,undefined4 param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long local_1a8 [8];
  undefined2 local_168;
  undefined2 local_166;
  undefined4 local_164;
  char local_160;
  char acStack_15f [255];
  long *local_48;
  
  uVar8 = *param_5;
  iVar4 = *(int *)(param_5 + 0x27);
  uVar2 = *(undefined4 *)((long)param_5 + (long)param_4 * 4 + 600);
  iVar3 = FUN__text__0064fa18(uVar8,0,1);
  if (iVar3 < 0) {
    FUN__text__0066713c(uVar8,0x70dddb);
    return 0x1c;
  }
  if ((*(byte *)((long)param_5 + 0x3fc) >> 5 & 1) != 0) {
    uVar7 = 0x70d60e;
    if (iVar4 != 6) {
      uVar7 = 0x70f683;
    }
    FUN__text__00666f74(*param_5,0x71bd8c,uVar7,param_2,param_3);
  }
  memset(&local_164,0,0x102);
  FUN__text__0066526c(uVar2,0);
  FUN__text__00666f74(uVar8,0x71ebf5,param_2,param_3);
  local_168 = 0x104;
  local_166 = CONCAT11((char)param_3,(char)((uint)param_3 >> 8));
  if (iVar4 != 6) {
    local_48 = (long *)0x0;
    iVar3 = FUN__text__00654998(param_5,param_2,param_3,&local_48);
    if (iVar3 == -1) {
      return 5;
    }
    if (iVar3 == 1) {
      FUN__text__0064f420(param_5,&local_48);
    }
    if ((local_48 == (long *)0x0) || (lVar9 = *local_48, lVar9 == 0)) {
LAB__text__0067436c:
      FUN__text__0066713c(uVar8,0x71fa45,param_2);
      return 6;
    }
    local_1a8[6] = 0;
    local_1a8[7] = 0;
    local_1a8[4] = 0;
    local_1a8[5] = 0;
    local_1a8[2] = 0;
    local_1a8[3] = 0;
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    FUN__text__006544e8(lVar9,local_1a8,0x40);
    if (*(int *)(lVar9 + 4) != 2) {
      FUN__text__0066713c(uVar8,0x71b1f0,local_1a8);
      FUN__text__00654bac(uVar8,local_48);
      goto LAB__text__0067436c;
    }
    local_164 = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 4);
    FUN__text__00666f74(uVar8,0x71bdbb,local_1a8);
    FUN__text__00654bac(uVar8,local_48);
  }
  local_160 = '\0';
  if (param_1 != (char *)0x0) {
    sVar5 = strlen(param_1);
    if (0xfd < sVar5) {
      uVar7 = 0x721391;
      goto LAB__text__0067433c;
    }
    memcpy(&local_160,param_1,sVar5 + 1);
  }
  local_1a8[0] = 0;
  local_48 = (long *)0x0;
  sVar5 = strlen(&local_160);
  lVar9 = 0;
  if (iVar4 == 6) {
    local_164 = 0x1000000;
    sVar6 = strlen(param_2);
    lVar9 = sVar6 + 1;
    if ((long)(lVar9 + sVar5 + 9) < 0x107) {
      strcpy(acStack_15f + sVar5,param_2);
    }
    else {
      lVar9 = 0;
    }
  }
  plVar1 = (long *)(lVar9 + sVar5 + 9);
  iVar3 = FUN__text__00667384(param_5,uVar2,&local_168,plVar1,&local_48);
  if ((iVar3 == 0) && (local_48 == plVar1)) {
    if ((iVar4 == 6) && (lVar9 == 0)) {
      sVar5 = strlen(param_2);
      iVar4 = FUN__text__00667384(param_5,uVar2,param_2,(long *)(sVar5 + 1),&local_48);
      if ((iVar4 != 0) || (local_48 != (long *)(sVar5 + 1))) goto LAB__text__00674328;
    }
    iVar4 = FUN__text__00673f40(param_5,uVar2,&local_168,8,local_1a8);
    if ((iVar4 == 0) && (local_1a8[0] == 8)) {
      if ((char)local_168 == '\0') {
        if (local_168._1_1_ - 0x5a < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006743c0 */
                    /* WARNING: Treating indirect jump as call */
          uVar8 = (*(code *)(&UNK__text__006743cc +
                            (ulong)*(byte *)((ulong)(local_168._1_1_ - 0x5a) + 0x760d38) * 4))();
          return uVar8;
        }
        FUN__text__0066713c(uVar8,0x716f79,(undefined1)local_164,local_164._1_1_,local_164._2_1_,
                            local_164._3_1_,local_166 >> 8 | local_166 << 8);
        return 7;
      }
      uVar7 = 0x70bd9a;
    }
    else {
      uVar7 = 0x7136d1;
    }
  }
  else {
LAB__text__00674328:
    uVar7 = 0x7213b8;
  }
LAB__text__0067433c:
  FUN__text__0066713c(uVar8,uVar7);
  return 7;
}



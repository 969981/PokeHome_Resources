/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067378c; name: FUN_.text__0067378c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0067378c(long param_1,long param_2,byte *param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  size_t sVar10;
  byte *__s;
  byte *pbVar11;
  byte *pbVar12;
  char *local_68;
  char *local_60;
  long local_58;
  
  local_58 = 0;
  local_60 = (char *)0x0;
  pcVar6 = strstr((char *)param_3,(char *)0x7177e4);
  if (pcVar6 == (char *)0x0) {
    pbVar12 = param_3;
LAB__text__006737fc:
    bVar4 = param_4 == 2;
    if ((bVar4) && ((*(uint *)(_DAT_008b4668 + 0x10) >> 4 & 1) == 0)) {
      FUN__text__0066713c(param_1,0x71e05d,param_3);
      return 4;
    }
  }
  else {
    pbVar12 = (byte *)(pcVar6 + 3);
    iVar5 = thunk_FUN__text__0066c2d8(0x7205eb,param_3,5);
    if (iVar5 != 0) {
      param_4 = 2;
      goto LAB__text__006737fc;
    }
    iVar5 = thunk_FUN__text__0066c2d8(0x70bd92,param_3,7);
    if (iVar5 == 0) {
      iVar5 = thunk_FUN__text__0066c2d8(0x71bd45,param_3,6);
      if (iVar5 == 0) {
        iVar5 = thunk_FUN__text__0066c2d8(0x719a6a,param_3,7);
        if (iVar5 == 0) {
          iVar5 = thunk_FUN__text__0066c2d8(0x71c7ed,param_3,6);
          if ((iVar5 == 0) && (iVar5 = thunk_FUN__text__0066c2d8(0x7177e8,param_3,5), iVar5 == 0)) {
            iVar5 = thunk_FUN__text__0066c2d8(0x716f57,param_3,5);
            if (iVar5 == 0) {
              FUN__text__0066713c(param_1,0x719a72,param_3);
              return 7;
            }
            goto LAB__text__006737fc;
          }
          bVar4 = false;
          param_4 = 4;
        }
        else {
          bVar4 = false;
          param_4 = 6;
        }
      }
      else {
        bVar4 = false;
        param_4 = 5;
      }
    }
    else {
      bVar4 = false;
      param_4 = 7;
    }
  }
  pcVar6 = strchr((char *)pbVar12,0x40);
  if (pcVar6 != (char *)0x0) {
    uVar7 = FUN__text__00670b64(pbVar12,(long)pcVar6 - (long)pbVar12,&local_58,&local_60,0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    pbVar12 = (byte *)(pcVar6 + 1);
  }
  __s = pbVar12;
  if (*pbVar12 == 0x5b) {
    __s = pbVar12 + 1;
    pbVar11 = __s;
    if (*__s != 0) {
      pbVar12 = pbVar12 + 2;
      do {
        pbVar11 = pbVar12;
        iVar5 = FUN__text__00656878();
        if (((iVar5 == 0) && (bVar3 = pbVar11[-1], bVar3 != 0x2e)) && (bVar3 != 0x3a)) {
          if (bVar3 != 0x25) {
            pbVar11 = pbVar11 + -1;
            goto LAB__text__00673c18;
          }
          iVar5 = strncmp((char *)0x70f308,(char *)(pbVar11 + -1),3);
          if (iVar5 != 0) {
            FUN__text__00666f74(param_1,0x70ca62);
          }
          bVar3 = *pbVar11;
          goto joined_r0x00673bd0;
        }
        pbVar12 = pbVar11 + 1;
      } while (*pbVar11 != 0);
    }
    goto LAB__text__00673958;
  }
  goto LAB__text__0067396c;
joined_r0x00673bd0:
  if (bVar3 == 0) goto LAB__text__00673958;
  iVar5 = FUN__text__006568cc();
  if ((iVar5 == 0) && (iVar5 = FUN__text__00656878(*pbVar11), iVar5 == 0)) {
    bVar3 = *pbVar11;
    if ((1 < bVar3 - 0x2d) && ((bVar3 != 0x7e && (bVar3 != 0x5f)))) goto LAB__text__00673c18;
  }
  pbVar11 = pbVar11 + 1;
  bVar3 = *pbVar11;
  goto joined_r0x00673bd0;
LAB__text__00673c18:
  if (bVar3 == 0x5d) {
    pbVar12 = pbVar11 + 1;
    *pbVar11 = 0;
  }
  else {
LAB__text__00673958:
    FUN__text__00666f74(param_1,0x71572e);
    pbVar12 = pbVar11;
  }
LAB__text__0067396c:
  pcVar6 = strchr((char *)pbVar12,0x3a);
  if (pcVar6 == (char *)0x0) {
    if (*__s == 0x2f) {
      FUN__text__006783e4(local_58);
      local_58 = 0;
      FUN__text__006783e4(local_60);
      return 5;
    }
    pcVar6 = strchr((char *)__s,0x2f);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
    }
    uVar8 = 0x1bb;
    if (!bVar4) {
      uVar8 = 0x438;
    }
    if (*(ulong *)(param_1 + 0x680) != 0) {
      uVar8 = *(ulong *)(param_1 + 0x680);
    }
  }
  else {
    local_68 = (char *)0x0;
    *pcVar6 = '\0';
    uVar8 = strtol(pcVar6 + 1,&local_68,10);
    if (((local_68 == (char *)0x0) || (cVar2 = *local_68, cVar2 == '\0')) || (cVar2 == '/')) {
      if (uVar8 < 0x10000) goto LAB__text__00673a44;
    }
    else if (((cVar2 == ' ') && (-1 < (long)uVar8)) && ((long)uVar8 < 0x10000)) {
LAB__text__00673a44:
      *(ulong *)(param_2 + 400) = uVar8;
      goto LAB__text__00673a48;
    }
    FUN__text__00666f74(param_1,0x71b186,pcVar6 + 1);
  }
LAB__text__00673a48:
  if (*__s == 0) {
LAB__text__00673b5c:
    FUN__text__006783e4(local_58);
    local_58 = 0;
    FUN__text__006783e4(local_60);
    uVar7 = 0;
  }
  else {
    plVar1 = (long *)(param_2 + 0x110);
    if ((param_4 & 0xfffffffc) != 4) {
      plVar1 = (long *)(param_2 + 0x150);
    }
    *(uint *)(plVar1 + 5) = param_4;
    if (local_58 == 0) {
LAB__text__00673b14:
      if ((-1 < (long)uVar8) &&
         (((plVar1[4] = uVar8, (param_4 & 0xfffffffc) == 4 || (*(long *)(param_2 + 400) < 0)) ||
          (*(long *)(param_2 + 0x110) == 0)))) {
        *(ulong *)(param_2 + 400) = uVar8;
      }
      FUN__text__006783e4(*plVar1);
      *plVar1 = 0;
      lVar9 = FUN__text__00678404(__s);
      *plVar1 = lVar9;
      plVar1[2] = lVar9;
      if (lVar9 != 0) goto LAB__text__00673b5c;
    }
    else {
      FUN__text__006783e4(plVar1[6]);
      plVar1[6] = 0;
      lVar9 = FUN__text__0066fa80(param_1,local_58,0,0);
      plVar1[6] = lVar9;
      FUN__text__006783e4(local_58);
      local_58 = 0;
      if (plVar1[6] == 0) {
        FUN__text__006783e4(local_60);
      }
      else {
        FUN__text__006783e4(plVar1[7]);
        pcVar6 = local_60;
        plVar1[7] = 0;
        if ((local_60 == (char *)0x0) || (sVar10 = strlen(local_60), 0xff < sVar10)) {
          lVar9 = FUN__text__00678404(0x70f683);
        }
        else {
          lVar9 = FUN__text__0066fa80(param_1,pcVar6,0,0);
        }
        plVar1[7] = lVar9;
        FUN__text__006783e4(local_60);
        local_60 = (char *)0x0;
        if (plVar1[7] != 0) {
          *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) | 0x100;
          goto LAB__text__00673b14;
        }
      }
    }
    uVar7 = 0x1b;
  }
  return uVar7;
}



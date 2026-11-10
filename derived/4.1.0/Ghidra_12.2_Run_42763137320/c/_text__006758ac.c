/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006758ac; name: FUN_.text__006758ac
 */


undefined4 FUN__text__006758ac(char *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  bool bVar10;
  char *pcVar11;
  undefined8 local_578;
  undefined1 auStack_570 [1024];
  undefined1 auStack_170 [256];
  char *local_70 [2];
  
  lVar9 = *param_2;
  local_70[0] = param_1;
  FUN__text__00675c9c(param_2);
  bVar10 = false;
  bVar2 = false;
LAB__text__00675918:
  do {
    memset(auStack_170,0,0x100);
    memset(auStack_570,0,0x400);
    cVar1 = *param_1;
    while ((cVar1 != '\0' && (iVar3 = FUN__text__0065680c(), iVar3 != 0))) {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    local_70[0] = param_1;
    uVar4 = FUN__text__006757a4(param_1,auStack_170,auStack_570,local_70);
    if ((uVar4 & 1) == 0) {
      if ((lVar9 != 0) && ((*(byte *)((long)param_2 + 0x3c) & 1) == 0)) {
        return 0x3d;
      }
      uVar8 = 0x3d;
      if (*param_2 != 0) {
        uVar8 = 0;
      }
      return uVar8;
    }
    iVar3 = FUN__text__0066c234(auStack_170,0x711545);
    if (iVar3 != 0) {
      FUN__text__006783e4(*param_2);
      lVar5 = FUN__text__00678404(auStack_570);
      *param_2 = lVar5;
joined_r0x00675b84:
      if (lVar5 == 0) {
        return 0x1b;
      }
      goto LAB__text__00675994;
    }
    iVar3 = FUN__text__0066c234(auStack_170,0x71be08);
    if (iVar3 != 0) {
      iVar3 = FUN__text__0066c234(auStack_570,0x714725);
      if (iVar3 != 0) {
        *(byte *)((long)param_2 + 0x3c) = *(byte *)((long)param_2 + 0x3c) | 1;
        *(undefined4 *)(param_2 + 7) = 1;
      }
      goto LAB__text__00675994;
    }
    iVar3 = FUN__text__0066c234(auStack_170,0x71b21c);
    if (iVar3 == 0) {
      iVar3 = FUN__text__0066c234(auStack_170,0x714b4d);
      if (iVar3 != 0) {
        FUN__text__006783e4(param_2[4]);
        lVar5 = FUN__text__00678404(auStack_570);
        param_2[4] = lVar5;
        goto joined_r0x00675a70;
      }
      iVar3 = FUN__text__0066c234(auStack_170,0x720868);
      if (iVar3 != 0) {
        local_578 = 0;
        lVar5 = FUN__text__00678404(auStack_570);
        if (lVar5 == 0) {
          return 0x1b;
        }
        lVar6 = FUN__text__0066c54c(lVar5,0x7121b9,&local_578);
        if (lVar6 != 0) {
          do {
            iVar3 = FUN__text__0066c234(lVar6,0x71d590);
            if (iVar3 == 0) {
              iVar3 = FUN__text__0066c234(lVar6,0x71574b);
              bVar2 = (bool)(iVar3 != 0 | bVar2);
            }
            else {
              bVar10 = true;
            }
            lVar6 = FUN__text__0066c54c(0,0x7121b9,&local_578);
          } while (lVar6 != 0);
        }
        FUN__text__006783e4(lVar5);
        if (bVar10) {
          FUN__text__006783e4(param_2[5]);
          uVar7 = 0x71d590;
        }
        else {
          if (!bVar2) goto LAB__text__00675994;
          FUN__text__006783e4(param_2[5]);
          uVar7 = 0x71574b;
        }
        lVar5 = FUN__text__00678404(uVar7);
        param_2[5] = lVar5;
        goto joined_r0x00675b84;
      }
      iVar3 = FUN__text__0066c234(auStack_170,0x71facc);
      if (iVar3 == 0) {
        iVar3 = FUN__text__0066c234(auStack_170,0x711557);
        if ((iVar3 != 0) && (iVar3 = FUN__text__0066c234(auStack_570,0x714725), iVar3 != 0)) {
          *(byte *)((long)param_2 + 0x3c) = *(byte *)((long)param_2 + 0x3c) | 2;
        }
      }
      else {
        FUN__text__006783e4(param_2[6]);
        lVar5 = FUN__text__00678404(auStack_570);
        param_2[6] = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        iVar3 = FUN__text__0066c234(auStack_570,0x71b222);
        if (iVar3 == 0) {
          iVar3 = FUN__text__0066c234(auStack_570,0x71ec1d);
          if (iVar3 != 0) {
            *(undefined4 *)(param_2 + 3) = 0;
            goto LAB__text__00675994;
          }
          iVar3 = FUN__text__0066c234(auStack_570,0x7121bb);
          if (iVar3 == 0) {
            iVar3 = FUN__text__0066c234(auStack_570,0x7136ff);
            if (iVar3 == 0) {
              iVar3 = FUN__text__0066c234(auStack_570,0x71154b);
              if (iVar3 == 0) {
                iVar3 = FUN__text__0066c234(auStack_570,0x70fe5c);
                if (iVar3 == 0) {
                  return 0x3d;
                }
                uVar8 = 5;
              }
              else {
                uVar8 = 4;
              }
            }
            else {
              uVar8 = 3;
            }
          }
          else {
            uVar8 = 2;
          }
        }
        else {
          uVar8 = 1;
        }
        *(undefined4 *)(param_2 + 3) = uVar8;
      }
    }
    else {
      FUN__text__006783e4(param_2[2]);
      lVar5 = FUN__text__00678404(auStack_570);
      param_2[2] = lVar5;
joined_r0x00675a70:
      if (lVar5 == 0) {
        return 0x1b;
      }
    }
LAB__text__00675994:
    pcVar11 = local_70[0];
    param_1 = local_70[0];
    if (*local_70[0] != '\0') {
      do {
        pcVar11 = param_1 + 1;
        iVar3 = FUN__text__0065680c();
        if (iVar3 == 0) {
          local_70[0] = param_1;
          if (*param_1 == ',') {
            param_1 = pcVar11;
            local_70[0] = pcVar11;
          }
          goto LAB__text__00675918;
        }
        param_1 = pcVar11;
      } while (*pcVar11 != '\0');
    }
    param_1 = pcVar11;
    local_70[0] = pcVar11;
  } while( true );
}



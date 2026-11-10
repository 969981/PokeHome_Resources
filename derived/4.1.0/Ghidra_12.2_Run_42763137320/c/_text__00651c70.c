/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00651c70; name: FUN_.text__00651c70
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN__text__00651c70(undefined8 param_1,long param_2,ulong param_3,uint param_4,char *param_5,
                   char *param_6,char *param_7,uint param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  char *pcVar11;
  size_t sVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  void *__dest;
  char *pcVar17;
  byte bVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 *__dest_00;
  bool bVar21;
  char *__s2;
  undefined4 local_2074;
  char local_2070 [4096];
  undefined8 local_1070;
  undefined4 local_6c [3];
  
  local_2074 = param_8;
  uVar8 = FUN__text__00679878(0);
  puVar9 = (undefined8 *)FUN__text__00678414(1,0x68);
  if (puVar9 == (void *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((param_3 & 1) == 0) {
    local_1070 = 0;
    iVar6 = strncmp(param_5,(char *)0x718d5d,10);
    if (iVar6 == 0) {
      param_5 = param_5 + 10;
      *(undefined1 *)((long)puVar9 + 0x5a) = 1;
    }
    if (*param_5 == '#') goto LAB__text__00651d80;
    pcVar11 = strchr(param_5,0xd);
    if (pcVar11 != (char *)0x0) {
      *pcVar11 = '\0';
    }
    pcVar11 = strchr(param_5,10);
    if (pcVar11 != (char *)0x0) {
      *pcVar11 = '\0';
    }
    lVar16 = FUN__text__0066c54c(param_5,0x714933,&local_1070);
    if (lVar16 == 0) goto LAB__text__00652538;
    uVar19 = 0;
    bVar5 = false;
    do {
      if (uVar19 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00652250 */
                    /* WARNING: Treating indirect jump as call */
        puVar9 = (undefined8 *)
                 (*(code *)(&UNK__text__0065225c + (ulong)*(byte *)((ulong)uVar19 + 0x76002c) * 4))
                           ();
        return puVar9;
      }
      lVar16 = FUN__text__0066c54c(0,0x714933,&local_1070);
      uVar19 = uVar19 + 1;
    } while (lVar16 != 0);
    if (uVar19 == 6) {
      lVar16 = FUN__text__00678404(0x70f683);
      bVar5 = lVar16 == 0;
      puVar9[2] = lVar16;
      uVar19 = 6;
      if (!bVar5) {
        uVar19 = 7;
      }
    }
    if ((bVar5) || (uVar19 != 7)) goto LAB__text__00652538;
  }
  else {
    memset(&local_1070,0,0x1000);
    memset(local_2070,0,0x1000);
    sVar10 = strlen(param_5);
    if (5000 < sVar10) {
LAB__text__00651d80:
      FUN__text__006783e4(puVar9);
      return (undefined8 *)0x0;
    }
    pcVar11 = strchr(param_5,0x3b);
    for (; (*param_5 == '\t' || (*param_5 == ' ')); param_5 = param_5 + 1) {
    }
    bVar5 = false;
LAB__text__00651d9c:
    local_2070[0] = '\0';
    local_1070 = local_1070 & 0xffffffffffffff00;
    iVar6 = sscanf(param_5,(char *)0x711fa5,&local_1070,local_2070);
    if (iVar6 < 1) {
LAB__text__00652000:
      bVar21 = bVar5;
      if ((pcVar11 == (char *)0x0) || (param_5 = pcVar11, *pcVar11 == '\0'))
      goto LAB__text__00652488;
      do {
        param_5 = param_5 + 1;
        cVar3 = *param_5;
      } while (cVar3 == ' ' || cVar3 == '\t');
      pcVar11 = strchr(param_5,0x3b);
      bVar5 = bVar21;
      if (pcVar11 == (char *)0x0) {
        if (cVar3 == '\0') goto LAB__text__00652488;
        sVar10 = strlen(param_5);
        pcVar11 = param_5 + sVar10;
      }
      goto LAB__text__00651d9c;
    }
    sVar10 = strlen(local_2070);
    sVar12 = strlen((char *)&local_1070);
    if (((0xffe < sVar12) || (0xffe < sVar10)) || (0x1000 < sVar12 + sVar10)) {
      FUN__text__00652864(puVar9);
      FUN__text__00666f74(param_1,0x70e856,sVar12,sVar10);
      return (undefined8 *)0x0;
    }
    cVar3 = param_5[sVar12];
    if ((sVar12 != 0) && ((cVar4 = (param_5 + sVar12)[-1], cVar4 == ' ' || (cVar4 == '\t')))) {
      for (; ((cVar4 == ' ' || ((cVar4 != '\0' && (cVar4 == '\t')))) && (sVar12 != 0));
          sVar12 = sVar12 - 1) {
        cVar4 = param_5[sVar12 - 2];
      }
      local_2070[sVar12 + 0x1000] = '\0';
    }
    for (; sVar10 != 0; sVar10 = sVar10 - 1) {
      if (local_2070[sVar10 - 1] != ' ' && local_2070[sVar10 - 1] != '\t') {
        bVar21 = false;
        goto LAB__text__00651e84;
      }
      local_2070[sVar10 - 1] = '\0';
    }
    bVar21 = true;
LAB__text__00651e84:
    for (pcVar17 = local_2070; *pcVar17 == ' ' || *pcVar17 == '\t'; pcVar17 = pcVar17 + 1) {
    }
    if (((3 < sVar12) && ((char)local_1070 == '_')) && (local_1070._1_1_ == '_')) {
      iVar6 = FUN__text__0066c2d8(0x71f7d4,&local_1070,9);
      if (iVar6 == 0) {
        iVar6 = FUN__text__0066c2d8(0x71c52f,&local_1070,7);
        if (iVar6 == 0) goto LAB__text__00651f10;
        bVar18 = 2;
      }
      else {
        bVar18 = 1;
      }
      *(byte *)(puVar9 + 0xc) = *(byte *)(puVar9 + 0xc) | bVar18;
    }
LAB__text__00651f10:
    if (puVar9[1] != 0) {
      if (bVar21) {
        iVar6 = FUN__text__0066c234(0x70e88a,&local_1070);
        if (iVar6 == 0) {
          iVar6 = FUN__text__0066c234(0x71c537,&local_1070);
          if (iVar6 == 0) {
            if (cVar3 == '=') goto LAB__text__00651fb8;
          }
          else {
            *(undefined1 *)((long)puVar9 + 0x5a) = 1;
          }
        }
        else {
          if (((local_2074 & 1) == 0) && (*(char *)(param_2 + 0x808) != '\0'))
          goto LAB__text__00652484;
          *(undefined1 *)(puVar9 + 0xb) = 1;
        }
      }
      else {
LAB__text__00651fb8:
        iVar6 = FUN__text__0066c234(0x718d58,&local_1070);
        if (iVar6 == 0) {
          iVar6 = FUN__text__0066c234(0x715445,&local_1070);
          if (iVar6 == 0) {
            iVar6 = FUN__text__0066c234(0x71544c,&local_1070);
            if (iVar6 != 0) {
              FUN__text__006783e4(puVar9[9]);
              lVar16 = FUN__text__00678404(pcVar17);
              puVar9[9] = lVar16;
              goto LAB__text__00651ffc;
            }
            iVar6 = FUN__text__0066c234(0x71a406,&local_1070);
            if (iVar6 == 0) {
              iVar6 = FUN__text__0066c234(0x71d2e7,&local_1070);
              if (iVar6 != 0) {
                FUN__text__006783e4(puVar9[7]);
                lVar16 = FUN__text__00678404(pcVar17);
                puVar9[7] = lVar16;
                goto LAB__text__00651ffc;
              }
            }
            else {
              FUN__text__006783e4(puVar9[10]);
              lVar16 = FUN__text__00678404(pcVar17);
              puVar9[10] = lVar16;
              if (lVar16 == 0) {
                bVar21 = true;
                goto LAB__text__00652500;
              }
            }
          }
          else {
            if (*pcVar17 == '.') {
              pcVar17 = pcVar17 + 1;
            }
            pcVar14 = strchr(pcVar17,0x2e);
            __s2 = param_6;
            if (pcVar14 == (char *)0x0) {
              iVar6 = FUN__text__0066c234(pcVar17,0x711212);
              __s2 = (char *)0x7161d9;
              if (iVar6 != 0) {
                __s2 = param_6;
              }
            }
            local_6c[0] = 0;
            pcVar14 = pcVar17;
            if (__s2 != (char *)0x0) {
              pcVar14 = __s2;
            }
            iVar6 = FUN__text__006569e8(2,pcVar14,local_6c);
            param_6 = __s2;
            if (__s2 == (char *)0x0) {
LAB__text__00652134:
              FUN__text__006783e4(puVar9[5]);
              lVar16 = FUN__text__00678404(pcVar17);
              puVar9[5] = lVar16;
              if ((lVar16 == 0) || (iVar6 != 0)) goto LAB__text__00651ffc;
              *(undefined1 *)(puVar9 + 8) = 1;
            }
            else {
              if (iVar6 == 0) {
                uVar15 = FUN__text__00652984();
                if ((uVar15 & 1) != 0) goto LAB__text__00652134;
              }
              else {
                iVar7 = strcmp(pcVar17,__s2);
                if (iVar7 == 0) goto LAB__text__00652134;
              }
              FUN__text__00666f74(param_1,0x71c540,pcVar17);
              bVar5 = true;
            }
          }
        }
        else {
          FUN__text__006783e4(puVar9[3]);
          lVar16 = FUN__text__00678404(pcVar17);
          puVar9[3] = lVar16;
          if (lVar16 == 0) goto LAB__text__00652484;
          FUN__text__006783e4(puVar9[4]);
          lVar16 = FUN__text__006528c4(puVar9[3]);
          puVar9[4] = lVar16;
LAB__text__00651ffc:
          if (lVar16 == 0) goto LAB__text__00652484;
        }
      }
      goto LAB__text__00652000;
    }
    if (cVar3 == '=') {
      uVar13 = FUN__text__00678404(&local_1070);
      puVar9[1] = uVar13;
      lVar16 = FUN__text__00678404(pcVar17);
      bVar21 = true;
      puVar9[2] = lVar16;
      if ((puVar9[1] == 0) || (lVar16 == 0)) goto LAB__text__00652488;
      goto LAB__text__00652000;
    }
LAB__text__00652484:
    bVar21 = true;
LAB__text__00652488:
    pcVar11 = (char *)puVar9[10];
    if (pcVar11 == (char *)0x0) {
LAB__text__00652500:
      if (puVar9[7] != 0) {
        lVar16 = FUN__text__00665284(puVar9[7],0);
        puVar9[6] = lVar16;
        if (lVar16 == 0) {
          puVar9[6] = 1;
        }
        else if (lVar16 < 0) {
          puVar9[6] = 0;
        }
      }
    }
    else {
      plVar1 = puVar9 + 6;
      if (*pcVar11 == '\"') {
        pcVar11 = pcVar11 + 1;
      }
      iVar6 = FUN__text__0066c5d8(pcVar11,0,10,plVar1);
      if (iVar6 == 0) {
        lVar16 = *plVar1;
        if (lVar16 == 0) {
          lVar16 = 1;
        }
        else {
          if ((long)(uVar8 ^ 0x7fffffffffffffff) < lVar16) goto LAB__text__006524e0;
          lVar16 = lVar16 + uVar8;
        }
      }
      else {
        if (iVar6 != 1) goto LAB__text__00652534;
LAB__text__006524e0:
        lVar16 = 0x7fffffffffffffff;
      }
      *plVar1 = lVar16;
    }
LAB__text__00652534:
    if (bVar21) goto LAB__text__00652538;
    if ((puVar9[5] == 0) && (param_6 != (char *)0x0)) {
      lVar16 = FUN__text__00678404(param_6);
      puVar9[5] = lVar16;
      if (lVar16 == 0) goto LAB__text__00652538;
    }
    if ((param_7 != (char *)0x0) && (puVar9[3] == 0)) {
      pcVar11 = strchr(param_7,0x3f);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = strrchr(param_7,0x2f);
      }
      else {
        pcVar11 = (char *)FUN__text__006535c4(param_7,0x2f,(long)pcVar11 - (long)param_7);
      }
      if (pcVar11 != (char *)0x0) {
        __dest = (void *)FUN__text__006783d4(pcVar11 + (2 - (long)param_7));
        puVar9[3] = __dest;
        if (__dest == (void *)0x0) goto LAB__text__00652538;
        memcpy(__dest,param_7,(size_t)(pcVar11 + (1 - (long)param_7)));
        (pcVar11 + (1 - (long)param_7))[puVar9[3]] = '\0';
        lVar16 = FUN__text__006528c4(puVar9[3]);
        puVar9[4] = lVar16;
        if (lVar16 == 0) goto LAB__text__00652538;
      }
    }
    if (puVar9[1] == 0) goto LAB__text__00652538;
  }
  if (((((*(byte *)(puVar9 + 0xc) & 1) == 0) || (*(char *)(puVar9 + 0xb) != '\0')) &&
      (((*(byte *)(puVar9 + 0xc) >> 1 & 1) == 0 ||
       ((((*(char *)(puVar9 + 0xb) != '\0' && ((char *)puVar9[3] != (char *)0x0)) &&
         (iVar6 = strcmp((char *)puVar9[3],(char *)0x70eff8), iVar6 == 0)) &&
        (*(char *)(puVar9 + 8) == '\0')))))) &&
     (((*(char *)(param_2 + 0x808) != '\0' || (*(char *)(param_2 + 0x818) == '\0')) ||
      (puVar9[6] != 0)))) {
    *(char *)((long)puVar9 + 0x59) = *(char *)(param_2 + 0x808);
    iVar6 = *(int *)(param_2 + 0x81c) + 1;
    *(int *)(param_2 + 0x81c) = iVar6;
    *(int *)((long)puVar9 + 0x5c) = iVar6;
    if ((param_4 & 1) == 0) {
      FUN__text__00652a04(param_2);
    }
    lVar16 = FUN__text__00652a9c(puVar9[5]);
    puVar2 = (undefined8 *)(param_2 + lVar16 * 8);
    puVar20 = (undefined8 *)*puVar2;
    if (puVar20 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
      bVar5 = true;
    }
    else {
      do {
        __dest_00 = puVar20;
        iVar6 = FUN__text__0066c234(__dest_00[1],puVar9[1]);
        if (iVar6 != 0) {
          if (__dest_00[5] == 0) {
            if (puVar9[5] == 0) goto LAB__text__006526a0;
          }
          else if (((puVar9[5] != 0) && (iVar6 = FUN__text__0066c234(), iVar6 != 0)) &&
                  (*(char *)(__dest_00 + 8) == *(char *)(puVar9 + 8))) {
LAB__text__006526a0:
            pcVar11 = (char *)__dest_00[4];
            lVar16 = puVar9[4];
            if (pcVar11 == (char *)0x0) {
              if (lVar16 == 0) goto LAB__text__006527cc;
            }
            else if (lVar16 != 0) {
              if (((*(char *)(__dest_00 + 0xb) == '\0') || (*(char *)(puVar9 + 0xb) != '\0')) ||
                 ((local_2074 & 1) != 0)) {
                iVar6 = FUN__text__0066c234(pcVar11,lVar16);
                if (iVar6 == 0) goto LAB__text__006526e0;
              }
              else {
                pcVar17 = strchr(pcVar11 + 1,0x2f);
                if (pcVar17 == (char *)0x0) {
                  sVar10 = strlen(pcVar11);
                }
                else {
                  sVar10 = (long)pcVar17 - (long)pcVar11;
                }
                iVar6 = FUN__text__0066c2d8(pcVar11,lVar16,sVar10);
                if (iVar6 != 0) goto LAB__text__00652538;
              }
LAB__text__006527cc:
              if ((*(char *)((long)puVar9 + 0x59) != '\0') ||
                 (*(char *)((long)__dest_00 + 0x59) == '\0')) {
                *puVar9 = *__dest_00;
                *(undefined4 *)((long)puVar9 + 0x5c) = *(undefined4 *)((long)__dest_00 + 0x5c);
                FUN__text__006783e4(__dest_00[1]);
                FUN__text__006783e4(__dest_00[2]);
                FUN__text__006783e4(__dest_00[5]);
                FUN__text__006783e4(__dest_00[3]);
                FUN__text__006783e4(__dest_00[4]);
                FUN__text__006783e4(__dest_00[7]);
                FUN__text__006783e4(__dest_00[9]);
                FUN__text__006783e4(__dest_00[10]);
                memcpy(__dest_00,puVar9,0x68);
                FUN__text__006783e4(puVar9);
                puVar9 = __dest_00;
                do {
                  puVar20 = puVar9;
                  puVar9 = (undefined8 *)*puVar20;
                } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
                bVar5 = false;
                puVar9 = __dest_00;
                goto LAB__text__0065273c;
              }
              goto LAB__text__00652538;
            }
          }
        }
LAB__text__006526e0:
        puVar20 = (undefined8 *)*__dest_00;
      } while ((undefined8 *)*__dest_00 != (undefined8 *)0x0);
      bVar5 = true;
      puVar20 = __dest_00;
    }
LAB__text__0065273c:
    if (*(char *)(param_2 + 0x808) != '\0') {
      uVar13 = 0x719826;
      if (!bVar5) {
        uVar13 = 0x70ddf5;
      }
      FUN__text__00666f74(param_1,0x71f7de,uVar13,puVar9[1],puVar9[2],puVar9[5],puVar9[3],puVar9[6])
      ;
    }
    if (!bVar5) {
      return puVar9;
    }
    if (puVar20 != (undefined8 *)0x0) {
      puVar2 = puVar20;
    }
    *puVar2 = puVar9;
    *(long *)(param_2 + 0x810) = *(long *)(param_2 + 0x810) + 1;
    return puVar9;
  }
LAB__text__00652538:
  FUN__text__00652864(puVar9);
  return (undefined8 *)0x0;
}



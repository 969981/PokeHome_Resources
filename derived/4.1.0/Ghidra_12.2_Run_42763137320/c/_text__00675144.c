/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00675144; name: FUN_.text__00675144
 */


int FUN__text__00675144(long *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *__ptr;
  size_t sVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  FILE *pFVar12;
  long lVar13;
  void *pvVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  size_t local_58;
  
  lVar13 = *param_1;
  pvVar14 = *(void **)(lVar13 + 0x1130);
  *param_2 = 1;
  FUN__text__006664d0(lVar13);
  lVar11 = *param_1;
  puVar15 = *(undefined8 **)(lVar11 + 0x1e8);
  if ((*(byte *)(lVar13 + 0xf43) >> 1 & 1) == 0) {
    pFVar12 = (FILE *)puVar15[2];
    lVar11 = FUN__text__00675088(pFVar12);
    iVar4 = FUN__text__00675674(param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
    lVar16 = *(long *)(lVar13 + 0x14f8);
    if (lVar16 < 0) {
      if (lVar11 < 0) {
        FUN__text__0066713c(lVar13,0x718331);
        return 0x1a;
      }
      lVar16 = lVar16 + lVar11;
      *(long *)(lVar13 + 0x14f8) = lVar16;
    }
    if (lVar11 < lVar16) {
      FUN__text__0066713c(lVar13,0x71faa5);
    }
    else if ((lVar16 == 0) || (iVar4 = fseek(pFVar12,lVar16,0), lVar16 == iVar4)) {
      FUN__text__006663e0(lVar13,7);
      lVar11 = 0;
      while( true ) {
        sVar8 = fread(pvVar14,1,*(long *)(lVar13 + 0xc10) - 1,pFVar12);
        if ((long)sVar8 < 1) {
          iVar4 = 0;
          goto LAB__text__0067545c;
        }
        *(undefined1 *)((long)pvVar14 + sVar8) = 0;
        iVar4 = FUN__text__0066748c(param_1,1,pvVar14,sVar8);
        if (iVar4 != 0) {
          return iVar4;
        }
        lVar11 = sVar8 + lVar11;
        FUN__text__00666674(lVar13,lVar11);
        iVar4 = FUN__text__00665e14(param_1);
        if (iVar4 != 0) break;
        auVar17 = FUN__text__0066c6a8();
        iVar4 = FUN__text__0066bdd0(lVar13,auVar17._0_8_,auVar17._8_8_);
        if (iVar4 != 0) {
LAB__text__0067545c:
          iVar5 = FUN__text__00665e14(param_1);
          if (iVar5 != 0) {
            iVar4 = 0x2a;
          }
          return iVar4;
        }
      }
      iVar4 = 0x2a;
      goto LAB__text__0067545c;
    }
    return 0x24;
  }
  pcVar6 = strchr((char *)*puVar15,0x5c);
  pvVar14 = *(void **)(lVar11 + 0x1130);
  *(void **)(lVar11 + 0x1e0) = pvVar14;
  if ((pcVar6 == (char *)0x0) || (pcVar6[1] == '\0')) {
    return 0x25;
  }
  pcVar6 = (char *)0x70caeb;
  if (*(long *)(lVar11 + 0x14f8) != 0) {
    pcVar6 = (char *)0x70d60e;
  }
  pFVar12 = fopen((char *)*puVar15,pcVar6);
  if (pFVar12 == (FILE *)0x0) {
    uVar10 = *puVar15;
    uVar9 = 0x70d637;
LAB__text__006753d8:
    FUN__text__0066713c(lVar11,uVar9,uVar10);
    iVar4 = 0x17;
  }
  else {
    if (*(long *)(lVar11 + 0x1518) != -1) {
      FUN__text__006663b8(lVar11);
    }
    if (*(long *)(lVar11 + 0x14f8) < 0) {
      lVar13 = FUN__text__00675088(pFVar12);
      if (lVar13 == -1) {
        fclose(pFVar12);
        uVar10 = *puVar15;
        uVar9 = 0x717839;
        goto LAB__text__006753d8;
      }
      *(long *)(lVar11 + 0x14f8) = lVar13;
    }
    lVar13 = 0;
    while( true ) {
      local_58 = 0;
      iVar4 = FUN__text__0066c818(param_1,*(undefined8 *)(lVar11 + 0xc10),&local_58);
      if (iVar4 != 0) break;
      if (local_58 == 0) {
        iVar5 = FUN__text__00665e14(param_1);
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = 0x2a;
        }
        break;
      }
      lVar16 = *(long *)(lVar11 + 0x14f8);
      if (lVar16 == 0) {
        __ptr = pvVar14;
        sVar8 = local_58;
      }
      else {
        sVar8 = local_58 - lVar16;
        bVar3 = sVar8 == 0;
        lVar1 = lVar16;
        if (bVar3 || (long)local_58 < lVar16) {
          lVar1 = 0;
        }
        lVar2 = 0;
        if (bVar3 || (long)local_58 < lVar16) {
          lVar2 = lVar16 - local_58;
        }
        *(long *)(lVar11 + 0x14f8) = lVar2;
        if (bVar3 || (long)local_58 < lVar16) {
          sVar8 = 0;
        }
        __ptr = (void *)((long)pvVar14 + lVar1);
      }
      sVar7 = fwrite(__ptr,1,sVar8,pFVar12);
      if (sVar7 != sVar8) {
        iVar4 = 0x37;
        break;
      }
      lVar13 = sVar8 + lVar13;
      FUN__text__0066667c(lVar11,lVar13);
      iVar4 = FUN__text__00665e14(param_1);
      if (iVar4 != 0) {
        iVar4 = 0x2a;
        break;
      }
      auVar17 = FUN__text__0066c6a8();
      iVar4 = FUN__text__0066bdd0(lVar11,auVar17._0_8_,auVar17._8_8_);
      if (iVar4 != 0) break;
    }
    fclose(pFVar12);
  }
  return iVar4;
}



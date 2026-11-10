/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044d400; name: FUN_.text__0044d400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044d400(long param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (DAT_00aea688 == (long *)0x0) {
      DAT_00aea688 = (long *)FUN__text__00400f80(4,0xf0);
      if (DAT_00aea688 != (long *)0x0) {
        DAT_00aea688[1] = 0;
        DAT_00aea688[2] = 0;
        plVar4 = DAT_00ae9698;
        bVar5 = DAT_00ae96a0 != 0;
        plVar9 = DAT_00aea688;
        DAT_00aea688[3] = (long)DAT_00ae9698;
        DAT_00ae9698 = plVar9;
        lVar7 = _DAT_008a3f88;
        DAT_00ae9690 = DAT_00ae9690 + 1;
        plVar9 = (long *)&DAT_00ae9690;
        if (bVar5) {
          plVar9 = plVar4;
        }
        plVar9[2] = (long)DAT_00aea688;
        DAT_00aea688[8] = 0;
        DAT_00aea688[9] = 0;
        DAT_00aea688[0xc] = 0;
        DAT_00aea688[0xd] = 0;
        *(undefined2 *)(DAT_00aea688 + 0x1c) = 0x101;
        DAT_00aea688[0x12] = 0;
        DAT_00aea688[0x13] = 0;
        DAT_00aea688[0x16] = 0;
        DAT_00aea688[0x17] = 0;
        *DAT_00aea688 = lVar7 + 0x10;
        DAT_00aea688[0x1a] = 0;
        DAT_00aea688[0x1b] = 0;
      }
      cVar1 = (char)DAT_00aea688[0x1c];
    }
    else {
      cVar1 = (char)DAT_00aea688[0x1c];
    }
    if (cVar1 == '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar6 = FUN__text__0044bc00(param_1 + 0x20,DAT_00aea688 + 4);
    if (iVar6 == 1) {
      bVar3 = 1;
      *(undefined1 *)(param_1 + 0xe0) = 1;
      iVar6 = *(int *)(param_2 + 0x18);
      goto joined_r0x0044d564;
    }
  }
  bVar3 = 0;
  iVar6 = *(int *)(param_2 + 0x18);
joined_r0x0044d564:
  if (iVar6 != 0) {
    plVar9 = *(long **)(param_2 + 0x10);
    bVar2 = 1;
    do {
      lVar8 = *plVar9;
      lVar7 = FUN__text__0044db10(param_1 + 0x20,lVar8,0,&uStack_62);
      if (lVar7 != 0 && lVar8 != -1) {
        if ((((long *)(lVar7 - 0x18U) < *(long **)(param_1 + 0x40)) ||
            (*(long *)(lVar7 - 0x18U) != lVar8)) &&
           ((*(long **)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x48) * 3 + -3 <
             (long *)(lVar7 + 0x18U) || (*(long *)(lVar7 + 0x18U) != lVar8)))) {
          FUN__text__0044b8a0(param_1 + 0x50,lVar8,&uStack_61);
        }
      }
      plVar9 = plVar9 + 1;
      bVar2 = lVar7 != 0 & bVar2;
    } while (plVar9 != (long *)(*(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_2 + 0x18) * 8));
    if (!(bool)(bVar3 | bVar2)) {
      return;
    }
  }
  FUN__text__0044caf0(param_1);
  return;
}



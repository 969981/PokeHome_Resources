/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044d5f0; name: FUN_.text__0044d5f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044d5f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  
  lVar1 = param_1 + 0x20;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (DAT_00aea688 == (long *)0x0) {
      DAT_00aea688 = (long *)FUN__text__00400f80(4,0xf0);
      if (DAT_00aea688 != (long *)0x0) {
        DAT_00aea688[1] = 0;
        DAT_00aea688[2] = 0;
        plVar5 = DAT_00ae9698;
        bVar6 = DAT_00ae96a0 != 0;
        plVar2 = DAT_00aea688;
        DAT_00aea688[3] = (long)DAT_00ae9698;
        DAT_00ae9698 = plVar2;
        lVar4 = _DAT_008a3f88;
        DAT_00ae9690 = DAT_00ae9690 + 1;
        plVar2 = (long *)&DAT_00ae9690;
        if (bVar6) {
          plVar2 = plVar5;
        }
        plVar2[2] = (long)DAT_00aea688;
        DAT_00aea688[8] = 0;
        DAT_00aea688[9] = 0;
        DAT_00aea688[0xc] = 0;
        DAT_00aea688[0xd] = 0;
        *(undefined2 *)(DAT_00aea688 + 0x1c) = 0x101;
        DAT_00aea688[0x12] = 0;
        DAT_00aea688[0x13] = 0;
        DAT_00aea688[0x16] = 0;
        DAT_00aea688[0x17] = 0;
        *DAT_00aea688 = lVar4 + 0x10;
        DAT_00aea688[0x1a] = 0;
        DAT_00aea688[0x1b] = 0;
      }
      cVar3 = (char)DAT_00aea688[0x1c];
    }
    else {
      cVar3 = (char)DAT_00aea688[0x1c];
    }
    if (cVar3 == '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar7 = FUN__text__0044bc00(lVar1,DAT_00aea688 + 4);
    if (iVar7 == 1) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      FUN__text__0044c6b0(lVar1,param_2);
    }
    else {
      uVar8 = FUN__text__0044c6b0(lVar1,param_2);
      if ((uVar8 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xe0) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        FUN__text__0044caf0(param_1);
        return;
      }
    }
  }
  else {
    uVar8 = FUN__text__0044c6b0(lVar1,param_2);
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
  FUN__text__0044caf0(param_1);
  return;
}



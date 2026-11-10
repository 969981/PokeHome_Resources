/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e93c0; name: FUN_.text__004e93c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e93c0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_68;
  long *plStack_60;
  char local_58 [4];
  undefined4 local_54;
  undefined8 local_38;
  
  plVar3 = _DAT_008a5088;
  plVar6 = (long *)*_DAT_008a5088;
  plStack_60 = (long *)0x0;
  local_68 = (long)plVar6;
  if (plVar6 != (long *)0x0 && plVar6 + 1 != (long *)param_1) {
    do {
      plStack_60 = (long *)local_68;
      local_68 = *plStack_60;
    } while (local_68 != 0 && local_68 + 8 != param_1);
  }
  if ((*(byte *)(local_68 + 0x10) & 1) == 0) {
    uVar2 = *(undefined4 *)(local_68 + 8);
    if (DAT_00aeb9e8 != 0) {
      lVar10 = 0;
      lVar11 = 0;
      lVar9 = DAT_00aeb9e8;
      do {
        if ((*(byte *)(lVar9 + 0x5a) & 0x11) == 1) {
          local_58[0] = '\0';
          lVar5 = FUN__text__004eb2d8(*(undefined8 *)(lVar9 + 0x60),uVar2,local_58,&local_54,
                                      &local_38);
          if (local_58[0] != '\0') {
            if (lVar10 != 0) {
              if (lVar11 <= lVar5) goto LAB__text__004e9464;
            }
            unaff_x21 = local_38;
            lVar10 = lVar9;
            lVar11 = lVar5;
            unaff_w22 = local_54;
          }
        }
LAB__text__004e9464:
        lVar9 = *(long *)(lVar9 + 0x70);
      } while (lVar9 != 0);
      if ((long)(ulong)_DAT_008ab03c < lVar11) {
        if (lVar10 == 0) {
          return;
        }
        iVar4 = FUN__text__004eb5b0(*(undefined8 *)(lVar10 + 0x60),param_1,unaff_w22,unaff_x21);
        if (iVar4 == 1) {
          return;
        }
      }
    }
    FUN__text__004e95e0(uVar2,&local_68);
  }
  else {
    *(byte *)(local_68 + 0x10) = *(byte *)(local_68 + 0x10) & 0xfd;
    if (plVar6 != (long *)0x0) {
      plVar8 = (long *)0x0;
      do {
        while( true ) {
          plVar7 = plVar6;
          plVar6 = (long *)*plVar7;
          if ((*(byte *)(plVar7 + 2) >> 1 & 1) == 0) break;
          plVar8 = plVar7;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        plVar1 = plVar3;
        if ((long *)*plVar3 != plVar7) {
          plVar1 = plVar8;
        }
        *plVar1 = (long)plVar6;
        if ((long *)plVar3[1] == plVar7) {
          plVar3[1] = (long)plVar8;
          if (!((long *)plVar3[3] <= plVar7 &&
               plVar7 < (long *)plVar3[3] + (ulong)*(uint *)(plVar3 + 4) * 3))
          goto LAB__text__004e951c;
LAB__text__004e9558:
          *plVar7 = plVar3[2];
          plVar3[2] = (long)plVar7;
          *(int *)((long)plVar3 + 0x24) = *(int *)((long)plVar3 + 0x24) + -1;
        }
        else {
          if (!(plVar7 < (long *)plVar3[3] ||
               (long *)plVar3[3] + (ulong)*(uint *)(plVar3 + 4) * 3 <= plVar7))
          goto LAB__text__004e9558;
LAB__text__004e951c:
          FUN__text__00400fc0(0);
          *(int *)((long)plVar3 + 0x24) = *(int *)((long)plVar3 + 0x24) + -1;
        }
      } while (plVar6 != (long *)0x0);
    }
  }
  return;
}



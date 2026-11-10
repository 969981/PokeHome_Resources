/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004188b0; name: FUN_.text__004188b0
 */


void FUN__text__004188b0(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1 + 0x120;
  uVar5 = 4;
  do {
    do {
      uVar4 = uVar5 - 1;
      plVar3 = *(long **)(param_1 + (uVar4 & 0xffffffff) * 8 + 0xa8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x80))(plVar3,lVar1);
        iVar2 = *(int *)(param_1 + 0x14c);
        if (iVar2 != 0x2b) {
          if ((iVar2 != 0x11) && (iVar2 != 0x2d)) {
            return;
          }
          uVar4 = uVar5 & 0xffffffff;
          goto LAB__text__00418940;
        }
      }
      uVar5 = uVar4;
    } while ((int)uVar4 != 0);
    do {
      FUN__text__0044fbd0(param_1,lVar1);
      uVar4 = 0;
      if ((*(int *)(param_1 + 0x14c) != 0x11) && (*(int *)(param_1 + 0x14c) != 0x2d)) {
        return;
      }
LAB__text__00418940:
      if (3 < uVar4) goto LAB__text__00418a58;
      plVar3 = *(long **)(param_1 + uVar4 * 8 + 0xa8);
      if (plVar3 == (long *)0x0) {
LAB__text__00418988:
        if (2 < uVar4) goto LAB__text__00418a58;
        uVar5 = uVar4 + 1;
        plVar3 = *(long **)(param_1 + uVar5 * 8 + 0xa8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x88))(plVar3,lVar1);
          iVar2 = *(int *)(param_1 + 0x14c);
          if (iVar2 != 0x2d) {
            if (iVar2 == 0x2b) goto LAB__text__00418a40;
            if (iVar2 != 0x11) {
              return;
            }
          }
        }
        if (1 < uVar4) goto LAB__text__00418a58;
        uVar5 = uVar4 + 2;
        plVar3 = *(long **)(param_1 + uVar5 * 8 + 0xa8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x88))(plVar3,lVar1);
          iVar2 = *(int *)(param_1 + 0x14c);
          if (iVar2 != 0x2d) {
            if (iVar2 == 0x2b) goto LAB__text__00418a40;
            if (iVar2 != 0x11) {
              return;
            }
          }
        }
        if (uVar4 != 0) {
LAB__text__00418a58:
          FUN__text__0045795c(param_1 + 200,lVar1);
          FUN__text__0044ff98(param_1,lVar1);
          return;
        }
        uVar5 = 3;
        plVar3 = *(long **)(param_1 + 0xc0);
        if (plVar3 == (long *)0x0) goto LAB__text__00418a58;
        (**(code **)(*plVar3 + 0x88))(plVar3,lVar1);
        iVar2 = *(int *)(param_1 + 0x14c);
        if (iVar2 != 0x2b) {
          if ((iVar2 != 0x2d) && (iVar2 != 0x11)) {
            return;
          }
          goto LAB__text__00418a58;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x88))(plVar3,lVar1);
        iVar2 = *(int *)(param_1 + 0x14c);
        if ((iVar2 == 0x11) || (iVar2 == 0x2d)) goto LAB__text__00418988;
        uVar5 = uVar4;
        if (iVar2 != 0x2b) {
          return;
        }
      }
LAB__text__00418a40:
    } while (uVar5 == 0);
  } while( true );
}



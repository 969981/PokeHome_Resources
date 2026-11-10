/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436920; name: FUN_.text__00436920
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00436920(long param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN__text__00434700(*_DAT_008a45f0,*(undefined8 *)(lVar3 + 0x28),lVar3);
    if (*(long *)(lVar3 + 8) != 0) {
      FUN__text__00400fc0(0);
    }
    *(long *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined4 *)(lVar3 + 0x18) = 1;
    FUN__text__00400fc0(0x10,lVar3);
  }
  FUN__text__00436aa0((undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  plVar1 = plVar4;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (plVar4 == (long *)0x0) goto LAB__text__00436a84;
  }
  else {
    do {
      plVar5 = plVar1;
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        FUN__text__004360b8(lVar3);
        FUN__text__00400fc0(0x10,lVar3);
        *plVar5 = 0;
      }
      *(undefined4 *)(plVar5 + 2) = 0;
      *(byte *)(plVar5 + 3) = *(byte *)(plVar5 + 3) & 0xfe | 3 < *(byte *)(plVar5 + 3);
      plVar4 = *(long **)(param_1 + 0x28);
      plVar1 = plVar5 + 5;
    } while (plVar5 + 5 != plVar4 + (ulong)*(uint *)(param_1 + 0x30) * 5);
    if (plVar4 == (long *)0x0) goto LAB__text__00436a84;
    if (*(uint *)(param_1 + 0x30) != 0) {
      do {
        FUN__text__004365a4(plVar4);
        bVar2 = plVar5 != plVar4;
        plVar4 = plVar4 + 5;
      } while (bVar2);
      plVar4 = *(long **)(param_1 + 0x28);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN__text__00400fc0(0,plVar4);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
LAB__text__00436a84:
  *(undefined2 *)(param_1 + 0x38) = 0xffff;
  return;
}



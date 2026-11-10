/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436aa0; name: FUN_.text__00436aa0
 */


void FUN__text__00436aa0(undefined8 *param_1)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (0 < (int)*(uint *)(param_1 + 5)) {
    uVar3 = (ulong)*(uint *)(param_1 + 5) + 1;
    do {
      FUN__text__00438520(param_1[4] + (ulong)((int)uVar3 - 2) * 0x20);
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN__text__00400fc0(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  plVar4 = (long *)*param_1;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  plVar1 = plVar4;
  if (*(int *)(param_1 + 1) == 0) {
    if (plVar4 == (long *)0x0) goto LAB__text__00436ba0;
  }
  else {
    do {
      plVar5 = plVar1;
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        FUN__text__004360b8(lVar6);
        FUN__text__00400fc0(0x10,lVar6);
        *plVar5 = 0;
      }
      *(undefined4 *)(plVar5 + 2) = 0;
      *(byte *)(plVar5 + 3) = *(byte *)(plVar5 + 3) & 0xfe | 3 < *(byte *)(plVar5 + 3);
      plVar4 = (long *)*param_1;
      plVar1 = plVar5 + 5;
    } while (plVar5 + 5 != plVar4 + (ulong)*(uint *)(param_1 + 1) * 5);
    if (plVar4 == (long *)0x0) {
LAB__text__00436ba0:
      *(undefined2 *)(param_1 + 2) = 0xffff;
      return;
    }
    if (*(uint *)(param_1 + 1) != 0) {
      do {
        FUN__text__004365a4(plVar4);
        bVar2 = plVar5 != plVar4;
        plVar4 = plVar4 + 5;
      } while (bVar2);
      plVar4 = (long *)*param_1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN__text__00400fc0(0,plVar4);
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  return;
}



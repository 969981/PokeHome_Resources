/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00691010; name: FUN_.text__00691010
 */


void FUN__text__00691010(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = FUN__text__006ee750(*(undefined8 *)(param_1 + 0x1e98));
  memset((void *)(lVar2 + *(long *)(param_1 + 0x1ea0)),0,
         (ulong)(uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28)));
  FUN__text__006ee764(*(undefined8 *)(param_1 + 0x1e98));
  plVar4 = *(long **)(param_1 + 0x58);
  while (plVar4 != (long *)(param_1 + 0x50)) {
    plVar1 = (long *)plVar4[1];
    lVar2 = *plVar1;
    *(long **)(*plVar4 + 8) = plVar1;
    *plVar1 = *plVar4;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    plVar4 = *(long **)(param_1 + 0x58);
  }
  plVar4 = *(long **)(param_1 + 0x68);
  while (plVar4 != (long *)(param_1 + 0x60)) {
    plVar1 = (long *)plVar4[1];
    lVar2 = *plVar1;
    *(long **)(*plVar4 + 8) = plVar1;
    *plVar1 = *plVar4;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    plVar4 = *(long **)(param_1 + 0x68);
  }
  plVar4 = *(long **)(param_1 + 0x78);
  while (plVar4 != (long *)(param_1 + 0x70)) {
    plVar1 = (long *)plVar4[1];
    lVar2 = *plVar1;
    *(long **)(*plVar4 + 8) = plVar1;
    *plVar1 = *plVar4;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    plVar4 = *(long **)(param_1 + 0x78);
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x1880);
  if (*(uint *)(param_1 + 0x1880) != 0) {
    uVar3 = 0;
    do {
      lVar2 = param_1 + uVar3 * 0x18;
      plVar4 = *(long **)(lVar2 + 0x88);
      if (plVar4 != (long *)(lVar2 + 0x80)) {
        do {
          plVar1 = (long *)plVar4[1];
          lVar6 = *plVar1;
          *(long **)(*plVar4 + 8) = plVar1;
          *plVar1 = *plVar4;
          *(long **)(lVar6 + 8) = plVar4;
          *plVar4 = lVar6;
          plVar4 = *(long **)(lVar2 + 0x88);
        } while (plVar4 != (long *)(lVar2 + 0x80));
        uVar5 = (ulong)*(uint *)(param_1 + 0x1880);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  *(undefined4 *)(param_1 + 0x1880) = 0;
  FUN__text__00692500(param_1 + 0x30);
  return;
}



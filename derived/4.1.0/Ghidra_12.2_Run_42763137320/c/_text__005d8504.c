/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8504; name: FUN_.text__005d8504
 */


undefined8 FUN__text__005d8504(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [8];
  
  *(undefined4 *)(param_1 + 100) = 4;
  lVar2 = *(long *)(param_1 + 0x108);
  if (lVar2 == 0 && *(long *)(param_1 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
    return 0;
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    return 4;
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(*(long *)(param_1 + 0x100) + lVar2 * 8 + -8) + 0x60))();
    lVar3 = *(long *)(param_1 + 0x108);
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x100) + lVar3 * 8);
  if (lVar3 == *(long *)(param_1 + 0x110)) {
    FUN__text__005d8830(auStack_28,param_1 + 0xc0,puVar1,1,(long *)(param_1 + 0x68));
  }
  else {
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xc0);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *puVar1 = uVar5;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  }
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 3;
  return 3;
}



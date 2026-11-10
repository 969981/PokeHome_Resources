/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00507b30; name: FUN_.text__00507b30
 */


void FUN__text__00507b30(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 1) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 1) * 0x50;
      do {
        (**(code **)*puVar1)(puVar1);
        lVar3 = lVar3 + -0x50;
        puVar1 = puVar1 + 10;
      } while (lVar3 != 0);
      puVar1 = (undefined8 *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0xb,puVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if ((int)param_1[7] != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[6];
      plVar2 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          FUN__text__00400fc0(0xb);
        } while (plVar2 != (long *)0x0);
        lVar3 = param_1[6];
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 7));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN__text__00400fc0(0xb);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  FUN__text__0051cae0(param_1 + 2);
  return;
}



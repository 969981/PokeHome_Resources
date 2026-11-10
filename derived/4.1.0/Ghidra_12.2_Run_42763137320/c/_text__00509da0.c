/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00509da0; name: FUN_.text__00509da0
 */


void FUN__text__00509da0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 1) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 1) * 0x50;
      do {
        (**(code **)*puVar1)(puVar1);
        lVar2 = lVar2 + -0x50;
        puVar1 = puVar1 + 10;
      } while (lVar2 != 0);
      puVar1 = (undefined8 *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0xb,puVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = (long *)param_1[2];
  if (plVar3 != (long *)0x0) {
    if (*(uint *)(param_1 + 3) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 3) << 5;
      do {
        if (*plVar3 != 0) {
          *(undefined4 *)(plVar3 + 1) = 0;
          FUN__text__00400fc0(0xb);
          *plVar3 = 0;
          *(undefined4 *)((long)plVar3 + 0xc) = 0;
        }
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
      plVar3 = (long *)param_1[2];
    }
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(10,plVar3);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  param_1[2] = param_2[2];
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0;
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ad290; name: FUN_.text__004ad290
 */


void FUN__text__004ad290(long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (param_2 & 0xffffffff) * 8);
  if (param_4 != (undefined8 *)0x0) {
    puVar1 = param_4;
  }
  *puVar1 = *param_3;
  uVar2 = (ulong)*(uint *)(param_3 + 3);
  puVar1 = (undefined8 *)param_3[2];
  if (*(uint *)(param_3 + 3) != 0) {
    __dest = puVar1;
    do {
      while (*(char *)((long)__dest + 0xc) == '\x01') {
        FUN__text__00400fc0(*(undefined4 *)(__dest + 2),*__dest);
        uVar2 = (ulong)(*(int *)(param_3 + 3) - 1);
        puVar1 = (undefined8 *)param_3[2];
        if (__dest < puVar1 + uVar2 * 3) {
          memmove(__dest,__dest + 3,(ulong)(uint)((int)(puVar1 + uVar2 * 3) - (int)__dest));
          uVar2 = (ulong)(*(int *)(param_3 + 3) - 1);
          puVar1 = (undefined8 *)param_3[2];
        }
        *(int *)(param_3 + 3) = (int)uVar2;
        if (__dest == puVar1 + uVar2 * 3) goto LAB__text__004ad34c;
      }
      __dest = __dest + 3;
    } while (__dest != puVar1 + uVar2 * 3);
  }
LAB__text__004ad34c:
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_3 + 3) = 0;
    FUN__text__00400fc0(0);
    param_3[2] = 0;
    *(undefined4 *)((long)param_3 + 0x1c) = 0;
  }
  FUN__text__00400fc0(0,param_3);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  return;
}



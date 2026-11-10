/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004961d0; name: FUN_.text__004961d0
 */


undefined8 FUN__text__004961d0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)param_1[0x1c];
  if (puVar5 != (undefined8 *)0x0) {
    plVar2 = (long *)*puVar5;
    uVar3 = *(uint *)(puVar5 + 1);
    plVar1 = plVar2;
    if (uVar3 == 0) {
LAB__text__00496220:
      if (plVar1 != plVar2 + uVar3) {
        uVar3 = uVar3 - 1;
        if (plVar1 < plVar2 + uVar3) {
          memmove(plVar1,plVar1 + 1,(ulong)(uint)((int)(plVar2 + uVar3) - (int)plVar1) & 0xfffffff8)
          ;
          uVar3 = *(int *)(puVar5 + 1) - 1;
        }
        *(uint *)(puVar5 + 1) = uVar3;
        (**(code **)(*param_1 + 0x188))(param_1,0,0);
        return 1;
      }
    }
    else {
      lVar4 = (ulong)uVar3 << 3;
      do {
        if (*plVar1 == param_2) goto LAB__text__00496220;
        plVar1 = plVar1 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  return 2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00449730; name: FUN_.text__00449730
 */


void FUN__text__00449730(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = *(uint *)(param_2 + 0xd2) >> 0x11;
  iVar1 = *(int *)(param_2 + 0x20);
  puVar3 = param_1;
  do {
    puVar3 = (undefined8 *)*puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_1[2];
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN__text__00400f80(0,0x10);
        if (puVar3 == (undefined8 *)0x0) {
          return;
        }
        *puVar3 = param_1[2];
        param_1[2] = puVar3;
        puVar4 = (undefined8 *)param_1[1];
      }
      else {
        puVar4 = (undefined8 *)param_1[1];
      }
      if (puVar4 == (undefined8 *)0x0) {
        *param_1 = puVar3;
      }
      else {
        *puVar4 = puVar3;
        puVar3 = (undefined8 *)param_1[2];
      }
      param_1[1] = puVar3;
      param_1[2] = *puVar3;
      *puVar3 = 0;
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
      *(ulong *)(param_1[1] + 8) = CONCAT44(uVar2,iVar1) & 0x1ffffffff;
      return;
    }
  } while (iVar1 != *(int *)(puVar3 + 1) || (uVar2 & 1) != (uint)*(byte *)((long)puVar3 + 0xc));
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003febd0; name: FUN_.text__003febd0
 */


void FUN__text__003febd0(long param_1,ulong *param_2)

{
  uint uVar1;
  void *__dest;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar5 = 0;
  iVar4 = uVar2 - 1;
  iVar6 = iVar4;
  do {
    while( true ) {
      iVar3 = iVar6 - iVar5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      uVar1 = iVar5 + (iVar3 >> 1);
      puVar7 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 8);
      if ((uint)puVar7[4] <= (uint)param_2[4]) break;
LAB__text__003fec00:
      iVar6 = uVar1 - 1;
      if (iVar6 < iVar5) goto LAB__text__003fec98;
    }
    if ((uint)param_2[4] <= (uint)puVar7[4]) {
      if (*puVar7 < *param_2) goto LAB__text__003fec00;
      if (*puVar7 <= *param_2) {
        if (param_2[1] < puVar7[1]) goto LAB__text__003fec00;
        if (param_2[1] <= puVar7[1]) {
          if (uVar1 + 1 < uVar2) {
            __dest = (void *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 8);
            memmove(__dest,(void *)((long)__dest + 8),(ulong)((uVar2 + ~uVar1) * 8));
            iVar4 = *(int *)(param_1 + 0x30) + -1;
          }
          *(int *)(param_1 + 0x30) = iVar4;
          break;
        }
      }
    }
    iVar5 = uVar1 + 1;
  } while (iVar5 <= iVar6);
LAB__text__003fec98:
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  return;
}


